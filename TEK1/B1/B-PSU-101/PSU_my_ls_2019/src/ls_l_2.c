/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** ls_l_2
*/

#include "../include/my_ls.h"

void ls_l_2(struct dirent *folder, struct stat info)
{
    struct passwd *pwd = getpwuid(info.st_uid);
    struct group *grp = getgrgid(info.st_gid);
    char *date = ctime(&info.st_ctime);

    date = correct_date(&date[4]);
    if (folder->d_name[0] != '.') {
        print_right(info.st_mode, info);
        my_printf("%i %s %s ", info.st_nlink, pwd->pw_name, grp->gr_name);
        my_printf("%d", info.st_size);
        write(1, "\t", 1);
        my_printf("%s ", date);
        my_printf("%s", folder->d_name);
        write(1, "\n", 1);
        free(date);
    }
}