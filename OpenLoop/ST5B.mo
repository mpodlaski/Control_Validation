within Control_Validation.OpenLoop;
model ST5B "SMIB system with one load and GENROE model"
  extends OpenIPSL.Examples.SMIBpartial;
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B(
    T_R=0,
    T_C1=0.8,
    T_B1=6,
    T_C2=0.08,
    T_B2=0.01,
    T_UC1=2,
    T_UB1=10,
    T_UC2=0.1,
    T_UB2=0.05,
    T_OC1=0.1,
    T_OB1=2,
    T_OC2=0.08,
    T_OB2=0.08,
    K_C=0.004,
    T_1=0.001,
    K_R=200,
    V_RMAX=5,
    V_RMIN=-4)
    annotation (Placement(transformation(extent={{-60,-60},{-80,-40}})));
  Modelica.Blocks.Sources.Constant PSS_off(k=0)
    annotation (Placement(transformation(extent={{-44,-44},{-52,-36}})));
  Modelica.Blocks.Sources.Constant VOEL(k=100)
    annotation (Placement(transformation(extent={{-92,-78},{-80,-66}})));
  Modelica.Blocks.Sources.Constant VUEL(k=-100)
    annotation (Placement(transformation(extent={{-92,-96},{-80,-84}})));
  OpenIPSL.Electrical.Machines.PSSE.GENROE gENROE(
    Tpd0=5,
    Tppd0=0.07,
    Tpq0=0.9,
    Tppq0=0.09,
    H=4.28,
    D=0,
    Xd=1.84,
    Xq=1.75,
    Xpd=0.41,
    Xpq=0.6,
    Xppd=0.2,
    Xl=0.12,
    S10=0.11,
    S12=0.39,
    angle_0=4.046276,
    Xppq=0.2,
    M_b=100000000,
    P_0=40000000,
    Q_0=5416582,
    v_0=1) annotation (Placement(transformation(extent={{-88,-20},{-48,20}})));
  Modelica.Blocks.Noise.NormalNoise normalNoise(samplePeriod=0.01, sigma=0.001)
    annotation (Placement(transformation(extent={{-6,-94},{-20,-80}})));
  Modelica.Blocks.Math.Add add
    annotation (Placement(transformation(extent={{-38,-84},{-46,-76}})));
  inner Modelica.Blocks.Noise.GlobalSeed globalSeed
    annotation (Placement(transformation(extent={{38,56},{58,76}})));
equation
  connect(PSS_off.y, sT5B.VOTHSG) annotation (Line(points={{-52.4,-40},{-56,-40},{-56,-46},{-59,-46}},
                           color={0,0,127}));
  connect(VOEL.y, sT5B.VOEL) annotation (Line(points={{-79.4,-72},{-70,-72},{-70,-61}},
                        color={0,0,127}));
  connect(VUEL.y, sT5B.VUEL) annotation (Line(points={{-79.4,-90},{-66,-90},{-66,-61}},
                        color={0,0,127}));
  connect(sT5B.XADIFD, gENROE.XADIFD) annotation (Line(points={{-78,-61},{-78,-66},{-42,-66},{-42,-18},{-46,-18}},
                                                color={0,0,127}));
  connect(sT5B.EFD0, gENROE.EFD0) annotation (Line(points={{-59,-54},{-38,-54},{-38,-10},{-46,-10}},
                                          color={0,0,127}));
  connect(sT5B.EFD, gENROE.EFD) annotation (Line(points={{-81,-50},{-100,-50},{-100,-10},{-92,-10}},
                                            color={0,0,127}));
  connect(gENROE.PMECH, gENROE.PMECH0) annotation (Line(points={{-92,10},{-100,10},{-100,30},{-40,30},{-40,10},{-46,10}},
                                                     color={0,0,127}));
  connect(gENROE.p, GEN1.p)
    annotation (Line(points={{-48,0},{-30,0}},         color={0,0,255}));
  connect(add.y, sT5B.ECOMP) annotation (Line(points={{-46.4,-80},{-50,-80},{
          -50,-50},{-59,-50}}, color={0,0,127}));
  connect(add.u2, normalNoise.y) annotation (Line(points={{-37.2,-82.4},{-30,
          -82.4},{-30,-87},{-20.7,-87}}, color={0,0,127}));
  connect(gENROE.ETERM, add.u1) annotation (Line(points={{-46,-6},{-32,-6},{-32,
          -77.6},{-37.2,-77.6}}, color={0,0,127}));
  annotation (
experiment(StopTime=10));
end ST5B;
