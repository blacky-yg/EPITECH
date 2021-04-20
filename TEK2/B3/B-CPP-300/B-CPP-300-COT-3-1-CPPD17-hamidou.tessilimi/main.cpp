/*
** EPITECH PROJECT, 2021
** day17
** File description:
** main
*/

#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <stack>

// #include "find.hpp"
// #include "Cesar.hpp"
// #include "OneTime.hpp"
// #include "Encryption.hpp"
#include "Container.hpp"

// EX 01
// static bool isGreaterThan(int a, int b)
// {
//     return a > b;
// }

// static void showMe(int i)
// {
//     std::cout << std::setw(4) << i << ", ";
// }

// static void mult2(int& i)
// {
//     i *= 2;
// }

// // static void encryptString ( IEncryptionMethod & encryptionMethod ,
// //             std :: string const & toEncrypt )
// // {
// //     size_t len = toEncrypt . size () ;
// //     encryptionMethod . reset () ;
// //     for ( size_t i = 0; i < len ; ++ i )
// //     {
// //     encryptionMethod . encryptChar ( toEncrypt [ i ]) ;
// //     }
// //     std :: cout << std :: endl ;
// // }

// // static void decryptString ( IEncryptionMethod & encryptionMethod ,
// //         std::string const &toDecrypt )
// // {
// //     size_t len = toDecrypt . size () ;
// //     encryptionMethod . reset () ;
// //     for ( size_t i = 0; i < len ; ++ i )
// //     {
// //         encryptionMethod . decryptChar ( toDecrypt [ i ]) ;
// //     }
// //     std :: cout << std :: endl ;
// // }

