#include "Bat.h"

//This the constructor and it is called when we create an object
Bat::Bat(float startX, float startY)
{
	m_Postition.x = startX;
	m_Postition.y = startY;

	m_Shape.setSize(sf::Vector2f(50, 5));
	m_Shape.setPosition(m_Postition);
}

FloatRect Bat::getPosition()
{
	return m_Shape.getGlobalBounds();
}

RectangleShape Bat::getShape()
{
	return m_Shape;
}

void Bat::moveLeft()
{
	m_MovingLeft = true;
}

void Bat::moveRight()
{
	m_MovingRight = true;
}

void Bat::StopLeft()
{
	m_MovingLeft = false;
}

void Bat::stopRight()
{
	m_MovingRight = false;
}

void Bat::update(Time dt)
{
	if (m_MovingLeft)
	{
		m_Postition.x -= m_Speed * dt.asSeconds();
	}

	if (m_MovingRight)
	{
		m_Postition.x += m_Speed * dt.asSeconds();
	}

	m_Shape.setPosition(m_Postition);
}