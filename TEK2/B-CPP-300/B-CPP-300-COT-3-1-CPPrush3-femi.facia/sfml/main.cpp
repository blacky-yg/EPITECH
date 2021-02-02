#include "my.hpp"

int main()
{
    control ctrl;
    
    while (ctrl.win().isOpen()) {
        while (ctrl.win().pollEvent(ctrl.event())) {
            if (ctrl.event().type == sf::Event::Closed)
                ctrl.win().close();
        }
        ctrl.win().clear(sf::Color::Black);
        for (int i = 0; i < 8; i++) {
            manageScreen(ctrl, ctrl.con()[i]);
        }
        ctrl.win().display();
    }
    return(0);
}