#include "KoalaBot.hpp"

int main()
{
    Arms arms;
    Legs legs;
    Head head;

    Arms arm("Arm");
    Legs leg("Leg");
    Head head1("Head");

    KoalaBot koala;
    KoalaBot koko("Koko");

    std::cout << "First parts" << std::endl;
    arms.informations();
    legs.informations();
    head.informations();
    std::cout << "Second parts" << std::endl;
    arm.informations();
    leg.informations();
    head1.informations();

    std::cout << "koko" << std::endl;
    koko.informations();
    std::cout << "Bob-01" << std::endl;
    koala.informations();

    koala.setParts(arm);
    koala.setParts(leg);
    koala.setParts(head1);
    std::cout << "Bob-01 update" << std::endl;
    koala.informations();

    std::cout << "Bob-01 swap with First Parts" << std::endl;
    koala.swapParts(arms);
    koala.swapParts(legs);
    koala.swapParts(head);
    koala.informations();

    std::cout << "First parts swap and Bob-01" << std::endl;
    arms.informations();
    legs.informations();
    head.informations();
}
