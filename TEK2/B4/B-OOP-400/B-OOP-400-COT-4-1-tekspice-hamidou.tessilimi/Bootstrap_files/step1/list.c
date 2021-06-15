/******************************************************************************/
/*                                                                            */
/*                     list.c for the list project                            */
/*                     Made by David GIRON et Maxime MONTINET                 */
/*                                                                            */
/******************************************************************************/



#include <stdlib.h> /* malloc, free                                           */

#include <string.h>
#include <stdio.h>

#include "list.h"

void my_put_in_list(struct list ** begin, char const * nom, int age, char const * catchphrase)
{
	struct list * new = (struct list *) malloc(1 * sizeof(*new));
	struct list * cur = NULL;
	new->nom = nom;
	new->age = age;
	new->catchphrase = catchphrase;
	new->next = NULL;

	if (*begin == NULL)
	{
		*begin = new;
	}
	else
	{
		for (cur = *begin; cur != NULL && cur->next != NULL; cur = cur->next)
			;
		cur->next = new;
	}
}

int my_is_in_list(struct list * begin, char const * nom)
{
	while (begin != NULL)
	{
		if (!strcmp(nom, begin->nom))
			return 1;
		begin = begin->next;
	}
	return 0;
}

void my_delete_list(struct list ** begin)
{
	struct list * cur = NULL;
	struct list * sav = NULL;

	cur = *begin;
	while (cur != NULL)
	{
		sav = cur;
		cur = cur->next;
		free(sav);
	}
	*begin = NULL;
}
