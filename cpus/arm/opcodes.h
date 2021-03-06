  "add",    {REG15,REG19,IMROT},                  {0x02800000,AAANY,SETCC},
  "add",    {REG15,REG19,REG03},                  {0x00800000,AAANY,SETCC},
  "add",    {REG15,REG19,REG03,SHIFT},            {0x00800000,AAANY,SETCC},
    "add",  {TRG02,TRG05,TRG08},                  {0x1800,AA4TUP,THUMB},
    "add",  {TRG02,TRG05,TUIM3},                  {0x1c00,AA4TUP,THUMB},
    "add",  {TRG10,TUIM8},                        {0x3000,AA4TUP,THUMB},
    "add",  {TRG02,THR05},                        {0x4440,AA4TUP,THUMB},
    "add",  {THR02,TRG05},                        {0x4480,AA4TUP,THUMB},
    "add",  {THR02,THR05},                        {0x44c0,AA4TUP,THUMB},
    "add",  {TRG10,TPCRG,TUIMA},                  {0xa000,AA4TUP,THUMB},
    "add",  {TRG10,TSPRG,TUIMA},                  {0xa800,AA4TUP,THUMB},
    "add",  {TSPRG,TSIM9},                        {0xb000,AA4TUP,THUMB},
  "adc",    {REG15,REG19,IMROT},                  {0x02a00000,AAANY,SETCC},
  "adc",    {REG15,REG19,REG03},                  {0x00a00000,AAANY,SETCC},
  "adc",    {REG15,REG19,REG03,SHIFT},            {0x00a00000,AAANY,SETCC},
    "adc",  {TRG02,TRG05},                        {0x4140,AA4TUP,THUMB},
  "adr",    {REG15,PCLRT},                        {0x028f0000,AAANY,0},
    "adr",  {TRG10,TPCLW},                        {0xa000,AA4TUP,THUMB},
  "and",    {REG15,REG19,IMROT},                  {0x02000000,AAANY,SETCC},
  "and",    {REG15,REG19,REG03},                  {0x00000000,AAANY,SETCC},
  "and",    {REG15,REG19,REG03,SHIFT},            {0x00000000,AAANY,SETCC},
    "and",  {TRG02,TRG05},                        {0x4000,AA4TUP,THUMB},
    "asr",  {TRG02,TRG05,TUIM5},                  {0x1000,AA4TUP,THUMB},
    "asr",  {TRG02,TRG05},                        {0x4100,AA4TUP,THUMB},
  "b",      {BRA24},                              {0x0a000000,AAANY,0},
    "b",    {TBR11},                              {0xe000,AA4TUP,THUMB},
    "beq",  {TBR08},                              {0xd000,AA4TUP,THUMB},
    "bne",  {TBR08},                              {0xd100,AA4TUP,THUMB},
    "bcs",  {TBR08},                              {0xd200,AA4TUP,THUMB},
    "bcc",  {TBR08},                              {0xd300,AA4TUP,THUMB},
    "bmi",  {TBR08},                              {0xd400,AA4TUP,THUMB},
    "bpl",  {TBR08},                              {0xd500,AA4TUP,THUMB},
    "bvs",  {TBR08},                              {0xd600,AA4TUP,THUMB},
    "bvc",  {TBR08},                              {0xd700,AA4TUP,THUMB},
    "bhi",  {TBR08},                              {0xd800,AA4TUP,THUMB},
    "bls",  {TBR08},                              {0xd900,AA4TUP,THUMB},
    "bge",  {TBR08},                              {0xda00,AA4TUP,THUMB},
    "blt",  {TBR08},                              {0xdb00,AA4TUP,THUMB},
    "bgt",  {TBR08},                              {0xdc00,AA4TUP,THUMB},
    "ble",  {TBR08},                              {0xdd00,AA4TUP,THUMB},
    "bhs",  {TBR08},                              {0xd200,AA4TUP,THUMB},
    "blo",  {TBR08},                              {0xd300,AA4TUP,THUMB},
    "bul",  {TBR08},                              {0xd300,AA4TUP,THUMB},
  "bic",    {REG15,REG19,IMROT},                  {0x03c00000,AAANY,SETCC},
  "bic",    {REG15,REG19,REG03},                  {0x01c00000,AAANY,SETCC},
  "bic",    {REG15,REG19,REG03,SHIFT},            {0x01c00000,AAANY,SETCC},
    "bic",  {TRG02,TRG05},                        {0x4380,AA4TUP,THUMB},
  "bl",     {BRA24},                              {0x0b000000,AAANY,0},
    "bl",   {TBRHL},                              {0xf000,AA4TUP,THUMB},
  "bx",     {REG03},                              {0x012fff10,AA4TUP,NOPC},
    "bx",   {TRG05},                              {0x4700,AA4TUP,THUMB},
    "bx",   {THR05},                              {0x4740,AA4TUP,THUMB},
  "cdp",    {REG11,CPOP4,REG15,REG19,REG03},      {0x0e000000,AA2UP,0},
  "cdp",    {REG11,CPOP4,REG15,REG19,REG03,CPTYP},{0x0e000000,AA2UP,0},
  "cmn",    {REG19,IMROT},                        {0x03700000,AAANY,0},
  "cmn",    {REG19,REG03},                        {0x01700000,AAANY,0},
  "cmn",    {REG19,REG03,SHIFT},                  {0x01700000,AAANY,0},
    "cmn",  {TRG02,TRG05},                        {0x42c0,AA4TUP,THUMB},
  "cmp",    {REG19,IMROT},                        {0x03500000,AAANY,0},
  "cmp",    {REG19,REG03},                        {0x01500000,AAANY,0},
  "cmp",    {REG19,REG03,SHIFT},                  {0x01500000,AAANY,0},
    "cmp",  {TRG10,TUIM8},                        {0x2800,AA4TUP,THUMB},
    "cmp",  {TRG02,TRG05},                        {0x4280,AA4TUP,THUMB},
    "cmp",  {TRG02,THR05},                        {0x4540,AA4TUP,THUMB},
    "cmp",  {THR02,TRG05},                        {0x4580,AA4TUP,THUMB},
    "cmp",  {THR02,THR05},                        {0x45c0,AA4TUP,THUMB},
  "eor",    {REG15,REG19,IMROT},                  {0x02200000,AAANY,SETCC},
  "eor",    {REG15,REG19,REG03},                  {0x00200000,AAANY,SETCC},
  "eor",    {REG15,REG19,REG03,SHIFT},            {0x00200000,AAANY,SETCC},
    "eor",  {TRG02,TRG05},                        {0x4040,AA4TUP,THUMB},
  "ldc",    {REG11,REG15,PCLCP},                  {0x0d1f0000,AA2UP,0},
  "ldc",    {REG11,REG15,R19PR,IMCP1},            {0x0d100000,AA2UP,0},
  "ldc",    {REG11,REG15,R19PO},                  {0x0d100000,AA2UP,0},
  "ldc",    {REG11,REG15,R19PO,IMCP2},            {0x0c100000,AA2UP,0},
  "ldm",    {R19WB,RLIST},                        {0x08100000,AAANY,NOPC},
    "ldmia",{TR10W,TRLST},                        {0xc800,AA4TUP,THUMB},
  "ldr",    {REG15,PCL12},                        {0x051f0000,AAANY,NOPCWB},
  "ldr",    {REG15,R19PR,IMUD1},                  {0x05100000,AAANY,NOPCWB},
  "ldr",    {REG15,R19PR,R3UD1},                  {0x07100000,AAANY,NOPCWB|NOPCR03},
  "ldr",    {REG15,R19PR,R3UD2,SHIM1},            {0x07100000,AAANY,NOPCWB|NOPCR03},
  "ldr",    {REG15,R19PO},                        {0x05900000,AAANY,NOPCWB},
  "ldr",    {REG15,R19PO,IMUD2},                  {0x04100000,AAANY,NOPCWB},
  "ldr",    {REG15,R19PO,R3UD2},                  {0x06100000,AAANY,NOPCWB|NOPCR03},
  "ldr",    {REG15,R19PO,R3UD2,SHIM2},            {0x06100000,AAANY,NOPCWB|NOPCR03},
    "ldr",  {TRG10,TPCLW},                        {0x4800,AA4TUP,THUMB},
    "ldr",  {TRG10,TPCPR,TUIAI},                  {0x4800,AA4TUP,THUMB},
    "ldr",  {TRG02,TR5IN,TR8IN},                  {0x5800,AA4TUP,THUMB},
    "ldr",  {TRG02,TR5IN,TUI7I},                  {0x6800,AA4TUP,THUMB},
    "ldr",  {TRG10,TSPPR,TUIAI},                  {0x9800,AA4TUP,THUMB},
    "ldrb", {TRG02,TR5IN,TR8IN},                  {0x5c00,AA4TUP,THUMB},
    "ldrb", {TRG02,TR5IN,TUI5I},                  {0x7800,AA4TUP,THUMB},
    "ldrh", {TRG02,TR5IN,TR8IN},                  {0x5a00,AA4TUP,THUMB},
    "ldrh", {TRG02,TR5IN,TUI6I},                  {0x8800,AA4TUP,THUMB},
    "ldsb", {TRG02,TR5IN,TR8IN},                  {0x5600,AA4TUP,THUMB},
    "ldsh", {TRG02,TR5IN,TR8IN},                  {0x5e00,AA4TUP,THUMB},
    "lsl",  {TRG02,TRG05,TUIM5},                  {0x0000,AA4TUP,THUMB},
    "lsl",  {TRG02,TRG05},                        {0x4080,AA4TUP,THUMB},
    "lsr",  {TRG02,TRG05,TUIM5},                  {0x0800,AA4TUP,THUMB},
    "lsr",  {TRG02,TRG05},                        {0x40c0,AA4TUP,THUMB},
  "mcr",    {REG11,CPOP3,REG15,REG19,REG03},      {0x0e000010,AA2UP,0},
  "mcr",    {REG11,CPOP3,REG15,REG19,REG03,CPTYP},{0x0e000010,AA2UP,0},
  "mov",    {REG15,IMROT},                        {0x03a00000,AAANY,SETCC},
  "mov",    {REG15,REG03},                        {0x01a00000,AAANY,SETCC},
  "mov",    {REG15,REG03,SHIFT},                  {0x01a00000,AAANY,SETCC},
    "mov",  {TRG10,TUIM8},                        {0x2000,AA4TUP,THUMB},
    "mov",  {TRG02,TRG05},                        {0x1c00,AA4TUP,THUMB},
    "mov",  {TRG02,THR05},                        {0x4640,AA4TUP,THUMB},
    "mov",  {THR02,TRG05},                        {0x4680,AA4TUP,THUMB},
    "mov",  {THR02,THR05},                        {0x46c0,AA4TUP,THUMB},
  "mrc",    {REG11,CPOP3,REG15,REG19,REG03},      {0x0e100010,AA2UP,0},
  "mrc",    {REG11,CPOP3,REG15,REG19,REG03,CPTYP},{0x0e100010,AA2UP,0},
  "mrs",    {REG15,CSPSR},                        {0x01000000,AA3UP,NOPC},
  "mla",    {REG19,REG03,REG11,REG15},            {0x00200090,AA2UP,SETCC|NOPC|DIFR19|DIFR03},
  "msr",    {PSR_F,IMROT},                        {0x0320f000,AA3UP,0},
  "msr",    {PSR_F,REG03},                        {0x0120f000,AA3UP,NOPC},
  "mul",    {REG19,REG03,REG11},                  {0x00000090,AA2UP,SETCC|NOPC|DIFR19|DIFR03},
    "mul",  {TRG02,TRG05},                        {0x4340,AA4TUP,THUMB},
  "mvn",    {REG15,IMROT},                        {0x03e00000,AAANY,SETCC},
  "mvn",    {REG15,REG03},                        {0x01e00000,AAANY,SETCC},
  "mvn",    {REG15,REG03,SHIFT},                  {0x01e00000,AAANY,SETCC},
    "mvn",  {TRG02,TRG05},                        {0x43c0,AA4TUP,THUMB},
    "neg",  {TRG02,TRG05},                        {0x4240,AA4TUP,THUMB},
  "nop",    {0},                                  {0x01a00000,AAANY,0},
  "orr",    {REG15,REG19,IMROT},                  {0x03800000,AAANY,SETCC},
  "orr",    {REG15,REG19,REG03},                  {0x01800000,AAANY,SETCC},
  "orr",    {REG15,REG19,REG03,SHIFT},            {0x01800000,AAANY,SETCC},
    "orr",  {TRG02,TRG05},                        {0x4300,AA4TUP,THUMB},
    "pop",  {TRLPC},                              {0xbc00,AA4TUP,THUMB},
    "push", {TRLLR},                              {0xb400,AA4TUP,THUMB},
    "ror",  {TRG02,TRG05},                        {0x41c0,AA4TUP,THUMB},
  "rsb",    {REG15,REG19,IMROT},                  {0x02600000,AAANY,SETCC},
  "rsb",    {REG15,REG19,REG03},                  {0x00600000,AAANY,SETCC},
  "rsb",    {REG15,REG19,REG03,SHIFT},            {0x00600000,AAANY,SETCC},
  "rsc",    {REG15,REG19,IMROT},                  {0x02e00000,AAANY,SETCC},
  "rsc",    {REG15,REG19,REG03},                  {0x00e00000,AAANY,SETCC},
  "rsc",    {REG15,REG19,REG03,SHIFT},            {0x00e00000,AAANY,SETCC},
  "smlal",  {REG15,REG19,REG03,REG11},            {0x00e00090,AA3MUP,SETCC|NOPC|DIFR19|DIFR15|DIFR03},
  "smull",  {REG15,REG19,REG03,REG11},            {0x00c00090,AA3MUP,SETCC|NOPC|DIFR19|DIFR15|DIFR03},
  "stc",    {REG11,REG15,PCLCP},                  {0x0d0f0000,AA2UP,0},
  "stc",    {REG11,REG15,R19PR,IMCP1},            {0x0d000000,AA2UP,0},
  "stc",    {REG11,REG15,R19PO},                  {0x0d000000,AA2UP,0},
  "stc",    {REG11,REG15,R19PO,IMCP2},            {0x0c000000,AA2UP,0},
  "stm",    {R19WB,RLIST},                        {0x08000000,AAANY,NOPC},
    "stmia",{TR10W,TRLST},                        {0xc000,AA4TUP,THUMB},
  "str",    {REG15,PCL12},                        {0x050f0000,AAANY,NOPCWB},
  "str",    {REG15,R19PR,IMUD1},                  {0x05000000,AAANY,NOPCWB},
  "str",    {REG15,R19PR,R3UD1},                  {0x07000000,AAANY,NOPCWB|NOPCR03},
  "str",    {REG15,R19PR,R3UD2,SHIM1},            {0x07000000,AAANY,NOPCWB|NOPCR03},
  "str",    {REG15,R19PO},                        {0x05800000,AAANY,NOPCWB},
  "str",    {REG15,R19PO,IMUD2},                  {0x04000000,AAANY,NOPCWB},
  "str",    {REG15,R19PO,R3UD2},                  {0x06000000,AAANY,NOPCWB|NOPCR03},
  "str",    {REG15,R19PO,R3UD2,SHIM2},            {0x06000000,AAANY,NOPCWB|NOPCR03},
    "str",  {TRG02,TR5IN,TR8IN},                  {0x5000,AA4TUP,THUMB},
    "str",  {TRG02,TR5IN,TUI7I},                  {0x6000,AA4TUP,THUMB},
    "str",  {TRG10,TSPPR,TUIAI},                  {0x9000,AA4TUP,THUMB},
    "strb", {TRG02,TR5IN,TR8IN},                  {0x5400,AA4TUP,THUMB},
    "strb", {TRG02,TR5IN,TUI5I},                  {0x7000,AA4TUP,THUMB},
    "strh", {TRG02,TR5IN,TR8IN},                  {0x5200,AA4TUP,THUMB},
    "strh", {TRG02,TR5IN,TUI6I},                  {0x8000,AA4TUP,THUMB},
  "sbc",    {REG15,REG19,IMROT},                  {0x02c00000,AAANY,SETCC},
  "sbc",    {REG15,REG19,REG03},                  {0x00c00000,AAANY,SETCC},
  "sbc",    {REG15,REG19,REG03,SHIFT},            {0x00c00000,AAANY,SETCC},
    "sbc",  {TRG02,TRG05},                        {0x4180,AA4TUP,THUMB},
  "sub",    {REG15,REG19,IMROT},                  {0x02400000,AAANY,SETCC},
  "sub",    {REG15,REG19,REG03},                  {0x00400000,AAANY,SETCC},
  "sub",    {REG15,REG19,REG03,SHIFT},            {0x00400000,AAANY,SETCC},
    "sub",  {TRG02,TRG05,TRG08},                  {0x1a00,AA4TUP,THUMB},
    "sub",  {TRG02,TRG05,TUIM3},                  {0x1e00,AA4TUP,THUMB},
    "sub",  {TRG10,TUIM8},                        {0x3800,AA4TUP,THUMB},
  "swi",    {SWI24},                              {0x0f000000,AAANY,0},
    "swi",  {TSWI8},                              {0xdf00,AA4TUP,THUMB},
  "swp",    {REG15,REG03,R19PO},                  {0x01000090,AA3UP,NOPC},
  "teq",    {REG19,IMROT},                        {0x03300000,AAANY,0},
  "teq",    {REG19,REG03},                        {0x01300000,AAANY,0},
  "teq",    {REG19,REG03,SHIFT},                  {0x01300000,AAANY,0},
  "tst",    {REG19,IMROT},                        {0x03100000,AAANY,0},
  "tst",    {REG19,REG03},                        {0x01100000,AAANY,0},
  "tst",    {REG19,REG03,SHIFT},                  {0x01100000,AAANY,0},
    "tst",  {TRG02,TRG05},                        {0x4200,AA4TUP,THUMB},
  "umlal",  {REG15,REG19,REG03,REG11},            {0x00a00090,AA3MUP,SETCC|NOPC|DIFR19|DIFR15|DIFR03},
  "umull",  {REG15,REG19,REG03,REG11},            {0x00800090,AA3MUP,SETCC|NOPC|DIFR19|DIFR15|DIFR03},
