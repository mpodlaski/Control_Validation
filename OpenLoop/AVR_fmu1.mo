within Control_Validation.OpenLoop;
model AVR_fmu1
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-84,60},{-26,80}})));
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
    annotation (Placement(transformation(extent={{12,-22},{56,22}})));
  Modelica.Blocks.Interfaces.RealInput Vt
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));
  Modelica.Blocks.Sources.Constant Efd0(k=1.43)
    annotation (Placement(transformation(extent={{-86,-66},{-66,-46}})));
  Modelica.Blocks.Sources.Constant VUEL(k=-100)
    annotation (Placement(transformation(extent={{-52,-82},{-32,-62}})));
  Modelica.Blocks.Sources.Constant VOEL(k=100)
    annotation (Placement(transformation(extent={{8,-92},{28,-72}})));
  Modelica.Blocks.Sources.Constant VOTHSG(k=0)
    annotation (Placement(transformation(extent={{-84,18},{-64,38}})));
  Modelica.Blocks.Interfaces.RealInput XADIFD
    annotation (Placement(transformation(extent={{-140,-60},{-100,-20}})));
  Modelica.Blocks.Interfaces.RealOutput EFD "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(sT5B.ECOMP, Vt) annotation (Line(points={{9.8,0},{-120,0}},
                     color={0,0,127}));
  connect(sT5B.EFD0, Efd0.y) annotation (Line(points={{9.8,-8.8},{9.8,-55.4},{
          -65,-55.4},{-65,-56}}, color={0,0,127}));
  connect(VUEL.y, sT5B.VUEL) annotation (Line(points={{-31,-72},{-4,-72},{-4,
          -62},{25.2,-62},{25.2,-24.2}}, color={0,0,127}));
  connect(sT5B.VOEL, VOEL.y)
    annotation (Line(points={{34,-24.2},{34,-82},{29,-82}}, color={0,0,127}));
  connect(sT5B.VOTHSG, VOTHSG.y) annotation (Line(points={{9.8,8.8},{-27.1,8.8},
          {-27.1,28},{-63,28}}, color={0,0,127}));
  connect(sT5B.XADIFD, XADIFD) annotation (Line(points={{51.6,-24.2},{51.6,
          -40.1},{-120,-40.1},{-120,-40}}, color={0,0,127}));
  connect(sT5B.EFD, EFD)
    annotation (Line(points={{58.2,0},{110,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end AVR_fmu1;
