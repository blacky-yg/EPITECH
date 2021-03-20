/*
** EPITECH PROJECT, 2021
** nm
** File description:
** types64
*/

#ifndef TYPES_64_H
#define TYPES_64_H

#define IS_UNDEFINED_64(x)                                 \
    do {                                                \
        if (ELF64_ST_BIND(x) == STB_GLOBAL)             \
            return ('U');                               \
        if (ELF64_ST_BIND(x) == STB_LOCAL)              \
            return ('u');                               \
        if (ELF64_ST_BIND(x) == STB_WEAK)               \
            return ('w');                               \
    } while (0)

#define IS_DATA_WRITE_64(x)                                \
    do {                                                \
        if (ELF64_ST_BIND(x) == STB_GLOBAL)             \
            return ('D');                               \
        if (ELF64_ST_BIND(x) == STB_LOCAL)              \
            return ('d');                               \
        if (ELF64_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_DATA_64(x)                                      \
    do {                                                \
        if (ELF64_ST_BIND(x) == STB_GLOBAL)             \
            return ('R');                               \
        if (ELF64_ST_BIND(x) == STB_LOCAL)              \
            return ('r');                               \
        if (ELF64_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_EXEC_64(x)                                      \
    do {                                                \
        if (ELF64_ST_BIND(x) == STB_GLOBAL)             \
            return ('T');                               \
        if (ELF64_ST_BIND(x) == STB_LOCAL)              \
            return ('t');                               \
        if (ELF64_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#define IS_BIN_64(x)                                       \
    do {                                                \
        if (ELF64_ST_BIND(x) == STB_GLOBAL)             \
            return ('B');                               \
        if (ELF64_ST_BIND(x) == STB_LOCAL)              \
            return ('b');                               \
        if (ELF64_ST_BIND(x) == STB_WEAK)               \
            return ('W');                               \
    } while (0)

#endif /* !TYPES_64_H */