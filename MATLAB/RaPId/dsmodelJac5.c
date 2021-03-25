BreakSectionStart(8);

 /* Linear system of equations to solve. */
/* Tag: simplified homotopy initialization.linear[4] */
/* Introducing 2 common subexpressions used in 2 expressions */
/* Of the common subexpressions 2 are reals, 0 are integers, and 0
   are booleans. */
DYNX(DYNhelp,656) = DYNX(W_,154)*DYNX(DP_,58);
DYNX(DYNhelp,657) = DYNX(DP_,56)*DYNX(W_,122);
DYNX(X_,5) = DYNX(W_,161);
SolveScalarLinearParametric( -(DYNX(DP_,59)+DYNX(DP_,57)*DYNX(DYNhelp,656)*
  DYNX(W_,164))," -(sT5B.imLimitedLeadLag5.add3.k2+sT5B.imLimitedLeadLag5.add2.k2*(sT5B.imLimitedLeadLag5.gain.k*sT5B.imLimitedLeadLag5.add3.k1)*sT5B.imLimitedLeadLag5.gain1.k)",
   DYNX(DYNhelp,656)*DYNX(DYNhelp,657)-DYNX(W_,156),"sT5B.imLimitedLeadLag5.gain.k*sT5B.imLimitedLeadLag5.add3.k1*(sT5B.imLimitedLeadLag5.add2.k1*sT5B.imLimitedLeadLag4.y)-sT5B.imLimitedLeadLag5.add3.y",
   DYNX(X_,5),"sT5B.imLimitedLeadLag5.integrator.y");
DYNX(W_,152) = DYNX(W_,164)*DYNX(X_,5);
DYNX(W_,153) = DYNX(DYNhelp,657)+DYNX(DP_,57)*DYNX(W_,152);
DYNX(W_,146) = DYNX(W_,154)*DYNX(W_,153);
 /* End of Equation Block */ 

DYNX(W_,155) = DYNX(W_,146);
BreakSectionEnd()
