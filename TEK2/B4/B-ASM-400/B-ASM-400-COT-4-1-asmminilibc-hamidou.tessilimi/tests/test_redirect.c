/*
** EPITECH PROJECT, 2021
** day02m
** File description:
** test_redirect
*/

#include "test_redirect.h"
#include "asm.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

void init(void)
{
	handle = dlopen("./libasm.so", RTLD_LAZY);
	assert(handle);
	my_strlen = dlsym(handle, "strlen");
	my_strcasecmp = dlsym(handle, "strcasecmp");
	my_memmove = dlsym(handle, "memmove");
	my_strncmp = dlsym(handle, "strncmp");
	my_strpbrk = dlsym(handle, "strpbrk");
	my_strcspn = dlsym(handle, "strcspn");
	my_strlen = dlsym(handle, "strlen");
	my_strchr = dlsym(handle, "strchr");
	my_memset = dlsym(handle, "memset");
	my_memcpy = dlsym(handle, "memcpy");
	my_strcmp = dlsym(handle, "strcmp");
	my_rindex = dlsym(handle, "rindex");
	my_strstr = dlsym(handle, "strstr");
	assert(!dlerror());
}

void fini(void)
{
	dlclose(handle);
	free(str);
}