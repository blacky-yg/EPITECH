/*
** EPITECH PROJECT, 2021
** nm
** File description:
** types32
*/

#ifndef TYPES_32_H
#define TYPES_32_H

#define IS_UNDEFINED_32(x)                                 \
    do {                                                \
        if (ELF32_ST_BIND(x) == STB_GLOBAL)             \
            return ('U');                               \
        if (ELF32_ST_BIND(x) == STB_LOCAL)              \
            return ('u');                               \
        if (ELF32_ST_BIND(x) == STB_WEAK)               \
            return ('w');                               \
    } while (0)

#define IS_DATA_WRITE_32(x)                                \
    do {                                                \
        if (ELF32_ST_BIND(x) == STB_GLOBAL)             \
            return ('D');                               \
        if (ELF32_ST_BIND(x) == STB_LOCAL)              \
            return ('d');                               \
        if (ELF32_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_DATA_32(x)                                      \
    do {                                                \
        if (ELF32_ST_BIND(x) == STB_GLOBAL)             \
            return ('R');                               \
        if (ELF32_ST_BIND(x) == STB_LOCAL)              \
            return ('r');                               \
        if (ELF32_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_EXEC_32(x)                                      \
    do {                                                \
        if (ELF32_ST_BIND(x) == STB_GLOBAL)             \
            return ('T');                               \
        if (ELF32_ST_BIND(x) == STB_LOCAL)              \
            return ('t');                               \
        if (ELF32_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_BIN_32(x)                                       \
    do {                                                \
        if (ELF32_ST_BIND(x) == STB_GLOBAL)             \
            return ('B');                               \
        if (ELF32_ST_BIND(x) == STB_LOCAL)              \
            return ('b');                               \
        if (ELF32_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#endif /* !TYPES_32_H */