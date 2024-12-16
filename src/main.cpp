#include <SFML/Graphics.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;

    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application", sf::Style::Default, settings);
    window.setFramerateLimit(60);

    sf::CircleShape shape;
    shape.setRadius(100.f);
    shape.setPosition(150.f, 150.f);
    shape.setFillColor(sf::Color::Cyan);
    shape.setPointCount(1000);
    shape.setOutlineColor(sf::Color::White);
    shape.setOutlineThickness(2.f);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
