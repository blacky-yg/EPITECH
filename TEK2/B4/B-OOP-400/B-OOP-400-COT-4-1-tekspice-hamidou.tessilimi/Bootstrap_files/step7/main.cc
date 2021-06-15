/******************************************************************************/
/*                                                                            */
/*                   main.c for the list project                              */
/*                   Made by David GIRON & Maxime MONTINET                    */
/*                                                                            */
/******************************************************************************/

#include <iostream> /* cout, endl */
#include <iomanip> /* boolalpha */

#include <list>
#include <algorithm>

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
            std::cout << login << "it doesn't woooooooork!" << std::endl;
        }

        bool operator==(Etudiant const & other)
        {
            return (this->login == other.login);
        }
};

/*
 * Fonction helper calling Identify
 */
template<typename T>
void dumpit(T& ga) { ga.identify(); }

int main()
{
    /*
     * Let's create a koala and a student list
     */
    std::list<Koala> list_koala;
    list_koala.push_back(Koala("zaz", 42, "Too lazy. Twice. On a pony. Shut up."));
    list_koala.push_back(Koala("jack", 84, "I can dress up as a gas pump!"));
    list_koala.push_back(Koala("thor", 168, "your music is crap, put some black metal on!"));

    std::list<Etudiant> list_etud;
    list_etud.push_back(Etudiant("asshol_e"));
    list_etud.push_back(Etudiant("moro_n"));

    /*
     * Let's apply some functions to our list
     */
    std::for_each(list_koala.begin(), list_koala.end(), &dumpit<Koala>);
    std::for_each(list_etud.begin(), list_etud.end(), &dumpit<Etudiant>);

    /*
     * Let's test the presence of a few elements
     */
    std::list<Koala>::const_iterator it1 = std::find(list_koala.begin(), list_koala.end(), Koala("zaz", 42, "Too lazy. Twice. On a pony. Shut up."));
    std::list<Etudiant>::const_iterator it2 = std::find(list_etud.begin(), list_etud.end(), Etudiant("asshol_e"));
    std::cout << "Presence of the Koala zaz  in list_koala : " << std::boolalpha << (it1 != list_koala.end()) << std::endl;
    std::cout << "Presence of the student asshol_e in list_etud : " << std::boolalpha << (it2 != list_etud.end()) << std::endl;

    return 0;
}

