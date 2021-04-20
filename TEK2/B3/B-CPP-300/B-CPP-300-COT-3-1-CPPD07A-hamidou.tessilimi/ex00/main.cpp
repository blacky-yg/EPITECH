#include "Skat.hpp"

int main()
{
    Skat s;
    std::cout << "Soldier " << s.name() << std::endl;
    s.status();
    s.useStimPaks();
    return (0);
}