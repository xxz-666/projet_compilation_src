#ifndef _PASSE_2_H_
#define _PASSE_2_H_

#include "defs.h"

#define $zero 0
#define $at 1
#define $v0 2
#define $v1 3
#define $a0 4
#define $a1 5
#define $a2 6
#define $a3 7
#define $t0 8
#define $t1 9
#define $t2 10
#define $t3 11
#define $t4 12
#define $t5 13
#define $t6 14
#define $t7 15
#define $s0 16
#define $s1 17
#define $s2 18
#define $s3 19
#define $s4 20
#define $s5 21
#define $s6 22
#define $s7 23
#define $t8 24
#define $t9 25
#define $k0 26
#define $k1 27
#define $gp 28
#define $sp 29
#define $fp 30
#define $ra 31

#define PRINT_INTEGER_SYSCALL 1
#define PRINT_STRING_SYSCALL 4
#define EXIT_SYSCALL 10

void gen_code_passe_2(node_t root);
void gen_vardecls(node_t node);
void gen_decls_list(node_t node);
void gen_decls(node_t node);
void gen_decl_list(node_t node);
void gen_decl(node_t node);
void gen_main(node_t node);
void gen_type(node_t node);
void gen_ident(node_t node);
void gen_block(node_t node);
void gen_insts(node_t node);
void gen_insts_list(node_t node);
void gen_inst(node_t node);
void gen_printparam_list(node_t node);
void gen_printparam(node_t node);
void gen_exp(node_t node);
void reg_for_intval(node_t node);
void reg_for_exp_binaire(node_t node);



#endif

