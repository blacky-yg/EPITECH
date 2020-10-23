/*
** EPITECH PROJECT, 2019
** Kind of Basic Calculator
** File description:
** Headers of bistromatic program
*/

#ifndef BISTROMATIC_H_
#define BISTROMATIC_H_

#define OP_OPEN_PARENT_IDX  0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX         2
#define OP_SUB_IDX          3
#define OP_NEG_IDX          3
#define OP_MULT_IDX         4
#define OP_DIV_IDX          5
#define OP_MOD_IDX          6

#define EXIT_USAGE    84
#define EXIT_BASE     84
#define EXIT_SIZE_NEG 84
#define EXIT_MALLOC   84
#define EXIT_READ     84
#define EXIT_OPS      84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG        "error"

char *eval_expr(char const *base, char const *ops,
                char const *expr, unsigned int size);
int number(char *str);
char *get_num_in_char(char const *str);
int usage(char **str);
int check_error(char const *base, char const *ops, char const *expr);
int check_expr_base_error(char const *expr);
int check_ops_base_error(char const *ops);
void get_value(char const *expr, char const *av, char *ops_res, char *expr_res);
int check_base_num(char const *expr, char *expr_res);
int check_base_ops(char const *ops, char *ops_res);
char *summands(char const *str, char *res);
char *factors(char const *str, char *res);
char *check_brackets(char const *str, char *res);
char *sub_operation(char *s1, char *s2, char *res);
char *add_operation(char *s1, char *s2, char *res);
char *mult_operation(char *s1, char *s2, char *res);
char *div_operation(char *s1, char *s2, char *res);
char *mod_operation(char *s1, char *s2, char *res);

#endif /* !BISTROMATIC_H_  */
