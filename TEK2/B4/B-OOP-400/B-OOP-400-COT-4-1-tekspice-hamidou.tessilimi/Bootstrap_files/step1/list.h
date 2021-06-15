/******************************************************************************/
/*                                                                            */
/*                     list.h for the list project                            */
/*                     Made by David GIRON etMaxime MONTINET                  */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * Forward-chained list structure and basic manipulation functions
 */

#ifndef __LIST_H__
# define __LIST_H__

struct list
{
    char const * nom;
    int age;
    char const * catchphrase;
    struct list * next;
};

/**
 * Adds a new element to a list. If the list does not exist, creates it
 * and sets the passed pointer to the beginning of the list.
 *
 * @param begin Pointer to pointer to the beginning of the list
 * (Pointer to NULL if the list is empty)
 *
 *  @param nom Name attribute of the koala to create
 *  @param age Age attribute of the koala to create
 *  @param catchphrase A catch phrase for the koala
 */
void    my_put_in_list(struct list ** begin, char const * nom, int age, char const * catchphrase);

/**
 * Checks whether a koala is in the passed list. Returns 1 if found, else 0
 *
 * @param begin Pointer to the beginning of the list.
 * @param nom String representing the name to search for
 */
int    my_is_in_list(struct list * begin, char const * nom);

/**
 * Completely deletes each member of the passed list
 *
 * @param begin Pointer to the beginning of the list
 */
void    my_delete_list(struct list ** begin);

#endif /* !__LIST_H__ */
