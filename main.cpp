#include <SFML/Graphics.hpp>
#include <iostream>
#include "astre.hpp"
// #include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "ProjectX");
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        std::cout << shape.getRadius() << std::endl;
        shape.setRadius(shape.getRadius()+0.001);
        window.clear();
        window.draw(shape);
        window.display();

    }

    return 0;
}