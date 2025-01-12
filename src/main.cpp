#include <SFML/Graphics.hpp>
#include <iostream>
#include <optional>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "test");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}

