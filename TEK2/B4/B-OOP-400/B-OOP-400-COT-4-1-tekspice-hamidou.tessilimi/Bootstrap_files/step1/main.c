/******************************************************************************/
/*                                                                            */
/*                     main.c for the list project                            */
/*                     Made by David GIRON et Maxime MONTINET                 */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> /* printf */
#include <stdlib.h> /* NULL */
#include <string.h> /* strlen, strdup*/

#include "list.h"

int main()
{
	struct list * list = NULL;
    struct list * cur = NULL;


	my_put_in_list(&list, "zaz", 42, "nah, too lazy to do that");
	my_put_in_list(&list, "jack", 84, "that's a RUMOR!");
	my_put_in_list(&list, "thor", 168, "Proceed...");

    for (cur = list; cur != NULL; cur = cur->next)
    {
        printf("%s is %d years old and usually says \"%s\"\n", cur->nom, cur->age, cur->catchphrase);
    }
    if (my_is_in_list(list, "zaz"))
    {
        printf("zaz is in the list (OK)\n");
    }
    else
    {
        printf("zaz isn't in the list (Error)\n");
    }

    my_delete_list(&list);

	return 0;
}

