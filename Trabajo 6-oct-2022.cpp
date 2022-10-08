//ANGEL EMANUEL MENDOZA REYES 
//22110083
//GRUPO 2 O
//LUIS MANUEL MORALES MEDINA
//PROGRAMACION ORIENTADA A OBJETOS
//CETI COLOMOS
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Yellow);
    sf::CircleShape circule_1(50.f);
    circule_1.setPosition(100, 100);
    circule_1.setFillColor(sf::Color::Black);
    sf::CircleShape circule_4(30.f);
    circule_4.setPosition(110, 95);
    circule_4.setFillColor(sf::Color::White);

    sf::CircleShape circule_2(50.f);
    circule_2.setFillColor(sf::Color::Black);
    circule_2.setPosition(200,100);
    sf::CircleShape circule_5(30.f);
    circule_5.setFillColor(sf::Color::White);
    circule_5.setPosition(210, 95);

    sf::ConvexShape triangle;
    triangle.setFillColor(sf::Color::Magenta);
    triangle.setPointCount(3);
    triangle.setPoint(0, sf::Vector2f(200, 200));
    triangle.setPoint(1, sf::Vector2f(250, 300));
    triangle.setPoint(2, sf::Vector2f(100, 350));

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
        window.draw(circule_1);
        window.draw(circule_4);
        window.draw(circule_2);
        window.draw(circule_5);
        window.draw(triangle);   
        window.display();
    }
    return 0;
}