within Control_Validation;
model VoltageSource
  extends OpenIPSL.Electrical.Essentials.pfComponent;
  Modelica.SIunits.Conversions.NonSIunits.Angle_deg angle(start=angle_0)
    "Bus voltage angle";
  Real V(start=v_0) "Bus voltage magnitude (pu)";
  Real P "Active Power absorbed by the Infinite bus (MW)";
  Real Q "Reactive Power absorbed by the Infinite bus (MVAr)";
  parameter Boolean displayPF=false "Display voltage values:" annotation (Dialog(
      group="Visualisation",
      __Dymola_compact=true,
      __Dymola_descriptionLabel=true), choices(checkBox=true));
  OpenIPSL.Interfaces.PwPin p(vr(start=v_0*cos(angle_0*Modelica.Constants.pi/180)), vi(start=v_0*
          sin(angle_0*Modelica.Constants.pi/180)))
    annotation (Placement(
      visible=true,
      transformation(
        origin={110,0},
        extent={{-10.0,-10.0},{10.0,10.0}},
        rotation=0),
      iconTransformation(
        origin={110,0},
        extent={{-10,-10},{10,10}},
        rotation=0)));
  Modelica.Blocks.Interfaces.RealInput u1 "Real Part"
    annotation (Placement(transformation(extent={{-140,20},{-100,60}})));
  Modelica.Blocks.Interfaces.RealInput u2 "Imaginary Part"
    annotation (Placement(transformation(extent={{-140,-60},{-100,-20}})));
equation
  p.vr = u1;
  p.vi = u2;
  V = sqrt(p.vr^2 + p.vi^2);
  angle = atan2(p.vi, p.vr)*180/Modelica.Constants.pi;
  P = -(p.vr*p.ir + p.vi*p.ii)*S_b;
  Q = -(p.vr*p.ii - p.vi*p.ir)*S_b;
  annotation(Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = true, initialScale = 0.1, grid = {10, 10}),
        graphics={                 Ellipse(
          extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),Line(
          points={{-20,20},{-50,40},{-80,0}},
          color={0,0,0},
          thickness=0.5),                Line(
          points={{20,-20},{50,-40},{80,0}},
          color={0,0,0},
          thickness=0.5),Text(
          extent={{-40,20},{40,-20}},
          lineColor={0,0,0},
          textString="%name")}));
end VoltageSource;
