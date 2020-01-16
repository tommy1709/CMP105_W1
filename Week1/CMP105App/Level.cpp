#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect1.setSize(sf::Vector2f(50, 50));
	rect1.setPosition(125, 125);
	rect1.setFillColor(sf::Color::Green);

	rect2.setSize(sf::Vector2f(25, 25));
	rect2.setPosition(137, 137);
	rect2.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(600, 337);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(9.f);

	//render text 
	if (!font.loadFromFile("font/arial.ttf"));
	{
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(25);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setPosition(100, 300);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(rect1);
	window->draw(rect2);
	window->draw(circle);
	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}