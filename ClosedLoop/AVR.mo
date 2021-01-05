within Control_Validation.ClosedLoop;
model AVR
  OpenIPSL.Electrical.Controls.PSSE.ES.ST5B sT5B
    annotation (Placement(transformation(extent={{-6,-42},{-48,0}})));
  OpenIPSL.Electrical.Machines.PSSE.GENROE gENROE
    annotation (Placement(transformation(extent={{-50,20},{-8,60}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-54,-84},{-34,-64}})));
  Modelica.Blocks.Sources.Constant const1(k=0)
    annotation (Placement(transformation(extent={{36,-12},{24,0}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine
    annotation (Placement(transformation(extent={{30,30},{50,50}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load
    annotation (Placement(transformation(extent={{18,10},{30,20}})));
  OpenIPSL.Electrical.Buses.InfiniteBus infiniteBus
    annotation (Placement(transformation(extent={{92,30},{72,50}})));
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-98,78},{-40,98}})));
equation
  connect(gENROE.PMECH, gENROE.PMECH0) annotation (Line(points={{-54.2,50},{-72,
          50},{-72,68},{2,68},{2,50},{-5.9,50}},   color={0,0,127}));
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
  connect(const1.y, sT5B.VOTHSG) annotation (Line(points={{23.4,-6},{8,-6},{8,
          -12.6},{-3.9,-12.6}}, color={0,0,127}));
  connect(gENROE.p, pwLine.p)
    annotation (Line(points={{-8,40},{31,40}}, color={0,0,255}));
  connect(pwLine.n, infiniteBus.p)
    annotation (Line(points={{49,40},{72,40}}, color={0,0,255}));
  connect(load.p, pwLine.p)
    annotation (Line(points={{24,20},{24,40},{31,40}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false), graphics={Rectangle(extent
            ={{14,58},{98,6}}, lineColor={28,108,200}), Text(
          extent={{64,14},{110,6}},
          lineColor={28,108,200},
          textString="HIL")}));
end AVR;
