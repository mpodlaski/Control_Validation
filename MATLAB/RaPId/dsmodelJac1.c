BreakSectionStart(3);

{ /* Non-linear system of equations to solve. */
/* Tag: simplified homotopy initialization.nonlinear[1] */
/* Introducing 12 common subexpressions and reusing 1 variables totally used in 13
   expressions */
/* Of the common subexpressions 11 are reals, 0 are integers, and 2
   are booleans. */
const char*const varnames_[]={"load_ExtInput.p.ii", "load_ExtInput.p.ir", 
  "gENROE.id", "sT5B.imLimitedLeadLag2.integrator.y", "sT5B.imLimitedLeadLag.integrator.y",
   "gENROE.PSIkd", "gENROE.iq", "gENROE.PSIkq"};
const double nominal_[]={1, 1, 1, 1, 1, 1, 1, 1};
NonLinearSystemOfEquations(Jacobian__, residue__, x__, 8, 0, 1, 1, -2, 
  DYNX(DYNhelp,70), 224, DYNX(did_->helpvari_vec,0), 30);
SetInitVector(x__, 1, DYNX(W_,410), DYNX(W_,420));
SetInitVector(x__, 2, DYNX(W_,409), DYNX(W_,419));
SetInitVector(x__, 3, DYNX(W_,313), DYNX(W_,361));
SetInitVector(x__, 4, DYNX(X_,1), DYNX(W_,54));
SetInitVector(x__, 5, DYNX(X_,0), DYNX(W_,30));
SetInitVector(x__, 6, DYNX(X_,12), DYNX(W_,368));
SetInitVector(x__, 7, DYNX(W_,314), DYNX(W_,360));
SetInitVector(x__, 8, DYNX(X_,13), DYNX(W_,369));
Residues;
  DYNX(DYNhelp,294) = (DYNX(DP_,13393)-DYNX(DP_,13396))*DYNX(W_,313);
  DYNX(X_,11) = divGuarded((DYNX(X_,12)+DYNX(DYNhelp,294))*DYNX(DP_,13387),
    "(gENROE.PSIkd+(gENROE.Xpd-gENROE.Xl)*gENROE.id)*gENROE.Tppd0",
    DYNX(DP_,13387),"gENROE.Tppd0");
  DYNX(W_,328) = DYNX(X_,11)*DYNX(W_,376)+DYNX(X_,12)*DYNX(W_,377);
  DYNX(DYNhelp,295) = (DYNX(DP_,13400)-DYNX(DP_,13396))*DYNX(W_,314);
  DYNX(X_,10) =  -divGuarded((DYNX(DYNhelp,295)-DYNX(X_,13))*DYNX(DP_,13388),
    "((gENROE.Xpq-gENROE.Xl)*gENROE.iq-gENROE.PSIkq)*gENROE.Tppq0",
    DYNX(DP_,13388),"gENROE.Tppq0");
  DYNX(W_,329) = DYNX(X_,10)*DYNX(W_,378)+DYNX(X_,13)*DYNX(W_,379);
  DYNX(W_,330) = sqrtGuarded(DYNX(W_,328)*DYNX(W_,328)+DYNX(W_,329)*DYNX(W_,329),
    "gENROE.PSIppd*gENROE.PSIppd+gENROE.PSIppq*gENROE.PSIppq");
  DYNX(W_,327) =  -(DYNX(W_,329)+DYNX(DP_,13395)*DYNX(W_,314));
  DYNX(W_,315) =  -(DYNX(W_,327)+DYNX(DP_,13399)*DYNX(W_,313));
  DYNX(W_,326) = DYNX(W_,328)-DYNX(DP_,13394)*DYNX(W_,313);
  DYNX(W_,316) = DYNX(W_,326)-DYNX(DP_,13399)*DYNX(W_,314);
  DYNX(DYNhelp,296) = sin(DYNX(X_,9));
  DYNX(DYNhelp,297) = cos(DYNX(X_,9));
  DYNX(W_,270) = DYNX(DYNhelp,296)*DYNX(W_,315)+DYNX(DYNhelp,297)*DYNX(W_,316);
  DYNX(W_,271) = DYNX(DYNhelp,296)*DYNX(W_,316)-DYNX(DYNhelp,297)*DYNX(W_,315);
  DYNX(W_,412) = sqrtGuarded(sqr(DYNX(W_,270))+sqr(DYNX(W_,271)),
    "bus.p.vr^2+bus.p.vi^2");
  DYNX(W_,427) = IF Less(DYNX(W_,412),"load_ExtInput.v", 0.35,"0.35", 3) AND 
    Greater(DYNX(W_,412),"load_ExtInput.v", 0,"0", 4) THEN 2*sqr(
    1.4285714285714286*DYNX(W_,412)) ELSE IF Greater(DYNX(W_,412),
    "load_ExtInput.v", 0.35,"0.35", 5) AND Less(DYNX(W_,412),"load_ExtInput.v", 
    0.7,"0.7", 6) THEN 1-2*sqr(1.4285714285714286*(DYNX(W_,412)-0.7)) ELSE 1;
  DYNX(DYNhelp,298) = DYNX(W_,318)*DYNX(DYNhelp,296);
  DYNX(DYNhelp,299) = DYNX(W_,318)*DYNX(DYNhelp,297);
  DYNX(W_,304) =  -(DYNX(DYNhelp,298)*DYNX(W_,313)+DYNX(DYNhelp,299)*
    DYNX(W_,314));
  DYNX(W_,484) =  -(DYNX(W_,304)+DYNX(W_,409));
  DYNX(W_,192) = DYNX(W_,412);
  DYNX(W_,10) = DYNX(DP_,71)*DYNX(W_,192)+DYNX(DP_,72)*DYNX(W_,181);
  DYNX(W_,170) = DYNX(W_,175)*DYNX(W_,10);
  DYNX(W_,45) = DYNX(W_,57)*DYNX(X_,1);
  DYNX(W_,21) = DYNX(W_,33)*DYNX(X_,0);
  DYNX(W_,6) = IF fabs(DYNX(W_,177)) <= 1E-15 THEN DYNX(W_,10)*DYNX(DP_,61)
     ELSE DYNX(W_,10);
  DYNX(DYNhelp,300) = DYNX(X_,11)-DYNX(X_,12);
  DYNX(DYNhelp,301) = (PushModelContext(1,"OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1, 1.2)")
    OpenIPSL_NonElectrical_Functions_SEx_0exp(DYNX(W_,330), DYNX(DP_,13397), 
    DYNX(DP_,13398), 1, 1.2));
  PopModelContext();
  DYNX(W_,258) = DYNX(W_,372)*(DYNX(DYNhelp,300)-DYNX(DYNhelp,294))+DYNX(X_,11)+
    DYNX(W_,313)*(DYNX(DP_,13391)-DYNX(DP_,13393))+DYNX(DYNhelp,301)*
    DYNX(W_,328);
  DYNX(W_,11) = DYNX(DP_,13365)*DYNX(W_,258)+DYNX(DP_,13366)*DYNX(W_,247);
  DYNX(W_,180) = DYNX(W_,8)+DYNX(DP_,17)*DYNX(W_,11);
  DYNX(W_,9) = divGuarded(DYNX(W_,180),"sT5B.VR0",DYNX(DP_,13),"sT5B.K_R")+
    DYNX(W_,10);
  DYNX(W_,7) = DYNX(DP_,6)*DYNX(W_,9)+DYNX(DP_,7)*DYNX(W_,6);
  DYNX(W_,14) = IF Less(DYNX(DP_,5),"const.k", DYNX(W_,7),"sT5B.DiffV.y", 7)
     THEN DYNX(W_,7) ELSE DYNX(DP_,5);
  DYNX(W_,12) = IF Greater(DYNX(DP_,62),"const1.k", DYNX(W_,14),"sT5B.lV_Gate.n2",
     8) THEN DYNX(W_,14) ELSE DYNX(DP_,62);
  DYNX(W_,13) = DYNX(DP_,26)*DYNX(W_,3)+DYNX(DP_,27)*DYNX(W_,12);
  DYNX(W_,22) = DYNX(DP_,29)*DYNX(W_,13)+DYNX(DP_,30)*DYNX(W_,21);
  DYNX(W_,15) = DYNX(W_,23)*DYNX(W_,22);
  DYNX(W_,46) = DYNX(DP_,34)*DYNX(W_,15)+DYNX(DP_,35)*DYNX(W_,45);
  DYNX(W_,39) = DYNX(W_,47)*DYNX(W_,46);
  DYNX(W_,64) = DYNX(W_,63)*DYNX(W_,39);
  DYNX(W_,71) = DYNX(W_,73)*DYNX(W_,11);
  DYNX(W_,72) = DYNX(DP_,38)*DYNX(W_,71)+DYNX(DP_,39)*DYNX(W_,64);
  DYNX(W_,171) = DYNX(W_,176)*DYNX(W_,10);
  DYNX(W_,2) = IF fabs(DYNX(W_,172)) <= 1E-15 THEN RealBmax(RealBmin(DYNX(W_,72)
    *DYNX(DP_,60), DYNX(W_,170)), DYNX(W_,171)) ELSE RealBmax(RealBmin(
    DYNX(X_,6), DYNX(W_,170)), DYNX(W_,171));
  DYNX(W_,305) = DYNX(DYNhelp,299)*DYNX(W_,313)-DYNX(DYNhelp,298)*DYNX(W_,314);
  DYNX(W_,485) =  -(DYNX(W_,305)+DYNX(W_,410));
DYNX(DYNhelp,302) = DYNX(X_,10)-DYNX(X_,13)+DYNX(DYNhelp,295);
DYNX(DYNhelp,303) = DYNX(DP_,13391)-DYNX(DP_,13396);
DYNX(DYNhelp,304) = GreaterEqualTime(1, 3) AND LessEqual(DYNTime,"time", 11,"11",
   9);
DYNX(DYNhelp,305) = GreaterEqualTime(1E+60, 4) AND LessTime(1E+60, 5);
SetVector(residue__, 1, DYNX(W_,25)-(DYNX(DP_,31)*DYNX(W_,15)+DYNX(DP_,32)*
  DYNX(X_,0)));
SetVector(residue__, 2, DYNX(W_,49)-(DYNX(DP_,36)*DYNX(W_,39)+DYNX(DP_,37)*
  DYNX(X_,1)));
SetVector(residue__, 3,  -divGuarded(DYNX(W_,2)-DYNX(W_,258),"sT5B.EFD-add1.u1",
  DYNX(DP_,13386),"gENROE.Tpd0"));
SetVector(residue__, 4, DYNX(W_,331)-(DYNX(W_,374)*DYNX(DYNhelp,302)+DYNX(X_,10))
  +DYNX(W_,314)*(DYNX(DP_,13392)-DYNX(DP_,13400))+divGuarded(DYNX(DYNhelp,301)*(-1)
  *DYNX(W_,329)*(DYNX(DP_,13392)-DYNX(DP_,13396)),"OpenIPSL.NonElectrical.Functions.SE_exp(gENROE.PSIpp, gENROE.S10, gENROE.S12, 1, 1.2)*(-1)*gENROE.PSIppq*(gENROE.Xq-gENROE.Xl)",
  DYNX(DYNhelp,303),"gENROE.Xd-gENROE.Xl"));
SetVector(residue__, 5, IF DYNX(DYNhelp,304) THEN DYNX(W_,423)*DYNX(W_,412)+
  DYNX(W_,425)*sqr(DYNX(W_,412))+DYNX(W_,427)*(DYNX(W_,421)+DYNX(DP_,13430))+
  DYNX(W_,393)-(DYNX(W_,270)*DYNX(W_,409)+DYNX(W_,271)*DYNX(W_,410)) ELSE 
  DYNX(W_,423)*DYNX(W_,412)+DYNX(W_,425)*sqr(DYNX(W_,412))+DYNX(W_,427)*
  DYNX(W_,421)+DYNX(W_,393)-(DYNX(W_,270)*DYNX(W_,409)+DYNX(W_,271)*DYNX(W_,410)));
SetVector(residue__, 6, IF DYNX(DYNhelp,304) THEN DYNX(W_,424)*DYNX(W_,412)+
  DYNX(W_,426)*sqr(DYNX(W_,412))+DYNX(W_,427)*(DYNX(W_,422)+DYNX(W_,432))-
  DYNX(W_,271)*DYNX(W_,409)+DYNX(W_,270)*DYNX(W_,410) ELSE DYNX(W_,424)*
  DYNX(W_,412)+DYNX(W_,426)*sqr(DYNX(W_,412))+DYNX(W_,427)*DYNX(W_,422)-
  DYNX(W_,271)*DYNX(W_,409)+DYNX(W_,270)*DYNX(W_,410));
SetVector(residue__, 7, IF DYNX(DYNhelp,305) THEN DYNX(W_,484) ELSE DYNX(W_,270)
  -DYNX(W_,289)-DYNX(W_,496)*(DYNX(W_,484)-DYNX(W_,270)*DYNX(W_,494)+
  DYNX(W_,271)*DYNX(W_,495))+DYNX(W_,497)*(DYNX(W_,485)-(DYNX(W_,270)*
  DYNX(W_,495)+DYNX(W_,271)*DYNX(W_,494))));
SetVector(residue__, 8, IF DYNX(DYNhelp,305) THEN DYNX(W_,485) ELSE DYNX(W_,271)
  -DYNX(W_,290)-(DYNX(W_,496)*(DYNX(W_,485)-(DYNX(W_,270)*DYNX(W_,495)+
  DYNX(W_,271)*DYNX(W_,494)))+DYNX(W_,497)*(DYNX(W_,484)-DYNX(W_,270)*
  DYNX(W_,494)+DYNX(W_,271)*DYNX(W_,495))));

{ /* No analytic Jacobian available*/
SolveNonLinearSystemOfEquationsInit(Jacobian__, 0, 0, 0, residue__, x__,"Tag: simplified homotopy initialization.nonlinear[1]");
DYNX(W_,410) = GetVector(x__, 1);
DYNX(W_,409) = GetVector(x__, 2);
DYNX(W_,313) = GetVector(x__, 3);
DYNX(X_,1) = GetVector(x__, 4);
DYNX(X_,0) = GetVector(x__, 5);
DYNX(X_,12) = GetVector(x__, 6);
DYNX(W_,314) = GetVector(x__, 7);
DYNX(X_,13) = GetVector(x__, 8);
EndNonLinearSystemOfEquationsInit(residue__, x__, 1);
 /* End of Non-Linear Equation Block */ }



DYNX(W_,4) = DYNX(W_,10);
DYNX(X_,7) = DYNX(W_,10);
DYNX(W_,178) = DYNX(W_,10);
DYNX(W_,24) = DYNX(W_,15);
DYNX(W_,48) = DYNX(W_,39);
DYNX(W_,70) = DYNX(W_,64);
DYNX(W_,5) = DYNX(W_,9);
BreakSectionEnd()
