within Control_Validation;
model SEXS "Simplified excitation system model"
  extends OpenIPSL.Icons.VerifiedModel;
  extends OpenIPSL.Electrical.Controls.PSSE.ES.BaseClasses.BaseExciter;
  parameter Real T_AT_B=0.1 "Ratio between regulator numerator (lead) and denominator (lag) time constants";
  parameter Real T_B=1 "Regulator denominator (lag) time constant";
  parameter Real K=100 "Excitation power source output gain";
  parameter Real T_E=0.1 "Excitation power source output time constant";
  parameter Real E_MIN=-10 "Minimum exciter output";
  parameter Real E_MAX=10 "Maximum exciter output";
  Modelica.Blocks.Math.Add3 V_erro(
    k3=1,
    k1=1,
    k2=1) annotation (Placement(transformation(extent={{-40,-10},{-20,10}})));
  OpenIPSL.NonElectrical.Continuous.SimpleLagLim simpleLagLim(
    K=K,
    T=T_E,
    y_start=Efd0,
    outMax=E_MAX,
    outMin=E_MIN)
    annotation (Placement(transformation(extent={{98,-10},{118,10}})));
  Modelica.Blocks.Math.Add DiffV1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-100,-50})));
  OpenIPSL.NonElectrical.Continuous.LeadLag leadLag(
    K=1,
    T1=T_AT_B*T_B,
    T2=T_B,
    y_start=Efd0/K,
    x_start=Efd0/K)
    annotation (Placement(transformation(extent={{40,-10},{60,10}})));
  Modelica.Electrical.PowerConverters.DCAC.SinglePhase2Level inverter
    annotation (Placement(transformation(extent={{86,-78},{106,-58}})));
  Modelica.Electrical.PowerConverters.DCDC.Control.SignalPWM signalPWM(
    useConstantDutyCycle=true,
    constantDutyCycle=1,
    f(displayUnit="Hz") = 1)           annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        origin={96,-98})));
  Modelica.Electrical.Analog.Sources.SignalVoltage signalVoltage annotation (
      Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=270,
        origin={56,-68})));
  Modelica.Electrical.Analog.Basic.Ground ground
    annotation (Placement(transformation(extent={{56,-98},{76,-78}})));
  Modelica.Electrical.Analog.Basic.Ground ground1
    annotation (Placement(transformation(extent={{148,-114},{168,-94}})));
  Modelica.Electrical.Analog.Basic.Resistor resistor(R=1)
    annotation (Placement(transformation(extent={{126,-78},{146,-58}})));
  Modelica.Electrical.Analog.Sensors.VoltageSensor voltageSensor
    annotation (Placement(transformation(extent={{126,-32},{146,-52}})));
  Modelica.Blocks.Nonlinear.Limiter limiter(uMax=E_MAX, uMin=E_MIN)
    annotation (Placement(transformation(extent={{12,-42},{0,-30}})));
  Modelica.Blocks.Math.Gain gain(k=100)
    annotation (Placement(transformation(extent={{60,-46},{40,-26}})));
initial equation
  V_REF = Efd0/K + ECOMP0;
equation
  connect(DiffV1.u1, VUEL) annotation (Line(points={{-106,-62},{-106,-80},{-130,
          -80},{-130,-200}}, color={0,0,127}));
  connect(DiffV1.u2, VOEL) annotation (Line(points={{-94,-62},{-94,-80},{-70,-80},
          {-70,-200}}, color={0,0,127}));
  connect(DiffV1.y, V_erro.u3) annotation (Line(points={{-100,-39},{-100,-20},{
          -52,-20},{-52,-8},{-42,-8}}, color={0,0,127}));
  connect(DiffV.y, V_erro.u2)
    annotation (Line(points={{-99,0},{-42,0}}, color={0,0,127}));
  connect(V_erro.u1, VOTHSG) annotation (Line(points={{-42,8},{-52,8},{-52,90},
          {-200,90}}, color={0,0,127}));
  connect(ECOMP, DiffV.u2) annotation (Line(points={{-200,0},{-166,0},{-132,0},
          {-132,-6},{-122,-6}}, color={0,0,127}));
  connect(leadLag.u, V_erro.y)
    annotation (Line(points={{38,0},{-19,0}}, color={0,0,127}));
  connect(leadLag.y, simpleLagLim.u)
    annotation (Line(points={{61,0},{96,0}},  color={0,0,127}));
  connect(inverter.fire_p, signalPWM.fire)
    annotation (Line(points={{90,-80},{90,-87}}, color={255,0,255}));
  connect(inverter.fire_n, signalPWM.notFire)
    annotation (Line(points={{102,-80},{102,-87}}, color={255,0,255}));
  connect(signalVoltage.p, inverter.dc_p) annotation (Line(points={{56,-58},{56,
          -56},{80,-56},{80,-62},{86,-62}}, color={0,0,255}));
  connect(inverter.dc_n, signalVoltage.n) annotation (Line(points={{86,-74},{72,
          -74},{72,-78},{56,-78}}, color={0,0,255}));
  connect(inverter.dc_n, ground.p) annotation (Line(points={{86,-74},{72,-74},{
          72,-78},{66,-78}}, color={0,0,255}));
  connect(inverter.ac, resistor.p)
    annotation (Line(points={{106,-68},{126,-68}}, color={0,0,255}));
  connect(resistor.n, ground1.p)
    annotation (Line(points={{146,-68},{158,-68},{158,-94}}, color={0,0,255}));
  connect(voltageSensor.p, resistor.p) annotation (Line(points={{126,-42},{118,
          -42},{118,-68},{126,-68}}, color={0,0,255}));
  connect(voltageSensor.n, ground1.p)
    annotation (Line(points={{146,-42},{158,-42},{158,-94}}, color={0,0,255}));
  connect(gain.u, simpleLagLim.u) annotation (Line(points={{62,-36},{84,-36},{
          84,0},{96,0}}, color={0,0,127}));
  connect(gain.y, limiter.u)
    annotation (Line(points={{39,-36},{13.2,-36}}, color={0,0,127}));
  connect(limiter.y, signalVoltage.v) annotation (Line(points={{-0.6,-36},{
          -24.35,-36},{-24.35,-68},{44,-68}}, color={0,0,127}));
  connect(EFD, voltageSensor.v)
    annotation (Line(points={{210,0},{136,0},{136,-31}}, color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(extent={{-200,-200},{200,160}})),
    Icon(coordinateSystem(extent={{-100,-100},{100,100}}),
        graphics={Text(
          extent={{-100,160},{100,100}},
          lineColor={28,108,200},
          textString="SEXS")}),
    Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\"><tr>
<td><p>Model Name</p></td>
<td><p>SEXS</p></td>
</tr>
<tr>
<td><p>Reference</p></td>
<td><p>PSS/E Manual</p></td>
</tr>
<tr>
<td><p>Last update</p></td>
<td><p>September 2020</p></td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Mengjia Zhang, SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:vanfrl@rpi.edu\">vanfrl@rpi.edu</a></p></td>
</tr>
<tr>
<td><p>Model Verification</p></td>
<td><p>This model has been verified against PSS/E.</p></td>
</tr>
<tr>
<td><p>Description</p></td>
<td><p>Simplified Excitation System Model.</p></td>
</tr>
</table>
</html>"));
end SEXS;
