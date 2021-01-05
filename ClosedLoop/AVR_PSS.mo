within Control_Validation.ClosedLoop;
model AVR_PSS
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B
    annotation (Placement(transformation(extent={{-6,-42},{-48,0}})));
  OpenIPSL.Electrical.Machines.PSSE.GENROE gENROE
    annotation (Placement(transformation(extent={{-50,20},{-8,60}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-54,-84},{-34,-64}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine
    annotation (Placement(transformation(extent={{30,30},{50,50}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load
    annotation (Placement(transformation(extent={{18,10},{30,20}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{92,30},{72,50}})));
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-94,76},{-36,96}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2B pSS2B(
    T_w1=2,
    T_w2=2,
    T_6=0,
    T_w3=2,
    T_w4=0,
    T_7=2,
    K_S2=0.1564,
    K_S3=1,
    T_8=0,
    T_9=0,
    K_S1=10,
    T_1=0.25,
    T_2=0.03,
    T_3=0.15,
    T_4=0.015,
    T_10=0,
    T_11=0,
    V_S1MAX=999,
    V_S1MIN=-999,
    V_S2MAX=999,
    V_S2MIN=-999,
    V_STMAX=0.1,
    V_STMIN=-0.1,
    M=0,
    N=0) annotation (Placement(transformation(extent={{62,-34},{26,-26}})));
equation
  connect(gENROE.PMECH, gENROE.PMECH0) annotation (Line(points={{-54.2,50},{-70,
          50},{-70,70},{20,70},{20,50},{-5.9,50}}, color={0,0,127}));
  connect(gENROE.EFD, sT5B.EFD) annotation (Line(points={{-54.2,30},{-74,30},{
          -74,-21},{-50.1,-21}}, color={0,0,127}));
  connect(sT5B.XADIFD, gENROE.XADIFD) annotation (Line(points={{-43.8,-44.1},{
          -43.8,-56},{12,-56},{12,22},{-5.9,22}}, color={0,0,127}));
  connect(sT5B.ECOMP, gENROE.ETERM) annotation (Line(points={{-3.9,-21},{4,-21},
          {4,34},{-5.9,34}}, color={0,0,127}));
  connect(sT5B.EFD0, gENROE.EFD0) annotation (Line(points={{-3.9,-29.4},{8,
          -29.4},{8,30},{-5.9,30}}, color={0,0,127}));
  connect(const.y, sT5B.VOEL) annotation (Line(points={{-33,-74},{-27,-74},{-27,
          -44.1}}, color={0,0,127}));
  connect(sT5B.VUEL, sT5B.VOEL) annotation (Line(points={{-18.6,-44.1},{-18.6,
          -52},{-27,-52},{-27,-44.1}}, color={0,0,127}));
  connect(gENROE.p, pwLine.p)
    annotation (Line(points={{-8,40},{31,40}}, color={0,0,255}));
  connect(pwLine.n, infiniteBus.p)
    annotation (Line(points={{49,40},{72,40}}, color={0,0,255}));
  connect(load.p, pwLine.p)
    annotation (Line(points={{24,20},{24,40},{31,40}}, color={0,0,255}));
  connect(sT5B.VOTHSG, pSS2B.VOTHSG) annotation (Line(points={{-3.9,-12.6},{16,
          -12.6},{16,-30},{24.2,-30}}, color={0,0,127}));
  connect(pSS2B.V_S1, gENROE.SPEED) annotation (Line(points={{63.8,-28.4},{63.8,
          54},{-5.9,54}}, color={0,0,127}));
  connect(pSS2B.V_S2, gENROE.PELEC) annotation (Line(points={{63.8,-31.6},{68,
          -31.6},{68,46},{-5.9,46}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end AVR_PSS;
