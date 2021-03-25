/* Codes used in model */

/* Flattened Modelica model:

function Modelica.Blocks.Tables.Internal.getNextTimeEvent
input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
discrete input Real timeIn;
discrete output Real nextTimeEvent "Next time event in table";

external "C" nextTimeEvent = ModelicaStandardTables_CombiTimeTable_nextTimeEvent(tableID, timeIn) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Blocks.Tables.Internal.getNextTimeEvent;

  */
extern double (ModelicaStandardTables_CombiTimeTable_nextTimeEvent)(void*, 
  double );
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getNextTimeEvent_M(
  struct DymStruc0 tableID0_0, double  timeIn0_0) {
  PushContext("Modelica.Blocks.Tables.Internal.getNextTimeEvent")
  {
    /* Declare outputs and temporaries */
    double   nextTimeEvent0_0;
    nextTimeEvent0_0=0;
    /* Start of real code */
    {
      nextTimeEvent0_0 = (ModelicaStandardTables_CombiTimeTable_nextTimeEvent)(
        externalTable_[tableID0_0.id_0member].obj_, timeIn0_0);
      }
    /* Output section */
    PopContext()
    return nextTimeEvent0_0;
  }}

/* Flattened Modelica model:

function Modelica.Blocks.Tables.Internal.getTimeTableTmax
input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
discrete output Real timeMax "Maximum abscissa value in table";

external "C" timeMax = ModelicaStandardTables_CombiTimeTable_maximumTime(tableID) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Blocks.Tables.Internal.getTimeTableTmax;

  */
extern double (ModelicaStandardTables_CombiTimeTable_maximumTime)(void*);
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableTmax_M(
  struct DymStruc0 tableID0_0) {
  PushContext("Modelica.Blocks.Tables.Internal.getTimeTableTmax")
  {
    /* Declare outputs and temporaries */
    double   timeMax0_0;
    timeMax0_0=0;
    /* Start of real code */
    {
      timeMax0_0 = (ModelicaStandardTables_CombiTimeTable_maximumTime)(
        externalTable_[tableID0_0.id_0member].obj_);
      }
    /* Output section */
    PopContext()
    return timeMax0_0;
  }}

/* Flattened Modelica model:

function Modelica.Blocks.Tables.Internal.getTimeTableTmin
input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
discrete output Real timeMin "Minimum abscissa value in table";

external "C" timeMin = ModelicaStandardTables_CombiTimeTable_minimumTime(tableID) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Blocks.Tables.Internal.getTimeTableTmin;

  */
extern double (ModelicaStandardTables_CombiTimeTable_minimumTime)(void*);
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableTmin_M(
  struct DymStruc0 tableID0_0) {
  PushContext("Modelica.Blocks.Tables.Internal.getTimeTableTmin")
  {
    /* Declare outputs and temporaries */
    double   timeMin0_0;
    timeMin0_0=0;
    /* Start of real code */
    {
      timeMin0_0 = (ModelicaStandardTables_CombiTimeTable_minimumTime)(
        externalTable_[tableID0_0.id_0member].obj_);
      }
    /* Output section */
    PopContext()
    return timeMin0_0;
  }}

/* Flattened Modelica model:

function Modelica.Blocks.Tables.Internal.getTimeTableValue
input Modelica.Blocks.Types.ExternalCombiTimeTable tableID;
input Integer icol;
discrete input Real timeIn;
discrete input Real nextTimeEvent;
discrete input Real pre_nextTimeEvent;
discrete output Real y;

external "C" y = ModelicaStandardTables_CombiTimeTable_getValue(tableID, icol, timeIn, nextTimeEvent, pre_nextTimeEvent) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
annotation(derivative(noDerivative=nextTimeEvent, noDerivative=pre_nextTimeEvent)=Modelica.Blocks.Tables.Internal.getDerTimeTableValue);
end Modelica.Blocks.Tables.Internal.getTimeTableValue;

  */
extern double (ModelicaStandardTables_CombiTimeTable_getValue)(void*, int , 
  double , double , double );
