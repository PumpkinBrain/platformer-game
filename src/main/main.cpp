#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow{ { 640u, 480u }, "CMake SFML Project" };
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::Blue);
        window.display();
    }
}
