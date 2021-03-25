BreakSectionStart(6);

 /* Linear system of equations to solve. */
/* Tag: simplified homotopy initialization.linear[2] */
/* Introducing 2 common subexpressions used in 2 expressions */
/* Of the common subexpressions 2 are reals, 0 are integers, and 0
   are booleans. */
DYNX(DYNhelp,580) = DYNX(W_,106)*DYNX(DP_,48);
DYNX(DYNhelp,581) = DYNX(DP_,46)*DYNX(W_,74);
DYNX(X_,3) = DYNX(W_,113);
SolveScalarLinearParametric( -(DYNX(DP_,49)+DYNX(DP_,47)*DYNX(DYNhelp,580)*
  DYNX(W_,116))," -(sT5B.imLimitedLeadLag3.add3.k2+sT5B.imLimitedLeadLag3.add2.k2*(sT5B.imLimitedLeadLag3.gain.k*sT5B.imLimitedLeadLag3.add3.k1)*sT5B.imLimitedLeadLag3.gain1.k)",
   DYNX(DYNhelp,580)*DYNX(DYNhelp,581)-DYNX(W_,108),"sT5B.imLimitedLeadLag3.gain.k*sT5B.imLimitedLeadLag3.add3.k1*(sT5B.imLimitedLeadLag3.add2.k1*sT5B.imLimitedLeadLag1.y)-sT5B.imLimitedLeadLag3.add3.y",
   DYNX(X_,3),"sT5B.imLimitedLeadLag3.integrator.y");
DYNX(W_,104) = DYNX(W_,116)*DYNX(X_,3);
DYNX(W_,105) = DYNX(DYNhelp,581)+DYNX(DP_,47)*DYNX(W_,104);
DYNX(W_,98) = DYNX(W_,106)*DYNX(W_,105);
 /* End of Equation Block */ 

DYNX(W_,107) = DYNX(W_,98);
BreakSectionEnd()