DYMOLA_STATIC double   Modelica_Blocks_Tables_Internal_getTimeTableValue_M(
  struct DymStruc0 tableID0_0, int  icol0_0, double  timeIn0_0, double  
  nextTimeEvent0_0, double  prex_0nextTimeEvent) {
  PushContext("Modelica.Blocks.Tables.Internal.getTimeTableValue")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    y0_0=0;
    /* Start of real code */
    {
      y0_0 = (ModelicaStandardTables_CombiTimeTable_getValue)(externalTable_[
        tableID0_0.id_0member].obj_, icol0_0, timeIn0_0, nextTimeEvent0_0, 
        prex_0nextTimeEvent);
      }
    /* Output section */
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function constructor
input String tableName "Table name";
input String fileName "File name";
discrete input Real table[:, :];
discrete input Real startTime(unit = "s");
input Integer columns[:];
input Modelica.Blocks.Types.Smoothness smoothness;
input Modelica.Blocks.Types.Extrapolation extrapolation;
discrete input Real shiftTime(start = 0.0, unit = "s");
input Modelica.Blocks.Types.TimeEvents timeEvents(start = Modelica.Blocks.Types.TimeEvents.Always);
input Boolean verboseRead(start = true) "= true: Print info message; = false: No info message";
output Modelica.Blocks.Types.ExternalCombiTimeTable externalCombiTimeTable;

external "C" externalCombiTimeTable = ModelicaStandardTables_CombiTimeTable_init2(fileName, tableName, table, size(table, 1), size(table, 2), startTime, columns, size(columns, 1), smoothness, extrapolation, shiftTime, timeEvents, verboseRead) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end constructor;

  */
extern void* (ModelicaStandardTables_CombiTimeTable_init2)(const char* , 
  const char* , double  const *, size_t, size_t, double , int  const *, size_t, 
  int , int , double , int , int );
DYMOLA_STATIC struct DymStruc0  Modelica_Blocks_Types_ExternalCombiTimeTable_M(
  const char*  tableName0_0, const char*  fileName0_0, RealArray   table0_0, 
  double  startTime0_0, IntegerArray   columns0_0, int  smoothness0_0, int  
  extrapolation0_0, double  shiftTime0_0, int  timeEvents0_0, int  
  verboseRead0_0, int id_, int alwaysMakeNew_) {
  PushContext("Modelica.Blocks.Types.ExternalCombiTimeTable")
  {
    /* Declare outputs and temporaries */
    struct DymStruc0  externalCombiTimeTable0_0;
    externalCombiTimeTable0_0.id_0member=0;
    /* Start of real code */
    {
      externalCombiTimeTable0_0.id_0member=id_;
      if (externalTable_[id_].destructor_ && externalTable_[id_].obj_ && alwaysMakeNew_) {
      void*x_=externalTable_[id_].obj_;
      externalTable_[id_].obj_=0;
      (*(externalTable_[id_].destructor_))(x_);
      } else if (!externalTable_[id_].destructor_) {externalTable_[id_].obj_=0;}
      #if (defined(_OPENMP) && !defined(DISABLE_DYMOLA_OPENMP))
      if (!(externalTable_[id_].haveLock_)) {omp_init_lock(&(externalTable_[id_].lockExternal_));externalTable_[id_].haveLock_=1;}
      #endif
      externalTable_[id_].destructor_=Modelica_Blocks_Types_ExternalCombiTimeTable_destructor_M;

        if (!externalTable_[id_].obj_) externalTable_[id_].obj_ = (
        ModelicaStandardTables_CombiTimeTable_init2)(fileName0_0, tableName0_0, 
        table0_0.data, table0_0.dims[1-1], table0_0.dims[2-1], startTime0_0, 
        columns0_0.data, columns0_0.dims[1-1], smoothness0_0, extrapolation0_0, 
        shiftTime0_0, timeEvents0_0, verboseRead0_0);
      }
    /* Output section */
    PopContext()
    return externalCombiTimeTable0_0;
  }}

/* Flattened Modelica model:

function destructor
input Modelica.Blocks.Types.ExternalCombiTimeTable externalCombiTimeTable;

external "C" ModelicaStandardTables_CombiTimeTable_close(externalCombiTimeTable) annotation(Library={"ModelicaIO", "ModelicaMatIO", "ModelicaStandardTables", "zlib"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end destructor;

  */
extern void (ModelicaStandardTables_CombiTimeTable_close)(void*);
DYMOLA_STATIC void Modelica_Blocks_Types_ExternalCombiTimeTable_destructor_M(
  void* externalCombiTimeTable0_0) {
  PushContext("Modelica.Blocks.Types.ExternalCombiTimeTable.destructor")
  {
    /* Declare outputs and temporaries */
    /* Start of real code */
    {
      (ModelicaStandardTables_CombiTimeTable_close)(externalCombiTimeTable0_0);
      }
    /* Output section */
    PopContext()
    return ;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Generators.Xorshift128plus.initialState
input Integer localSeed "The local seed to be used for generating initial states";
input Integer globalSeed "The global seed to be combined with the local seed";
output Integer state[4] "The generated initial states";

algorithm 
state := Modelica.Math.Random.Utilities.initialStateWithXorshift64star(localSeed, globalSeed, size(state, 1));
annotation(Inline=true);
end Modelica.Math.Random.Generators.Xorshift128plus.initialState;

  */
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Generators_Xorshift128plus_initialState
  (int  localSeed0_0, int  globalSeed0_0) {
  PushContext("Modelica.Math.Random.Generators.Xorshift128plus.initialState")
  {
    /* Declare outputs and temporaries */
    IntegerArray    state0_0;
    MarkObject retmark_ = PushMark();
    state0_0=IntegerTemporary( 1, 4);
    RePushMark(&retmark_);
    IntegerFillAssign( state0_0, 0);
    /* Start of real code */
      IntegerAssign (state0_0, Modelica_Math_Random_Utilities_initialStateWithXorshift64star
        (localSeed0_0, globalSeed0_0, DYNSizeSimple(state0_0, 1)));
      Release();
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return state0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Generators.Xorshift128plus.random
input Integer stateIn[4] "The internal states for the random number generator";
discrete output Real result "A random number with a uniform distribution on the interval (0,1]";
output Integer stateOut[4] "The new internal states of the random number generator";

external "C" ModelicaRandom_xorshift128plus(stateIn, stateOut, result) annotation(Library={"ModelicaExternalC"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Math.Random.Generators.Xorshift128plus.random;

  */
extern void (ModelicaRandom_xorshift128plus)(int  const *, int  *, double  *);
DYMOLA_STATIC struct Modelica_Math_Random_Generators_Xorshift128plus_random_M_struct
   Modelica_Math_Random_Generators_Xorshift128plus_random_M(IntegerArray   
  stateIn0_0) {
  PushContext("Modelica.Math.Random.Generators.Xorshift128plus.random")
  AssertModelica(DYNSizeSimple(stateIn0_0,1)==4,"size(stateIn, 1) == 4","Dimension check of input to function failed");
  {
    /* Declare outputs and temporaries */
    double   result0_0;
    IntegerArray    stateOut0_0;
    MarkObject retmark_ = PushMark();
    result0_0=0;
    stateOut0_0=IntegerTemporary( 1, 4);
    RePushMark(&retmark_);
    IntegerFillAssign( stateOut0_0, 0);
    /* Start of real code */
    {
      (ModelicaRandom_xorshift128plus)(stateIn0_0.data, stateOut0_0.data, & 
        result0_0);
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    {
      struct Modelica_Math_Random_Generators_Xorshift128plus_random_M_struct out_;
      out_.result0_0_0member = result0_0;
      out_.stateOut0_0_0member = stateOut0_0;
      return out_;
    }
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.automaticGlobalSeed
output Integer seed "Automatically generated seed";

external "C" seed = ModelicaRandom_automaticGlobalSeed(0.0) annotation(Library={"ModelicaExternalC"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Math.Random.Utilities.automaticGlobalSeed;

  */
extern int (ModelicaRandom_automaticGlobalSeed)(double );
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_automaticGlobalSeed_M(void) {
  PushContext("Modelica.Math.Random.Utilities.automaticGlobalSeed")
  {
    /* Declare outputs and temporaries */
    int   seed0_0;
    seed0_0=0;
    /* Start of real code */
    {
      seed0_0 = (ModelicaRandom_automaticGlobalSeed)(0.0);
      }
    /* Output section */
    PopContext()
    return seed0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.impureRandomInteger
input Integer id "Identification number from initializeImpureRandom(..) function (is needed for correct sorting)";
input Integer imin(start = 1) "Minimum integer to generate";
input Integer imax(start = 268435456) "Maximum integer to generate (default = 2^28)";
output Integer y "A random number with a uniform distribution on the interval [imin,imax]";
protected 
discrete Real r "Impure Real random number";
public 
algorithm 
r := Modelica.Math.Random.Utilities.impureRandom(id);
y := min(imax, integer(r*(imax-imin+1))+imin);
end Modelica.Math.Random.Utilities.impureRandomInteger;

  */
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_impureRandomInteger(int  
  id0_0, int  imin0_0, int  imax0_0) {
  PushContext("Modelica.Math.Random.Utilities.impureRandomInteger")
  {
    /* Declare outputs and temporaries */
    int   y0_0;
    double   r0_0;
    y0_0=0;
    r0_0=0;
    /* Start of real code */
      r0_0 = Modelica_Math_Random_Utilities_impureRandom_M(id0_0);
      y0_0 = IntegerBmin(imax0_0, real2integer(r0_0*(imax0_0-imin0_0+1))+imin0_0);
    /* Output section */
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.initialStateWithXorshift64star
input Integer localSeed "The local seed to be used for generating initial states";
input Integer globalSeed "The global seed to be combined with the local seed";
input Integer nState(min = 1.0) "The dimension of the state vector (>= 1)";
output Integer state[nState] "The generated initial states";
protected 
discrete Real r "Random number only used inside function";
Integer aux[2] "Intermediate container of state integers";
Integer nStateEven "Highest even number <= nState";
public 
algorithm 
aux := Modelica.Math.Random.Generators.Xorshift64star.initialState(localSeed, globalSeed);
if (nState >= 2) then 
state[1:2] := aux;
else
state[1] := aux[1];
end if;
nStateEven := 2*div(nState, 2);
for i in (3:2:nStateEven) loop
(r, aux)  := Modelica.Math.Random.Generators.Xorshift64star.random(state[i-2:i-1]);
state[i:i+1] := aux;
end for;
if (nState >= 3 and nState <> nStateEven) then 
(r, aux)  := Modelica.Math.Random.Generators.Xorshift64star.random(state[nState-2:nState-1]);
state[nState] := aux[1];
end if;
end Modelica.Math.Random.Utilities.initialStateWithXorshift64star;

  */
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Utilities_initialStateWithXorshift64star
  (int  localSeed0_0, int  globalSeed0_0, int  nState0_0) {
  PushContext("Modelica.Math.Random.Utilities.initialStateWithXorshift64star")
  {
    /* Declare outputs and temporaries */
    IntegerArray    state0_0;
    double   r0_0;
    IntegerArray    aux0_0;
    int   nStateEven0_0;
    MarkObject retmark_ = PushMark();
    state0_0=IntegerTemporary( 1, nState0_0);
    RePushMark(&retmark_);
    IntegerFillAssign( state0_0, 0);
    r0_0=0;
    aux0_0=IntegerTemporary( 1, 2);
    PushMark();
    IntegerFillAssign( aux0_0, 0);
    nStateEven0_0=0;
    /* Start of real code */
      IntegerAssign (aux0_0, Modelica_Math_Random_Generators_Xorshift64star_initialState
        (localSeed0_0, globalSeed0_0));
      Release();
      if (nState0_0 >= 2) {
        IntegerPutSub( aux0_0, state0_0 ,Range , (Integer)(1), (Integer)(2)
           , EndMark);
        Release();
      }
      else{
        SetIntegerElement(IntegerVectorElement( aux0_0, (SizeType)(1)), state0_0,
           (SizeType)(1));
      }
      nStateEven0_0 = 2*real2integer(divideDymola(nState0_0, 2));
      {
        int end_ = nStateEven0_0;
        int i0_0_0;
        for(i0_0_0 = 3;(i0_0_0 - end_) * 2 <= 0 ;i0_0_0 += 2) {
          {
            struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct
               dummy_mult_=Modelica_Math_Random_Generators_Xorshift64star_random_M
              (IntegerGetSub( state0_0 ,Range , (Integer)(i0_0_0-2), (Integer)(
              i0_0_0-1) , EndMark));
            r0_0 = dummy_mult_.result0_0_0member;
            IntegerAssign (aux0_0, dummy_mult_.stateOut0_0_0member);
          }
          Release();
          IntegerPutSub( aux0_0, state0_0 ,Range , (Integer)(i0_0_0), (Integer)(
            i0_0_0+1) , EndMark);
          Release();
        }
      }
      if (nState0_0 >= 3 AND nState0_0 != nStateEven0_0) {
        {
          struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct
             dummy_mult_=Modelica_Math_Random_Generators_Xorshift64star_random_M
            (IntegerGetSub( state0_0 ,Range , (Integer)(nState0_0-2), (Integer)(
            nState0_0-1) , EndMark));
          r0_0 = dummy_mult_.result0_0_0member;
          IntegerAssign (aux0_0, dummy_mult_.stateOut0_0_0member);
        }
        Release();
        SetIntegerElement(IntegerVectorElement( aux0_0, (SizeType)(1)), state0_0,
           (SizeType)(nState0_0));
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return state0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.initializeImpureRandom
input Integer seed "The input seed to initialize the impure random number generator";
output Integer id "Identification number to be passed as input to function impureRandom, in order that sorting is correct";
protected 
constant Integer localSeed = 715827883 "Since there is no local seed, a large prime number is used";
Integer rngState[33] "The internal state vector of the impure random number generator";
public 
algorithm 
rngState := Modelica.Math.Random.Utilities.initialStateWithXorshift64star(localSeed, seed, size(rngState, 1));
id := localSeed;
Modelica.Math.Random.Utilities.initializeImpureRandom.setInternalState(rngState, id);
end Modelica.Math.Random.Utilities.initializeImpureRandom;

  */
DYMOLA_STATIC int   Modelica_Math_Random_Utilities_initializeImpureRandom(int  
  seed0_0) {
  PushContext("Modelica.Math.Random.Utilities.initializeImpureRandom")
  {
    /* Declare outputs and temporaries */
    int   id0_0;
    int   localSeed0_0;
    IntegerArray    rngState0_0;
    MarkObject retmark_ = PushMark();
    id0_0=0;
    localSeed0_0 = 715827883;
    rngState0_0=IntegerTemporary( 1, 33);
    PushMark();
    IntegerFillAssign( rngState0_0, 0);
    /* Start of real code */
      IntegerAssign (rngState0_0, Modelica_Math_Random_Utilities_initialStateWithXorshift64star
        (localSeed0_0, seed0_0, DYNSizeSimple(rngState0_0, 1)));
      Release();
      id0_0 = localSeed0_0;
      Modelica_Math_Random_Utilities_initializeImpureRandom_setInternalState_M(
        rngState0_0, id0_0);
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return id0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.initializeImpureRandom.setInternalState
input Integer rngState[33] "The initial state";
input Integer id;

external "C" ModelicaRandom_setInternalState_xorshift1024star(rngState, size(rngState, 1), id) annotation(Library={"ModelicaExternalC"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Math.Random.Utilities.initializeImpureRandom.setInternalState;

  */
extern void (ModelicaRandom_setInternalState_xorshift1024star)(int  const *, 
  size_t, int );
DYMOLA_STATIC void Modelica_Math_Random_Utilities_initializeImpureRandom_setInternalState_M
  (IntegerArray   rngState0_0, int  id0_0) {
  PushContext("Modelica.Math.Random.Utilities.initializeImpureRandom.setInternalState")
  AssertModelica(DYNSizeSimple(rngState0_0,1)==33,"size(rngState, 1) == 33","Dimension check of input to function failed");
  {
    /* Declare outputs and temporaries */
    /* Start of real code */
    {
      (ModelicaRandom_setInternalState_xorshift1024star)(rngState0_0.data, 
        rngState0_0.dims[1-1], id0_0);
      }
    /* Output section */
    PopContext()
    return ;
  }}

/* Flattened Modelica model:

function Modelica.Math.Special.erfInv
discrete input Real u "Input argument in the range -1 <= u <= 1";
discrete output Real y "= inverse of error function";
protected 
constant Real eps = 0.1;
public 
algorithm 
if (u >= 1) then 
y := 1E+60;
elseif (u <= -1) then 
y := -1E+60;
elseif (u == 0) then 
y := 0;
elseif (u < 0) then 
y :=  -Modelica.Math.Special.Internal.erfInvUtil( -u, 1+u);
else
y := Modelica.Math.Special.Internal.erfInvUtil(u, 1-u);
end if;
annotation(smoothOrder=1);
end Modelica.Math.Special.erfInv;

  */
DYMOLA_STATIC double   Modelica_Math_Special_erfInv(double  u0_0) {
  PushContext("Modelica.Math.Special.erfInv")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    double   eps0_0;
    y0_0=0;
    eps0_0 = 0.1;
    /* Start of real code */
      if (u0_0 >= 1) {
        y0_0 = 1E+60;
      }
      else if (u0_0 <= -1) {
        y0_0 = -1E+60;
      }
      else if (u0_0 == 0) {
        y0_0 = 0;
      }
      else if (u0_0 < 0) {
        y0_0 =  -Modelica_Math_Special_Internal_erfInvUtil( -u0_0, 1+u0_0);
      }
      else{
        y0_0 = Modelica_Math_Special_Internal_erfInvUtil(u0_0, 1-u0_0);
      }
    /* Output section */
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.atan3
discrete input Real u1;
discrete input Real u2;
discrete input Real y0(start = 0, unit = "rad", displayUnit = "deg") "y shall be in the range: -pi < y-y0 <= pi";
discrete output Real y(unit = "rad", displayUnit = "deg");
protected 
constant Real pi2 = 6.283185307179586;
discrete Real w;
public 
algorithm 
w := atan2(u1, u2);
if (y0 == 0) then 
y := w;
else
y := w+pi2*integer((3.141592653589793+y0-w)/pi2);
end if;
end Modelica.Math.atan3;

  */
DYMOLA_STATIC double   Modelica_Math_atan3(double  u10_0, double  u20_0, double 
   y00_0) {
  PushContext("Modelica.Math.atan3")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    double   pi20_0;
    double   w0_0;
    y0_0=0;
    pi20_0 = 6.283185307179586;
    w0_0=0;
    /* Start of real code */
      w0_0 = atan2(u10_0, u20_0);
      if (y00_0 == 0) {
        y0_0 = w0_0;
      }
      else{
        y0_0 = w0_0+pi20_0*real2integer(divGuarded(3.141592653589793+y00_0-w0_0,
          "3.141592653589793+y0-w",pi20_0,"pi2"));
      }
    /* Output section */
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function Modelica.Utilities.Strings.isEmpty
input String string;
output Boolean result "True, if string is empty";
protected 
Integer nextIndex;
Integer len;
public 
algorithm 
nextIndex := ModelicaStrings_skipWhiteSpace(string, 1);
len := ModelicaStrings_length(string);
if (len < 1 or nextIndex > len) then 
result := true;
else
result := false;
end if;
end Modelica.Utilities.Strings.isEmpty;

  */
DYMOLA_STATIC int   Modelica_Utilities_Strings_isEmpty(const char*  string0_0) {
  PushContext("Modelica.Utilities.Strings.isEmpty")
  {
    /* Declare outputs and temporaries */
    int   result0_0;
    int   nextIndex0_0;
    int   len0_0;
    result0_0=0;
    nextIndex0_0=0;
    len0_0=0;
    /* Start of real code */
      nextIndex0_0 = ModelicaStrings_skipWhiteSpace(string0_0, 1);
      len0_0 = ModelicaStrings_length(string0_0);
      if (len0_0 < 1 OR nextIndex0_0 > len0_0) {
        result0_0 = true;
      }
      else{
        result0_0 = false;
      }
    /* Output section */
    PopContext()
    return result0_0;
  }}

/* Flattened Modelica model:

function OpenIPSL.NonElectrical.Functions.SE_exp
discrete input Real u "Unsaturated Input";
discrete input Real S_EE_1 "Saturation factor at point E_1";
discrete input Real S_EE_2 "Saturation factor at point E_2";
discrete input Real E_1 "First saturation point";
discrete input Real E_2 "Second saturation point";
discrete output Real sys "Saturated Output";
protected 
parameter Real X = log(S_EE_2/S_EE_1)/log(E_2);
public 
algorithm 
sys := S_EE_1*u^X;
end OpenIPSL.NonElectrical.Functions.SE_exp;

  */
DYMOLA_STATIC double   OpenIPSL_NonElectrical_Functions_SEx_0exp(double  u0_0, 
  double  Sx_0EEx_01, double  Sx_0EEx_02, double  Ex_01, double  Ex_02) {
  PushContext("OpenIPSL.NonElectrical.Functions.SE_exp")
  {
    /* Declare outputs and temporaries */
    double   sys0_0;
    double   X0_0;
    sys0_0=0;
    X0_0 = divGuarded(logGuarded(divGuarded(Sx_0EEx_02,"S_EE_2",Sx_0EEx_01,
      "S_EE_1"),"S_EE_2/S_EE_1"),"log(S_EE_2/S_EE_1)",logGuarded(Ex_02,"E_2"),
      "log(E_2)");
    /* Start of real code */
      sys0_0 = Sx_0EEx_01*powGuarded(u0_0,"u",X0_0,"X");
    /* Output section */
    PopContext()
    return sys0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Generators.Xorshift64star.initialState
input Integer localSeed "The local seed to be used for generating initial states";
input Integer globalSeed "The global seed to be combined with the local seed";
output Integer state[2] "The generated initial states";
protected 
discrete Real r "Random number not used outside the function";
constant Integer p = 10 "The number of iterations to use";
public 
algorithm 
if (localSeed == 0 and globalSeed == 0) then 
state := {126247697, globalSeed};
else
state := {localSeed, globalSeed};
end if;
for i in (1:p) loop
(r, state)  := Modelica.Math.Random.Generators.Xorshift64star.random(state);
end for;
end Modelica.Math.Random.Generators.Xorshift64star.initialState;

  */
DYMOLA_STATIC IntegerArray    Modelica_Math_Random_Generators_Xorshift64star_initialState
  (int  localSeed0_0, int  globalSeed0_0) {
  PushContext("Modelica.Math.Random.Generators.Xorshift64star.initialState")
  {
    /* Declare outputs and temporaries */
    IntegerArray    state0_0;
    double   r0_0;
    int   p0_0;
    MarkObject retmark_ = PushMark();
    state0_0=IntegerTemporary( 1, 2);
    RePushMark(&retmark_);
    IntegerFillAssign( state0_0, 0);
    r0_0=0;
    p0_0 = 10;
    /* Start of real code */
      if (localSeed0_0 == 0 AND globalSeed0_0 == 0) {
        IntegerAssign (state0_0, IntegerScalarArray ( 2, (int )(126247697), (int )(
          globalSeed0_0)));
        Release();
      }
      else{
        IntegerAssign (state0_0, IntegerScalarArray ( 2, (int )(localSeed0_0), (
          int )(globalSeed0_0)));
        Release();
      }
      {
        int end_ = p0_0;
        int i0_0_0;
        for(i0_0_0 = 1;i0_0_0 <= end_;i0_0_0 += 1) {
          {
            struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct
               dummy_mult_=Modelica_Math_Random_Generators_Xorshift64star_random_M
              (state0_0);
            r0_0 = dummy_mult_.result0_0_0member;
            IntegerAssign (state0_0, dummy_mult_.stateOut0_0_0member);
          }
          Release();
        }
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return state0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Generators.Xorshift64star.random
input Integer stateIn[2] "The internal states for the random number generator";
discrete output Real result "A random number with a uniform distribution on the interval (0,1]";
output Integer stateOut[2] "The new internal states of the random number generator";

external "C" ModelicaRandom_xorshift64star(stateIn, stateOut, result) annotation(Library={"ModelicaExternalC"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Math.Random.Generators.Xorshift64star.random;

  */
extern void (ModelicaRandom_xorshift64star)(int  const *, int  *, double  *);
DYMOLA_STATIC struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct
   Modelica_Math_Random_Generators_Xorshift64star_random_M(IntegerArray   
  stateIn0_0) {
  PushContext("Modelica.Math.Random.Generators.Xorshift64star.random")
  AssertModelica(DYNSizeSimple(stateIn0_0,1)==2,"size(stateIn, 1) == 2","Dimension check of input to function failed");
  {
    /* Declare outputs and temporaries */
    double   result0_0;
    IntegerArray    stateOut0_0;
    MarkObject retmark_ = PushMark();
    result0_0=0;
    stateOut0_0=IntegerTemporary( 1, 2);
    RePushMark(&retmark_);
    IntegerFillAssign( stateOut0_0, 0);
    /* Start of real code */
    {
      (ModelicaRandom_xorshift64star)(stateIn0_0.data, stateOut0_0.data, & 
        result0_0);
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    {
      struct Modelica_Math_Random_Generators_Xorshift64star_random_M_struct out_;
      out_.result0_0_0member = result0_0;
      out_.stateOut0_0_0member = stateOut0_0;
      return out_;
    }
  }}

/* Flattened Modelica model:

function Modelica.Math.Random.Utilities.impureRandom
input Integer id "Identification number from initializeImpureRandom(..) function (is needed for correct sorting)";
discrete output Real y "A random number with a uniform distribution on the interval (0,1]";

external "C" y = ModelicaRandom_impureRandom_xorshift1024star(id) annotation(Library={"ModelicaExternalC"}, LibraryDirectory="modelica://Modelica/Resources/Library");
end Modelica.Math.Random.Utilities.impureRandom;

  */
extern double (ModelicaRandom_impureRandom_xorshift1024star)(int );
DYMOLA_STATIC double   Modelica_Math_Random_Utilities_impureRandom_M(int  id0_0)
   {
  PushContext("Modelica.Math.Random.Utilities.impureRandom")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    y0_0=0;
    /* Start of real code */
    {
      y0_0 = (ModelicaRandom_impureRandom_xorshift1024star)(id0_0);
      }
    /* Output section */
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Special.Internal.erfInvUtil
discrete input Real p "First input argument";
discrete input Real q "Second input argument";
discrete output Real y "Result value";
protected 
discrete Real g;
discrete Real r;
discrete Real xs;
discrete Real x;
constant Real y1 = 0.08913147449493408;
constant Real P1[8] = {-0.0005087819496582806, -0.008368748197417368, 0.03348066254097446, -0.012692614766297404, -0.03656379714117627, 0.02198786811111689, 0.008226878746769157, -0.005387729650712429};
constant Real Q1[10] = {1.0, -0.9700050433032906, -1.5657455823417585, 1.5622155839842302, 0.662328840472003, -0.7122890234154284, -0.05273963823400997, 0.07952836873415717, -0.0023339375937419, 0.0008862163904564247};
constant Real y2 = 2.249481201171875;
constant Real P2[9] = {-0.20243350835593876, 0.10526468069939171, 8.3705032834312, 17.644729840837403, -18.851064805871424, -44.6382324441787, 17.445385985570866, 21.12946554483405, -3.6719225470772936};
constant Real Q2[9] = {1.0, 6.242641248542475, 3.971343795334387, -28.66081804998, -20.14326346804852, 48.560921310873994, 10.826866735546016, -22.643693341313973, 1.7211476576120028};
constant Real y3 = 0.807220458984375;
constant Real P3[11] = {-0.1311027816799519, -0.16379404719331705, 0.11703015634199525, 0.38707973897260434, 0.3377855389120359, 0.14286953440815717, 0.029015791000532906, 0.0021455899538880526, -6.794655751811263E-07, 2.8522533178221704E-08, -6.81149956853777E-10};
constant Real Q3[8] = {1.0, 3.4662540724256723, 5.381683457070069, 4.778465929458438, 2.5930192162362027, 0.848854343457902, 0.15226433829533179, 0.011059242293464892};
constant Real y4 = 0.9399557113647461;
constant Real P4[9] = {-0.0350353787183178, -0.0022242652921344794, 0.018557330651423107, 0.009508047013259196, 0.0018712349281955923, 0.00015754461742496055, 4.60469890584318E-06, -2.304047769118826E-10, 2.6633922742578204E-12};
constant Real Q4[7] = {1.0, 1.3653349817554064, 0.7620591645536234, 0.22009110576413124, 0.03415891436709477, 0.00263861676657016, 7.646752923027944E-05};
constant Real y5 = 0.9836282730102539;
constant Real P5[9] = {-0.016743100507663373, -0.0011295143874558028, 0.001056288621524929, 0.00020938631748758808, 1.4962478375834237E-05, 4.4969678992770644E-07, 4.625961635228786E-09, -2.811287356288318E-14, 9.905570997331033E-17};
constant Real Q5[7] = {1.0, 0.5914293448864175, 0.1381518657490833, 0.016074608709367652, 0.0009640118070051656, 2.7533547476472603E-05, 2.82243172016108E-07};
constant Real y6 = 0.9971456527709961;
constant Real P6[8] = {-0.002497821279189813, -7.79190719229054E-06, 2.5472303741302746E-05, 1.6239777734251093E-06, 3.963410113048012E-08, 4.116328311909442E-10, 1.4559628671867504E-12, -1.1676501239718427E-18};
constant Real Q6[7] = {1.0, 0.2071231122144225, 0.01694108381209759, 0.0006905382656226846, 1.4500735981823264E-05, 1.4443775662814415E-07, 5.097612765997785E-10};
constant Real y7 = 0.9994134902954102;
constant Real P7[8] = {-0.0005390429110190785, -2.8398759004727723E-07, 8.994651148922914E-07, 2.2934585926592085E-08, 2.2556144486350015E-10, 9.478466275030226E-13, 1.3588013010892486E-15, -3.4889039339994887E-22};
constant Real Q7[7] = {1.0, 0.08457462340018994, 0.002820929847262647, 4.682929219408942E-05, 3.999688121938621E-07, 1.6180929088790448E-09, 2.315586083102596E-12};
public 
algorithm 
if (p <= 0.5) then 
g := p*(p+10);
r := Modelica.Math.Special.Internal.polyEval(P1, p)/Modelica.Math.Special.Internal.polyEval(Q1, p);
y := g*y1+g*r;
elseif (q >= 0.25) then 
g := sqrt( -2*log(q));
xs := q-0.25;
r := Modelica.Math.Special.Internal.polyEval(P2, xs)/Modelica.Math.Special.Internal.polyEval(Q2, xs);
y := g/(y2+r);
else
x := sqrt( -log(q));
if (x < 3) then 
xs := x-1.125;
r := Modelica.Math.Special.Internal.polyEval(P3, xs)/Modelica.Math.Special.Internal.polyEval(Q3, xs);
y := y3*x+r*x;
elseif (x < 6) then 
xs := x-3;
r := Modelica.Math.Special.Internal.polyEval(P4, xs)/Modelica.Math.Special.Internal.polyEval(Q4, xs);
y := y4*x+r*x;
elseif (x < 18) then 
xs := x-6;
r := Modelica.Math.Special.Internal.polyEval(P5, xs)/Modelica.Math.Special.Internal.polyEval(Q5, xs);
y := y5*x+r*x;
elseif (x < 44) then 
xs := x-18;
r := Modelica.Math.Special.Internal.polyEval(P6, xs)/Modelica.Math.Special.Internal.polyEval(Q6, xs);
y := y6*x+r*x;
else
xs := x-44;
r := Modelica.Math.Special.Internal.polyEval(P7, xs)/Modelica.Math.Special.Internal.polyEval(Q7, xs);
y := y7*x+r*x;
end if;
end if;
end Modelica.Math.Special.Internal.erfInvUtil;

  */
DYMOLA_STATIC double   Modelica_Math_Special_Internal_erfInvUtil(double  p0_0, 
  double  q0_0) {
  PushContext("Modelica.Math.Special.Internal.erfInvUtil")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    double   g0_0;
    double   r0_0;
    double   xs0_0;
    double   x0_0;
    double   y10_0;
    RealArray    P10_0;
    RealArray    Q10_0;
    double   y20_0;
    RealArray    P20_0;
    RealArray    Q20_0;
    double   y30_0;
    RealArray    P30_0;
    RealArray    Q30_0;
    double   y40_0;
    RealArray    P40_0;
    RealArray    Q40_0;
    double   y50_0;
    RealArray    P50_0;
    RealArray    Q50_0;
    double   y60_0;
    RealArray    P60_0;
    RealArray    Q60_0;
    double   y70_0;
    RealArray    P70_0;
    RealArray    Q70_0;
    MarkObject retmark_ = PushMark();
    y0_0=0;
    g0_0=0;
    r0_0=0;
    xs0_0=0;
    x0_0=0;
    y10_0 = 0.08913147449493408;
    P10_0=RealTemporary( 1, 8);
    PushMark();
    RealAssign (P10_0, RealTemporaryDense( DymArrays5, 1, 8));
    Release();
    Q10_0=RealTemporary( 1, 10);
    PushMark();
    RealAssign (Q10_0, RealTemporaryDense( DymArrays6, 1, 10));
    Release();
    y20_0 = 2.249481201171875;
    P20_0=RealTemporary( 1, 9);
    PushMark();
    RealAssign (P20_0, RealTemporaryDense( DymArrays7, 1, 9));
    Release();
    Q20_0=RealTemporary( 1, 9);
    PushMark();
    RealAssign (Q20_0, RealTemporaryDense( DymArrays8, 1, 9));
    Release();
    y30_0 = 0.807220458984375;
    P30_0=RealTemporary( 1, 11);
    PushMark();
    RealAssign (P30_0, RealTemporaryDense( DymArrays9, 1, 11));
    Release();
    Q30_0=RealTemporary( 1, 8);
    PushMark();
    RealAssign (Q30_0, RealTemporaryDense( DymArrays10, 1, 8));
    Release();
    y40_0 = 0.9399557113647461;
    P40_0=RealTemporary( 1, 9);
    PushMark();
    RealAssign (P40_0, RealTemporaryDense( DymArrays11, 1, 9));
    Release();
    Q40_0=RealTemporary( 1, 7);
    PushMark();
    RealAssign (Q40_0, RealTemporaryDense( DymArrays12, 1, 7));
    Release();
    y50_0 = 0.9836282730102539;
    P50_0=RealTemporary( 1, 9);
    PushMark();
    RealAssign (P50_0, RealTemporaryDense( DymArrays13, 1, 9));
    Release();
    Q50_0=RealTemporary( 1, 7);
    PushMark();
    RealAssign (Q50_0, RealTemporaryDense( DymArrays14, 1, 7));
    Release();
    y60_0 = 0.9971456527709961;
    P60_0=RealTemporary( 1, 8);
    PushMark();
    RealAssign (P60_0, RealTemporaryDense( DymArrays15, 1, 8));
    Release();
    Q60_0=RealTemporary( 1, 7);
    PushMark();
    RealAssign (Q60_0, RealTemporaryDense( DymArrays16, 1, 7));
    Release();
    y70_0 = 0.9994134902954102;
    P70_0=RealTemporary( 1, 8);
    PushMark();
    RealAssign (P70_0, RealTemporaryDense( DymArrays17, 1, 8));
    Release();
    Q70_0=RealTemporary( 1, 7);
    PushMark();
    RealAssign (Q70_0, RealTemporaryDense( DymArrays18, 1, 7));
    Release();
    /* Start of real code */
      if (p0_0 <= 0.5) {
        g0_0 = p0_0*(p0_0+10);
        r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P10_0, p0_0),
          "Modelica.Math.Special.Internal.polyEval(P1, p)",Modelica_Math_Special_Internal_polyEval
          (Q10_0, p0_0),"Modelica.Math.Special.Internal.polyEval(Q1, p)");
        y0_0 = g0_0*y10_0+g0_0*r0_0;
      }
      else if (q0_0 >= 0.25) {
        g0_0 = sqrtGuarded( -2*logGuarded(q0_0,"q")," -2*log(q)");
        xs0_0 = q0_0-0.25;
        r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P20_0, xs0_0),
          "Modelica.Math.Special.Internal.polyEval(P2, xs)",Modelica_Math_Special_Internal_polyEval
          (Q20_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q2, xs)");
        y0_0 = divGuarded(g0_0,"g",y20_0+r0_0,"y2+r");
      }
      else{
        x0_0 = sqrtGuarded( -logGuarded(q0_0,"q")," -log(q)");
        if (x0_0 < 3) {
          xs0_0 = x0_0-1.125;
          r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P30_0, xs0_0),
            "Modelica.Math.Special.Internal.polyEval(P3, xs)",Modelica_Math_Special_Internal_polyEval
            (Q30_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q3, xs)");
          y0_0 = y30_0*x0_0+r0_0*x0_0;
        }
        else if (x0_0 < 6) {
          xs0_0 = x0_0-3;
          r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P40_0, xs0_0),
            "Modelica.Math.Special.Internal.polyEval(P4, xs)",Modelica_Math_Special_Internal_polyEval
            (Q40_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q4, xs)");
          y0_0 = y40_0*x0_0+r0_0*x0_0;
        }
        else if (x0_0 < 18) {
          xs0_0 = x0_0-6;
          r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P50_0, xs0_0),
            "Modelica.Math.Special.Internal.polyEval(P5, xs)",Modelica_Math_Special_Internal_polyEval
            (Q50_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q5, xs)");
          y0_0 = y50_0*x0_0+r0_0*x0_0;
        }
        else if (x0_0 < 44) {
          xs0_0 = x0_0-18;
          r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P60_0, xs0_0),
            "Modelica.Math.Special.Internal.polyEval(P6, xs)",Modelica_Math_Special_Internal_polyEval
            (Q60_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q6, xs)");
          y0_0 = y60_0*x0_0+r0_0*x0_0;
        }
        else{
          xs0_0 = x0_0-44;
          r0_0 = divGuarded(Modelica_Math_Special_Internal_polyEval(P70_0, xs0_0),
            "Modelica.Math.Special.Internal.polyEval(P7, xs)",Modelica_Math_Special_Internal_polyEval
            (Q70_0, xs0_0),"Modelica.Math.Special.Internal.polyEval(Q7, xs)");
          y0_0 = y70_0*x0_0+r0_0*x0_0;
        }
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return y0_0;
  }}

/* Flattened Modelica model:

function Modelica.Math.Special.Internal.polyEval
discrete input Real c[:] "Polynomial coefficients";
discrete input Real u "Abscissa value";
discrete output Real y "= c[1] + u*(c[2] + u*(c[3] + u*(c[4]*u^3 + ...)))";

algorithm 
y := c[size(c, 1)];
for j in (size(c, 1)-1:-1:1) loop
y := c[j]+u*y;
end for;
end Modelica.Math.Special.Internal.polyEval;

  */
DYMOLA_STATIC double   Modelica_Math_Special_Internal_polyEval(RealArray   c0_0,
   double  u0_0) {
  PushContext("Modelica.Math.Special.Internal.polyEval")
  {
    /* Declare outputs and temporaries */
    double   y0_0;
    MarkObject retmark_ = PushMark();
    y0_0=0;
    /* Start of real code */
      y0_0 = RealElement( c0_0, (SizeType)(DYNSizeSimple(c0_0, 1)));
      {
        int start_ = (DYNSizeSimple(c0_0, 1)-1);
        int j0_0_0;
        for(j0_0_0 = start_;(j0_0_0 - 1) * (-1) <= 0 ;j0_0_0 += (-1)) {
          y0_0 = RealVectorElement( c0_0, (SizeType)(j0_0_0))+u0_0*y0_0;
        }
      }
    /* Output section */
    PopMark(retmark_);
    PopContext()
    return y0_0;
  }}
