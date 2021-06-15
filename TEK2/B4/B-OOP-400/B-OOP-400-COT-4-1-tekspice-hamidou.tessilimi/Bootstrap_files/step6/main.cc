/******************************************************************************/
/*                                                                            */
/*                        main.c for the list project                         */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <iostream> /* cout, endl */
#include <iomanip> /* boolalpha */

#include "list.hpp"

/*
 * Example structure representing a Koala
 */
struct Koala
{
        std::string nom;
        int age;
        std::string catchphrase;

        Koala(std::string const & n, int a, std::string const & c) : nom(n), age(a), catchphrase(c) {}

        void identify() const
        {
            std::cout << "Koala " << nom << " aged " << age << " : " << catchphrase << std::endl;
        }

        bool operator==(Koala const & other)
        {
            return (this->nom == other.nom
                    && this->age == other.age
                    && this->catchphrase == other.catchphrase);
        }
};

/*
 * Example structure representing a student
 */
struct Etudiant
{
        std::string login;

        Etudiant(std::string const & n) : login(n) {}

        void identify() const
        {
            std::cout << login << ": it doesn't wooooooork!" << std::endl;
        }

        bool operator==(Etudiant const & other)
        {
            return (this->login == other.login);
        }
};

/*
 * Helper function calling Identify
 */
template<typename T>
void dumpit(T& ga) { ga.identify(); }

int main()
{
    /*
     * Let's create a student list and a koala list
     */
    List<Koala>* list_koala = new List<Koala>();
    list_koala->push_back(Koala("zaz", 42, "Lazy. Twice. On a pony. Shut up."));
    list_koala->push_back(Koala("jack", 84, "I can dress as a gas pump!"));
    list_koala->push_back(Koala("thor", 168, "Your music is crap, put some black metal on!"));

    List<Etudiant>* list_etud = new List<Etudiant>();
    list_etud->push_back(Etudiant("asshol_e"));
    list_etud->push_back(Etudiant("moro_n"));

    /*
     * Let's apply functions to our list
     */
    list_koala->iter(&dumpit<Koala>);
    list_etud->iter(&dumpit<Etudiant>);

    /*
     * Let's test for the presence of a few elements
     */

    std::cout << "Presence of the Koala zaz  in list_koala : " << std::boolalpha << list_koala->mem(Koala("zaz", 42, "Lazy. Twice. On a poney. Shut up.")) << std::endl;
    std::cout << "Presence of the student asshol_e in list_etud : " << std::boolalpha << list_etud->mem(Etudiant("asshol_e")) << std::endl;


    delete list_koala;
    delete list_etud;

    return 0;
}

