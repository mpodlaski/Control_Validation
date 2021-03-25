BreakSectionStart(7);

 /* Linear system of equations to solve. */
/* Tag: simplified homotopy initialization.linear[3] */
/* Introducing 2 common subexpressions used in 2 expressions */
/* Of the common subexpressions 2 are reals, 0 are integers, and 0
   are booleans. */
DYNX(DYNhelp,618) = DYNX(W_,130)*DYNX(DP_,53);
DYNX(DYNhelp,619) = DYNX(DP_,51)*DYNX(W_,13);
DYNX(X_,4) = DYNX(W_,137);
SolveScalarLinearParametric( -(DYNX(DP_,54)+DYNX(DP_,52)*DYNX(DYNhelp,618)*
  DYNX(W_,140))," -(sT5B.imLimitedLeadLag4.add3.k2+sT5B.imLimitedLeadLag4.add2.k2*(sT5B.imLimitedLeadLag4.gain.k*sT5B.imLimitedLeadLag4.add3.k1)*sT5B.imLimitedLeadLag4.gain1.k)",
   DYNX(DYNhelp,618)*DYNX(DYNhelp,619)-DYNX(W_,132),"sT5B.imLimitedLeadLag4.gain.k*sT5B.imLimitedLeadLag4.add3.k1*(sT5B.imLimitedLeadLag4.add2.k1*sT5B.VERR1.y)-sT5B.imLimitedLeadLag4.add3.y",
   DYNX(X_,4),"sT5B.imLimitedLeadLag4.integrator.y");
DYNX(W_,128) = DYNX(W_,140)*DYNX(X_,4);
DYNX(W_,129) = DYNX(DYNhelp,619)+DYNX(DP_,52)*DYNX(W_,128);
DYNX(W_,122) = DYNX(W_,130)*DYNX(W_,129);
 /* End of Equation Block */ 

DYNX(W_,131) = DYNX(W_,122);
BreakSectionEnd()
