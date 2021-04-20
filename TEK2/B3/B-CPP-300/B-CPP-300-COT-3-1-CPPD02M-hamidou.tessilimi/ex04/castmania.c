/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** castmania
*/

#include "castmania.h"

void display_res(division_t *division)
{
    integer_op_t *integer;
    decimale_op_t *decimale;

    if (division->div_type == INTEGER) {
        integer = (integer_op_t *)division->div_op;
        printf("%d\n", integer->res);
    } else if (division->div_type == DECIMALE) {
        decimale = (decimale_op_t *)division->div_op;
        printf("%f\n", decimale->res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *instruct;
    addition_t *addition;
    division_t *division;

    instruct = (instruction_t *)data;
    if (instruction_type == ADD_OPERATION) {
        addition = (addition_t *)instruct->operation;
        exec_add(addition);
        if (instruct->output_type == VERBOSE)
            printf("%d\n", addition->add_op.res);
    }
    if (instruction_type == DIV_OPERATION) {
        division = (division_t *)instruct->operation;
        exec_div(division);
        if (instruct->output_type == VERBOSE && instruction_type == DIV_OPERATION)
            display_res(division);
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    int i = 0;
    float j = 0.0;

    if (instruction_type == PRINT_INT) {
        i = *(int *)data;
        printf("%d\n", i);
    } else if (instruction_type == PRINT_FLOAT) {
        j = *(float *)data;
        printf("%f\n", j);
    } else
        exec_operation(instruction_type, data);
}