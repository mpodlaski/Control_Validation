BreakSectionStart(5);

 /* Linear system of equations to solve. */
/* Tag: simplified homotopy initialization.linear[1] */
/* Introducing 2 common subexpressions used in 2 expressions */
/* Of the common subexpressions 2 are reals, 0 are integers, and 0
   are booleans. */
DYNX(DYNhelp,542) = DYNX(W_,82)*DYNX(DP_,43);
DYNX(DYNhelp,543) = DYNX(DP_,41)*DYNX(W_,13);
DYNX(X_,2) = DYNX(W_,89);
SolveScalarLinearParametric( -(DYNX(DP_,44)+DYNX(DP_,42)*DYNX(DYNhelp,542)*
  DYNX(W_,92))," -(sT5B.imLimitedLeadLag1.add3.k2+sT5B.imLimitedLeadLag1.add2.k2*(sT5B.imLimitedLeadLag1.gain.k*sT5B.imLimitedLeadLag1.add3.k1)*sT5B.imLimitedLeadLag1.gain1.k)",
   DYNX(DYNhelp,542)*DYNX(DYNhelp,543)-DYNX(W_,84),"sT5B.imLimitedLeadLag1.gain.k*sT5B.imLimitedLeadLag1.add3.k1*(sT5B.imLimitedLeadLag1.add2.k1*sT5B.VERR1.y)-sT5B.imLimitedLeadLag1.add3.y",
   DYNX(X_,2),"sT5B.imLimitedLeadLag1.integrator.y");
DYNX(W_,80) = DYNX(W_,92)*DYNX(X_,2);
DYNX(W_,81) = DYNX(DYNhelp,543)+DYNX(DP_,42)*DYNX(W_,80);
DYNX(W_,74) = DYNX(W_,82)*DYNX(W_,81);
 /* End of Equation Block */ 

DYNX(W_,83) = DYNX(W_,74);
BreakSectionEnd()
