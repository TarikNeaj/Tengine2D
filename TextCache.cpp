#include "TextCache.hpp"

// C++ Standard Library
#include <iostream>

// Uses CreateText to create a text, and if done successfully it saves it in a std::map.
void TextCache::setupText(const std::string textName, const std::string fontPath)
{
	// Saves the created text.
	Text text = m_CreateText.createText(textName, fontPath);
	// / Iterates through all texts to check if the user-given name for the text is already taken.
	auto textIterator = m_Text.find(textName);

	// If the user-given name for the text does not previously exist. We Create it
	if (textIterator == m_Text.end())
	{
		// Successfully binded the user-given name to the text.
		m_Text.insert(make_pair(textName, text));
	}
	else
	{	// User-given name for the text already exists.
		std::cout << "Error: Text With That Name Already Exists!" << std::endl;
	}
}

// Returns the text that is bound to the user-given name.
Text& TextCache::getText(const std::string textName)
{
	// Returns the text bound to the user-given name.
	return m_Text[textName];
}

