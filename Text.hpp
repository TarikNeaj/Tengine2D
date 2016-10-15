#pragma once
#ifndef TEXT_HPP
#define TEXT_HPP

// SFML
#include <SFML\Graphics\Text.hpp>

// Engine Classes
#include "Vector2.hpp"
#include "Font.hpp"
#include "Color.hpp"

namespace t2d {
	enum  TextStyle {
		Regular = 0,
		Bold = 1 << 0,
		Italic = 1 << 1,
		Underlined = 1 << 2
	};
}
class Text
{
public:

	// Default Constructor sets position of text to (0, 0)
	Text();

	// Different text styles.
	

	// Rotates the text.
	void rotate(float angle);
	// Scales the text.
	void scale(float width, float height);
	// Translates/moves the sprite & Updates position of the text.
	void translate(float x, float y);

	// Settings & Getters

	// Applies texture on sprite.
	void setFont(t2d::Font& font);

	// applies the string to the text.
	void setString(const std::string string);

	// Sets character size.
	void setCharacterSize(unsigned int size);

	// Sets text style
	void setStyle(t2d::TextStyle style);

	// Sets text color
	void setColor(const t2d::Color color);

	// Gets the font that belongs to this text. */Havent figured out how to do it yet */
	t2d::Font& getFont();

	// Sets the position of the text.
	void setPosition(float x, float y);

	// Gets the position of the sprite.
	t2d::Vector2f& getPosition();

	// The actual text.
	sf::Text _text;
private:

	// Position x and y of sprite.
	t2d::Vector2f _position;
	// Position in x.
	float _x;
	// Position in y.
	float _y;
	// Width of sprite.
	float _width;
	// Height of sprite.
	float _height;
	
};

#endif