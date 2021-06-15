/******************************************************************************/
/*                                                                            */
/*                        main.c for the list project                         */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <iostream> /* cout, endl */
#include <iomanip> /* boolalpha */
#include <cstring> /* strlen */

#include "list.hh"
#include "item.hh"

/*
 * Example structure representing a koala
 */
struct Koala : public Item
{
        std::string nom;
        int age;
        std::string catchphrase;

        Koala(std::string const & n, int a, std::string const & c) : nom(n), age(a), catchphrase(c) {}

        bool operator==(Item const & other) const
        {
            Koala const * tmp = dynamic_cast<Koala const *>(&other);
            if (tmp == 0)
                return false;
            return (tmp->nom == this->nom
                    && tmp->age == this->age
                    && tmp->catchphrase == this->catchphrase);
        }

        void identify() const
        {
            std::cout << "Koala " << nom << " aged " << age << " : " << catchphrase << std::endl;
        }
};

/*
 * Example structure representing a student
 */
struct Etudiant : public Item
{
        std::string login;

        Etudiant(std::string const & n) : login(n) {}

        bool operator==(Item const & other) const
        {
            Etudiant const * tmp = dynamic_cast<Etudiant const *>(&other);
            if (tmp == 0)
                return false;
            return (this->login == tmp->login);
        }

        void identify() const
        {
            std::cout << login << ":It doesn't wooooooooooooork!" << std::endl;
        }
};

/*
 * Helper function which calls Identify on an item
 */
static void dump_item(Item const & item)
{
    item.identify();
}

int main()
{
    /*
     * Let's create two lists: a koala one and a student one
     */
    List* list_koala = new List();
    list_koala->add_back(new Koala("zaz", 42, "Lazy. Twice. On a poney. Shut up."));
    list_koala->add_back(new Koala("jack", 84, "I can dress myself as a gas pump!"));
    list_koala->add_back(new Koala("thor", 168, "your music is crap, put some black metal on!"));

    List* list_etud = new List();
    list_etud->add_back(new Etudiant("asshol_e"));
    list_etud->add_back(new Etudiant("moro_n"));

    /*
     * Let's apply functions to our list
     */
    list_koala->iter(&dump_item);
    list_etud->iter(&dump_item);

    /*
     * Let's test the presence of a few elements
     */

    std::cout << "Presence of the Koala zaz  in list_koala : " << std::boolalpha << list_koala->mem(Koala("zaz", 42, "Lazy. Twice. On a poney. Shut up.")) << std::endl;
    std::cout << "Presence of the Koala zaz  in list_etud : " << std::boolalpha << list_etud->mem(Koala("zaz", 42, "Lazy. Twice. On a poney. Shut up.")) << std::endl;
    std::cout << "Presence of the student asshol_e in list_koala : " << std::boolalpha << list_koala->mem(Etudiant("asshol_e")) << std::endl;
    std::cout << "Presence of the student asshol_e in list_etud : " << std::boolalpha << list_etud->mem(Etudiant("asshol_e")) << std::endl;


    delete list_koala;
    delete list_etud;

    return 0;
}

