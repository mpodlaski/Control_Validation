%% 
% This script takes numerous starting point guesses and computes the
% optimal parameter solution in parallel to each other using the MultiStart
% optimization function. It essentially runs fmincon using multiple points
% in parallel to speed up the optimization. This is further explained in
% https://www.mathworks.com/help/gads/example-parallel-multistart.html

%% ==========Moving to the example folder==========


[str,~,~] = fileparts(mfilename('fullpath'));
oldFolder=cd(str);

%% ==========Reference data settings==========

% Create a rapidSettings (optional but recommended - will work with just a structure)
rapidSettings=RaPIdClass();

%Output data
rapidSettings.experimentData.pathToReferenceData = 'measuredDataO_whiteNoise_limit.mat'; %Data file name
rapidSettings.experimentData.expressionReferenceTime = 't'; %Time variable name
rapidSettings.experimentData.expressionReferenceData = 'y'; %Data variable name

%Input data
rapidSettings.experimentData.pathToInData = 'inputData_whiteNoise_limit.mat';
rapidSettings.experimentData.expressionInDataTime = 't_in'; %Time variable name
rapidSettings.experimentData.expressionInData = 'y_in'; %Data variable name

%% ==========Experiment settings==========

%General settings 
rapidSettings.experimentSettings.tf = 10; %Simulation length
rapidSettings.experimentSettings.ts = 0.01; %Sampling time
rapidSettings.experimentSettings.t_fitness_start = 0; %Start calculating fintess function after t_fintess_start
rapidSettings.experimentSettings.timeOut = 10000; %Seconds before simulation timeout
rapidSettings.experimentSettings.integrationMethod = 'ode45'; %Solver selection
rapidSettings.experimentSettings.solverMode = 'Simulink';
rapidSettings.experimentSettings.optimizationAlgorithm = 'fmincon'; %Selection of optimization algorithm
rapidSettings.experimentSettings.maxIterations = 50; %Maximum number of estimation iterations
rapidSettings.experimentSettings.verbose = 1; %Can trigger more data for debugging
rapidSettings.experimentSettings.saveHist = 0; %Don't save history
rapidSettings.experimentSettings.UseParallel = 1;
%Model related settings
rapidSettings.experimentSettings.pathToSimulinkModel = 'sim_model.mdl'; %Simulink model file name
rapidSettings.experimentSettings.pathToFMUModel = 'AVR_OL.fmu'; %FMU file name
rapidSettings.experimentSettings.modelName = 'sim_model'; %Simulink model name
rapidSettings.experimentSettings.blockName = 'sim_model/AVR_OL'; %FMU name
rapidSettings.experimentSettings.scopeName = 'simout'; %Result sink name
rapidSettings.experimentSettings.displayMode = 'Show';

%Estimation parameter settings

% rapidSettings.experimentSettings.p_0 = [19,10000, 10000,10000;
%                                         15, 8000, 80000,8000;
%                                         30, 5000, 5000,5000;
%                                         25, 50000, 10000,10000;
%                                         15, 15000, 10000,10000]; %Initial parameter guesses
% rapidSettings.experimentSettings.p_min = [0.1, 1000, 1000, 1000]; %Minimum values of parameters
% rapidSettings.experimentSettings.p_max = [10000, 20000, 20000, 20000]; %Maximum values of parameters
rapidSettings.experimentSettings.p_0 = [ 0     0.8032916     5.8515   0.08634292    0.012391948      200.9450  0.004659283      5    -4];

%                                         0.2, 0.001, 1.5, 1.1;
%                                         1, 2, 1.3, 0.5;
%                                         1.3, 3, 0.87, 0.45;
%                                         1.5, 3.1, 0.9, 0.6]; %Initial parameter guesses
rapidSettings.experimentSettings.p_min =  [0, 0.5,3,0,1e-3,150,1e-6,1e-4,-10]; %Minimum values of parameters
rapidSettings.experimentSettings.p_max =  [0.01, 1,8,0.25,0.05,250,0.01,10,0]; %Maximum values of parameters

i = 9;
rapidSettings.experimentSettings.p_0 = rapidSettings.experimentSettings.p_0(1:i);
rapidSettings.experimentSettings.p_min = rapidSettings.experimentSettings.p_min(1:i);
rapidSettings.experimentSettings.p_max = rapidSettings.experimentSettings.p_max(1:i);
%Fitness function settings
rapidSettings.experimentSettings.cost_type = 1; %Fitness function selection
rapidSettings.experimentSettings.objective_weights = 1; %Weights of the output signals for fitness function

%% ==========Optimization Algorithm settings==========

switch lower(rapidSettings.experimentSettings.optimizationAlgorithm) % use lower to add robustness
    case 'pso'
        rapidSettings.psoSettings.w = 0.25; %Particle inertia weight
        rapidSettings.psoSettings.self_coeff = 0.25; %Self recognition coefficient
        rapidSettings.psoSettings.social_coeff = 0.25; %Social coefficient
        rapidSettings.psoSettings.limit = 0.25; %Iteration limit
        rapidSettings.psoSettings.nRandMin = 8; %Minimum number of random particles 
        rapidSettings.psoSettings.nb_particles = 8; %Number of particles
        rapidSettings.psoSettings.fitnessStopRatio = 1e-2; %Fitness stop ratio
        rapidSettings.psoSettings.kick_multiplier = 0.002; %Kick multiplier
        rapidSettings.psoSettings.method = 'PSO';
    case 'parallel'
        rapidSettings.parallelSettings.parallel = 'optimset(''UseParallel'',false)';
    case 'fmincon'
       rapidSettings.fminconSettings = 'optimset(''FinDiffRelStep'',0.1,''UseParallel'',false)';
end

%% ==========FMU parameters, inputs and outputs==========

rapidSettings.parameterNames = {'sT5B.T_R','sT5B.T_C1','sT5B.T_B1','sT5B.T_C2','sT5B.T_B2','sT5B.K_R','sT5B.T_1','sT5B.V_RMAX','sT5B.V_RMIN'};
rapidSettings.parameterNames = rapidSettings.parameterNames(1:i);

rapidSettings.fmuInputNames = {'Vt','XADIFD'};
rapidSettings.fmuOutputNames = {'EFD'}; %Output variable names

%% ==========Running the computation==========

%Opening simulink model
open_system(rapidSettings.experimentSettings.pathToSimulinkModel); %Opening the simulink model
open_system(strcat(rapidSettings.experimentSettings.modelName,'/EFD')); %Opening the scope in the model to observe estimation process
pause(1); %Waiting one second for scope to initialize
%%
% Create the object which carries out the work
startTime = tic ;
rapidObject=Rapid(rapidSettings);
%Starting the estimation process
[sol, hist] = rapidObject.runIdentification();
fmincon_time = toc(startTime);
sprintf('Vector of estimated parameters is: %s',mat2str(sol,3)) 
%Restoring workspace
cd(oldFolder);

