//指令OP
`define EXE_AND  6'b100100
`define EXE_OR   6'b100101
`define EXE_XOR  6'b100110
`define EXE_NOR  6'b100111
`define EXE_ANDI 6'b001100
`define EXE_ORI  6'b001101
`define EXE_XORI 6'b001110
`define EXE_LUI  6'b001111

`define EXE_SLL  6'b000000
`define EXE_SLLV 6'b000100
`define EXE_SRL  6'b000010
`define EXE_SRLV 6'b000110
`define EXE_SRA  6'b000011
`define EXE_SRAV 6'b000111

`define EXE_MFHI 6'b010000
`define EXE_MTHI 6'b010001
`define EXE_MFLO 6'b010010
`define EXE_MTLO 6'b010011

`define EXE_SLT  6'b101010
`define EXE_SLTU 6'b101011
`define EXE_SLTI 6'b001010
`define EXE_SLTIU  6'b001011   
`define EXE_ADD  6'b100000
`define EXE_ADDU 6'b100001
`define EXE_SUB  6'b100010
`define EXE_SUBU 6'b100011
`define EXE_ADDI 6'b001000
`define EXE_ADDIU  6'b001001

`define EXE_MULT 6'b011000
`define EXE_MULTU  6'b011001

`define EXE_DIV  6'b011010
`define EXE_DIVU 6'b011011

`define EXE_J    6'b000010
`define EXE_JAL  6'b000011
`define EXE_JALR 6'b001001
`define EXE_JR   6'b001000
`define EXE_BEQ  6'b000100
`define EXE_BGEZ 5'b00001
`define EXE_BGEZAL  5'b10001
`define EXE_BGTZ 6'b000111
`define EXE_BLEZ 6'b000110
`define EXE_BLTZ 5'b00000
`define EXE_BLTZAL  5'b10000
`define EXE_BNE  6'b000101

`define EXE_LB   6'b100000
`define EXE_LBU  6'b100100
`define EXE_LH   6'b100001
`define EXE_LHU  6'b100101
`define EXE_LW   6'b100011
`define EXE_SB   6'b101000
`define EXE_SH   6'b101001
`define EXE_SW   6'b101011

`define EXE_SYSCALL 6'b001100
`define EXE_BREAK 6'b001101
   
`define EXE_ERET 6'b011000

`define EXE_NOP 6'b000000
`define SSNOP 32'b00000000000000000000000001000000

`define EXE_SPECIAL 6'b000000
`define EXE_REGIMM  6'b000001

`define EXE_COP0 6'b010000
`define EXE_MTC0 6'b00100
`define EXE_MFC0 6'b00000