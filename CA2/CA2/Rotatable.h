//
//	2D Robot Arm
//	CA2 Graphics
//
//

#ifndef _D_Scene_Rotatable_h
#define _D_Scene_Rotatable_h

#include <SFML/Graphics.hpp>

namespace Interaction
{
    class Rotatable
    {
    public:
        sf::Keyboard::Key LEFT = sf::Keyboard::Left;
        sf::Keyboard::Key RIGHT = sf::Keyboard::Right;
        sf::Keyboard::Key UP = sf::Keyboard::Up;
        sf::Keyboard::Key DOWN = sf::Keyboard::Down;
        
        virtual void turnRightLeft(int dir) = 0;
        virtual void turnUpDown(int dir) = 0;
        
        void updateRotateEvent()
        {
            
            if (sf::Keyboard::isKeyPressed(LEFT))
                turnRightLeft(-1);
            if (sf::Keyboard::isKeyPressed(RIGHT))
                turnRightLeft(1);
            
            if (sf::Keyboard::isKeyPressed(UP))
                turnUpDown(1);
            if (sf::Keyboard::isKeyPressed(DOWN))
                turnUpDown(-1);
        }
        
    };
}

#endif
