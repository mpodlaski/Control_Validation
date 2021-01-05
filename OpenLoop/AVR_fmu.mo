within Control_Validation.OpenLoop;
model AVR_fmu
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-100,80},{-42,100}})));
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
  Modelica.Blocks.Interfaces.RealInput VOTHSG1
    annotation (Placement(transformation(extent={{-108,0},{-68,40}})));
  Modelica.Blocks.Interfaces.RealInput ECOMP1
    annotation (Placement(transformation(extent={{-106,-32},{-66,8}})));
  Modelica.Blocks.Interfaces.RealInput EFD1
    annotation (Placement(transformation(extent={{-106,-68},{-66,-28}})));
  Modelica.Blocks.Interfaces.RealInput VUEL1 annotation (Placement(
        transformation(
        extent={{20,-20},{-20,20}},
        rotation=270,
        origin={-20,-78})));
  Modelica.Blocks.Interfaces.RealInput VOEL1 annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={14,-78})));
  Modelica.Blocks.Interfaces.RealInput XADIFD1 annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=90,
        origin={52,-78})));
  Modelica.Blocks.Interfaces.RealOutput EFD2
                                            "Excitation Voltage (pu)"
    annotation (Placement(transformation(extent={{50,-10},{70,10}})));
equation
  connect(sT5B.VOTHSG, VOTHSG1) annotation (Line(points={{-24.2,8.8},{-45.1,8.8},
          {-45.1,20},{-88,20}}, color={0,0,127}));
  connect(sT5B.ECOMP, ECOMP1) annotation (Line(points={{-24.2,0},{-56,0},{-56,
          -12},{-86,-12}}, color={0,0,127}));
  connect(sT5B.EFD0, EFD1) annotation (Line(points={{-24.2,-8.8},{-32,-8.8},{
          -32,-8},{-44,-8},{-44,-48},{-86,-48}}, color={0,0,127}));
  connect(sT5B.VUEL, VUEL1) annotation (Line(points={{-8.8,-24.2},{-8.8,-37.1},
          {-20,-37.1},{-20,-78}}, color={0,0,127}));
  connect(sT5B.VOEL, VOEL1) annotation (Line(points={{0,-24.2},{0,-37.1},{14,
          -37.1},{14,-78}}, color={0,0,127}));
  connect(sT5B.XADIFD, XADIFD1) annotation (Line(points={{17.6,-24.2},{18,-24.2},
          {18,-34},{52,-34},{52,-78}}, color={0,0,127}));
  connect(sT5B.EFD, EFD2)
    annotation (Line(points={{24.2,0},{60,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end AVR_fmu;
