/******************************************************************************/
/*                                                                            */
/*                        main.c for the list project                         */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <iostream> /* cout, endl */
#include <cstring> /* strlen */

#include "list.hh"
#include "item.hh"

/*
 * Example structure for the representation of a koala
 */
struct Koala
{
    std::string nom;
    int age;
    std::string catchphrase;

    Koala(std::string n, int a, std::string c) : nom(n), age(a), catchphrase(c) {}
};

/*
 * Helper function displaying the contents of a chained type element
 */
static void dump_string(void * content, int len)
{
    std::cout << "  Content [" << static_cast<char*>(content) << "], len [" << len << "]" << std::endl;
}

/*
 * Helper function displaying a Koala's attributes
 */
static void dump_koala(void * content, int)
{
    Koala * bob = (Koala *)content;

    std::cout << "  " << bob->nom << " is " << bob->age << " years old and usually says \"" << bob->catchphrase << "\"" << std::endl;
}

int main()
{
    char test_contents[][4] = {"ga", "bu", "zo", "meu"};
    char needle[] = "meu";

    /*
	 * We create a list and fill it with a few test character
	 * strings.
	 */
    List* list = new List();
    for (int i = 0; i < 4; ++i)
    {
        list->add_front(test_contents[i], strlen(test_contents[i]));
    }
    std::cout << "Elements in the list:" << std::endl;
    list->iter(&dump_string);

    if (list->mem(needle, 3))
        std::cout << "[meu] is in the list (OK)" << std::endl;
    else
    {
        std::cout << "[meu] is not in the list, error!" << std::endl;
        return 1;
    }

    delete list;

    /*
	 * We create another list and fill it with Koalas
	 */
    list = new List();
    list->add_back(new Koala("zaz", 42, "nah, too lazy to do that."), sizeof(Koala));
    list->add_back(new Koala("jack", 84, "That's a RUMOR!"), sizeof(Koala));
    list->add_back(new Koala("thor", 168, "Proceed..."), sizeof(Koala));
    std::cout << "Koalas in the list:" << std::endl;
    list->iter(&dump_koala);

    delete list;

    return 0;
}

