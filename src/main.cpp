#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 200), "Hello window!");
	while (window.isOpen())
	{
		sf::Event event;
		if (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}
}
