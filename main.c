// Instruction: 
// [ bits 0-4 op ]
// [ 5 bit reg0 ] also dist reg
// [ 6 bit reg1 ]
// 7th bit is unused

enum Opcode {
  AND = 0,
  NOT = 1,
  OR = 2,
  XOR = 3,
  ADD = 4,
  SUB = 5,
  MUL = 6,
  DIV = 7,
  MOD = 8,
  ABS = 9,
  MIN = 10,
  MAX = 11,
  IMM = 12,
  SHR = 13,
  SHL = 14,
  POPCNT = 15,
  STKSET = 16, 
  STKPUSH = 17,
  STKPOP = 18,
  STKPTRLEFT = 19,
  STKPTRRIGHT = 20,
  STKPTRSET = 21,
  INCPC = 22,
  DECPC = 23,
  SETPC = 24,
  REGLOAD = 25,
  REGSET = 26,
  GTZ = 27, // reg0 greator than zero
  LTZ = 28, // reg0 less than zero
  GTR = 29, // reg0 greator than reg1
  LTR = 30, // reg0 less than reg1 
  BEQ = 31, // reg0 == reg1
};

struct VirtualMachine {
  int stack[32];
  int reg0;
  int reg1;
};

int main() { 

  return 0;
}
