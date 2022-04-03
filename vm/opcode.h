#pragma once

#include "lib.h"

enum {
  VM_OPCODE_EXIT = 0,
  VM_OPCODE_REG = 1,
  VM_OPCODE_INT = 2,
  VM_OPCODE_JUMP = 3,
  VM_OPCODE_FUNC = 4,
  VM_OPCODE_ADD = 5,
  VM_OPCODE_SUB = 6,
  VM_OPCODE_MUL = 7,
  VM_OPCODE_DIV = 8,
  VM_OPCODE_MOD = 9,
  VM_OPCODE_CALL = 10,
  VM_OPCODE_RETURN = 11,
  VM_OPCODE_PUTCHAR = 12,
  VM_OPCODE_BB = 13,


  VM_OPCODE_DCALL = 16,
  VM_OPCODE_INTF = 17,
  VM_OPCODE_BEQ = 18,
  VM_OPCODE_BLT = 19,
  VM_OPCODE_ADDI = 20,
  VM_OPCODE_SUBI = 21,
  VM_OPCODE_TCALL = 22,
  VM_OPCODE_RETI = 23,
  VM_OPCODE_BEQI = 24,
  VM_OPCODE_BLTI = 25,
  VM_OPCODE_MULI = 26,
  VM_OPCODE_DIVI = 27,
  VM_OPCODE_MODI = 28,
};

typedef uint32_t vm_opcode_t;
