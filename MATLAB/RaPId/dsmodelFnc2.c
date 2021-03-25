/* Prototypes for functions used in model */
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getNextTimeEvent_M(
  struct DymStruc0 tableID0_0, double  timeIn0_0);
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableTmax_M(
  struct DymStruc0 tableID0_0);
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableTmin_M(
  struct DymStruc0 tableID0_0);
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableValue_M(
  struct DymStruc0 tableID0_0, int  icol0_0, double  timeIn0_0, double  
  nextTimeEvent0_0, double  prex_0nextTimeEvent);
DYMOLA_STATIC struct DymStruc0  Modelica_Blocks_Types_ExternalCombiTimeTable_M(
  const char*  tableName0_0, const char*  fileName0_0, RealArray   table0_0, 
  double  startTime0_0, IntegerArray   columns0_0, int  smoothness0_0, int  
  extrapolation0_0, double  shiftTime0_0, int  timeEvents0_0, int  
  verboseRead0_0, int id_, int alwaysMakeNew_);
DYMOLA_STATIC void Modelica_Blocks_Types_ExternalCombiTimeTable_destructor_M(
  void* externalCombiTimeTable0_0);
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Generators_Xorshift128plus_initialState
  (int  localSeed0_0, int  globalSeed0_0);
struct Modelica_Math_Random_Generators_Xorshift128plus_random_M_struct {
  double   result0_0_0member;
  IntegerArray    stateOut0_0_0member;
};
DYMOLA_STATIC struct Modelica_Math_Random_Generators_Xorshift128plus_random_M_struct
   Modelica_Math_Random_Generators_Xorshift128plus_random_M(IntegerArray   
  stateIn0_0);
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Generators_Xorshift64star_initialState
  (int  localSeed0_0, int  globalSeed0_0);
struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct {
  double   result0_0_0member;
  IntegerArray    stateOut0_0_0member;
};
DYMOLA_STATIC struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct
   Modelica_Math_Random_Generators_Xorshift64star_random_M(IntegerArray   
  stateIn0_0);
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_automaticGlobalSeed_M(void);
DYMOLA_STATIC double   Modelica_Math_Random_Utilities_impureRandom_M(int  id0_0);
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_impureRandomInteger(int  
  id0_0, int  imin0_0, int  imax0_0);
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Utilities_initialStateWithXorshift64star
  (int  localSeed0_0, int  globalSeed0_0, int  nState0_0);
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_initializeImpureRandom(int  
  seed0_0);
DYMOLA_STATIC void Modelica_Math_Random_Utilities_initializeImpureRandom_setInternalState_M
  (IntegerArray   rngState0_0, int  id0_0);
DYMOLA_STATIC double   Modelica_Math_Special_Internal_erfInvUtil(double  p0_0, 
  double  q0_0);
DYMOLA_STATIC double   Modelica_Math_Special_Internal_polyEval(RealArray   c0_0,
   double  u0_0);
DYMOLA_STATIC double   Modelica_Math_Special_erfInv(double  u0_0);
DYMOLA_STATIC double   Modelica_Math_atan3(double  u10_0, double  u20_0, double 
   y00_0);
DYMOLA_STATIC int   Modelica_Utilities_Strings_isEmpty(const char*  string0_0);
DYMOLA_STATIC double   OpenIPSL_NonElectrical_Functions_SEx_0exp(double  u0_0, 
  double  Sx_0EEx_01, double  Sx_0EEx_02, double  Ex_01, double  Ex_02);
