/*
Animations.hpp
Auteur : Jlppc
Fichier sous license GPL-3.0
http://opmon-game.ga
Contient la définition du namespace Animations.
*/
#ifndef ANIMATIONS_HPP
#define ANIMATIONS_HPP

#include <iostream>
#include "../start/main.hpp"
#include <SFML/Graphics.hpp>

/*Define permettant de vérifier si les animations ont été initialisées*/
#define ANIM_CHECK_INIT \
    if(!init){\
            handleError("Erreur : Animations non initialisées", true);\
        }

/**
Le namespace Animations contient toutes les animations du jeu. Ces animations doivent etre initialisées avec initAnims() puis détruites avec deleteAnims()
*/
namespace Animations {

    /**
    Initialise les animations
    */
    void initAnims();
    /**
    Libère les ressources associées aux animations
    */
    void deleteAnims();

    int animFenOpen(sf::RenderTexture &window, sf::Sprite const &fond);
    int animFenClose(sf::RenderTexture &window, sf::Sprite const &fond);

}


#endif // ANIMATIONS_HPP
