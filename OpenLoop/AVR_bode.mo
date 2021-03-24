within Control_Validation.OpenLoop;
model AVR_bode "Only added white noise"
  Modelica.Blocks.Sources.Constant const(k=-100)
    annotation (Placement(transformation(extent={{-90,-70},{-70,-50}})));
  Modelica.Blocks.Sources.Constant PSS(k=0)
    annotation (Placement(transformation(extent={{-90,22},{-70,42}})));
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-90,54},{-32,74}})));
  Modelica.Blocks.Sources.Constant Efd0(k=1.43)
    annotation (Placement(transformation(extent={{-90,-40},{-70,-20}})));
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
    annotation (Placement(transformation(extent={{-22,-22},{22,22}})));
  Modelica.Blocks.Sources.Constant const1(k=100)
    annotation (Placement(transformation(extent={{-54,-88},{-34,-68}})));
  Modelica.Blocks.Interfaces.RealInput ECOMP1
    annotation (Placement(transformation(extent={{-142,-20},{-102,20}})));
  Modelica.Blocks.Interfaces.RealInput XADIFD1 annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={18,-80})));
  Modelica.Blocks.Interfaces.RealOutput EFD1
                                            "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{70,-10},{90,10}})));
equation
  connect(sT5B.EFD0, Efd0.y) annotation (Line(points={{-24.2,-8.8},{-46.1,-8.8},
          {-46.1,-30},{-69,-30}}, color={0,0,127}));
  connect(PSS.y, sT5B.VOTHSG) annotation (Line(points={{-69,32},{-46,32},{-46,
          8.8},{-24.2,8.8}}, color={0,0,127}));
  connect(sT5B.VUEL, const.y) annotation (Line(points={{-8.8,-24.2},{-8.8,-60},
          {-69,-60}}, color={0,0,127}));
  connect(const1.y, sT5B.VOEL)
    annotation (Line(points={{-33,-78},{0,-78},{0,-24.2}}, color={0,0,127}));
  connect(sT5B.ECOMP, ECOMP1)
    annotation (Line(points={{-24.2,0},{-122,0}}, color={0,0,127}));
  connect(sT5B.XADIFD, XADIFD1) annotation (Line(points={{17.6,-24.2},{17.6,
          -36.1},{18,-36.1},{18,-80}}, color={0,0,127}));
  connect(sT5B.EFD, EFD1)
    annotation (Line(points={{24.2,0},{80,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-140,
            -100},{120,100}})),                                  Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-140,-100},{120,
            100}})),
    experiment(StopTime=10, __Dymola_Algorithm="Dassl"));
end AVR_bode;