int main ()
{
    // EX00
    // std::list<int>	l1;
    // l1.push_back(5);
    // l1.push_back(42);
    // l1.push_back(5);
    // l1.push_back(34);
    // l1.push_back(12);

    // std::cout << *do_find(l1, 42) << std::endl;
    // std::cout << *do_find(l1, 5) << std::endl;

    // std::list<int>::iterator notFoundListIterator = do_find(l1, 3);
    // std::cout << "End iterator if not found: " << std::boolalpha << (notFoundListIterator == l1.end()) << std::endl;

    // std::vector<int>	s2;
    // s2.push_back(45);
    // s2.push_back(46);
    // s2.push_back(42);
    // s2.push_back(46);

    // std::vector<int>::iterator notFoundVectorIterator = do_find(s2, 3);
    // std::cout << *do_find(s2, 42) << std::endl;
    // std::cout << *do_find(s2, 46) << std::endl;
    // std::cout << "End iterator if not found: " << std::boolalpha << (notFoundVectorIterator == s2.end()) << std::endl;

    // EX01
    // int tab[] = { 4, 9, 1, 1, 99, 8, 42, 42, 42, -1, 3 };
    // int tab2[] = { 99, 1, -42, 21, 12, 21, 99, -7, 42, 42};

    // std::vector<int> v1(tab, tab + sizeof(tab) / sizeof(*tab));
    // std::vector<int> v2(tab2, tab2 + sizeof(tab2) / sizeof(*tab2));
    // std::vector<int>::iterator it;
    // std::vector<int>::iterator newEnd;

    // std::cout << "============ Step 01 ==========" << std::endl;
    // vPrint(v1, &showMe);
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 02 ==========" << std::endl;
    // std::cout << vHowMany(v1, 42) << std::endl;
    // std::cout << vHowMany(v2, 421) << std::endl;

    // std::cout << "============ Step 03 ==========" << std::endl;
    // std::cout << std::boolalpha << vIsSimilar(v1, tab) << std::endl;
    // std::cout << std::boolalpha << vIsSimilar(v1, tab2) << std::endl;
    // std::cout << std::boolalpha << vIsSimilar(v2, tab) << std::endl;
    // std::cout << std::boolalpha << vIsSimilar(v2, tab2) << std::endl;

    // std::cout << "============ Step 04 ==========" << std::endl;
    // vPrint(v1, &showMe);
    // vAssign(v1.begin() + 3, v1.begin() + 5, -421);
    // vPrint(v1, &showMe);

    // std::cout << "============ Step 05 ==========" << std::endl;
    // vPrint(v1, &showMe);
    // vApply(v1.begin() + 1, v1.begin() + 10, &mult2);
    // vPrint(v1, &showMe);

    // std::cout << "============ Step 06 ==========" << std::endl;
    // vPrint(v1, &showMe);
    // it = vGiveMeTheFirst(v1, 84);
    // if (it != v1.end())
    //         v1.erase(it, it + 3);
    // vPrint(v1, &showMe);

    // std::cout << "============ Step 07 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // vFlip(v2);
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 08 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // std::vector<int>::iterator newEnd = vRemoveDuplicate(v2);
    // v2.resize(newEnd - v2.begin());
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 09 ==========" << std::endl;
    // vPrint(v1, &showMe);
    // vToAscOrder(v1);
    // vPrint(v1, &showMe);

    // std::cout << "============ Step 10 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // vToSpecificOrder(v2, &isGreaterThan);
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 11 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // vShift(v2, 3);
    // vPrint(v2, &showMe);
    // vShift(v2, 7);
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 12 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // vFindAndModify(v2, 21, 777);
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 13 ==========" << std::endl;
    // vPrint(v2, &showMe);
    // newEnd = vFindAndKill(v2, 777);
    // v2.resize(newEnd - v2.begin());
    // vPrint(v2, &showMe);

    // std::cout << "============ Step 14 ==========" << std::endl;
    // std::vector<int> v3(v1.size() + v2.size());

    // vToAscOrder(v1);
    // vToAscOrder(v2);
    // vPrint(v1, &showMe);
    // vPrint(v2, &showMe);
    // vPrint(v3, &showMe);
    // vFusionOrderedLists(v1, v2, v3);
    // vPrint(v3, &showMe);

    // EX02 && EX03

//   Cesar c;

    //   encryptString(c, "Je clair Luc, ne pas ? Ze woudrai un kekos !");
    //   decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
    //   encryptString(c, "KIKOO");
    //   encryptString(c, "LULZ XD");
    //   decryptString(c, "Ziqivun ea Ndcsg.Wji !");
    //   encryptString(c, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
    //   decryptString(c, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    //   c.reset();
    //   c.encryptChar('a');
    //   c.encryptChar('a');
    //   c.encryptChar('a');
    //   std::cout << std::endl;
    //   c.reset();
    //   c.decryptChar('d');
    //   c.decryptChar('e');
    //   c.decryptChar('f');
    //   std::cout << std::endl;

    //   OneTime o("blacky");
    //   OneTime t("TheCakeIsALie");

    //   encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
    //   encryptString(o, "De la musique et du bruit !");
    //   encryptString(t, "Kion li faras? Li studas kaj programas!");

    //   decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg !");
    //   decryptString(o, "Gi pa dunmhmp wu xg tuylx !");
    //   decryptString(t, "Dpsp vm xaciw? Pk cxcvad otq rrykzsmla!");

    //   std::cout << std::endl;

    //   Encryption::encryptString(c, "Je clair Luc, ne pas ? Ze woudrai un kekos !");
    //   Encryption::decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
    //   Encryption::encryptString(c, "KIKOO");
    //   Encryption::encryptString(c, "LULZ XD");
    //   Encryption::decryptString(c, "Ziqivun ea Ndcsg.Wji !");
    //   Encryption::encryptString(c, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz");
    //   Encryption::decryptString(c, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    //   c.reset();
    //   c.encryptChar('a');
    //   c.encryptChar('a');
    //   c.encryptChar('a');
    //   std::cout << std::endl;
    //   c.reset();
    //   c.decryptChar('d');
    //   c.decryptChar('e');
    //   c.decryptChar('f');
    //   std::cout << std::endl;

    //   Encryption::encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
    //   Encryption::encryptString(o, "Zanoti");
    //   Encryption::encryptString(t, "Kion li faras? Li studas kaj programas!");

    //   Encryption::decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg !");
    //   Encryption::decryptString(o, "Gi pa dunmhmp wu xg tuylx !");
    //   Encryption::decryptString(t, "Dpsp vm xaciw? Pk cxcvad otq rrykzsmla!");

    // EX04

      contain<char, std::list> test;
      test.push('t');
      test.aff();
      test.add();
      test.aff();
    //   contain <int, std::vector> test2;
    //   test2.push(1);
    //   test2.aff();
    //   test2.add();
    //   test2.aff();
      // contain <int, std::stack> test3;
      // test3.push(1);
      // test3.aff();
      // test3.add();
      // test3.aff();

    return (0);
}