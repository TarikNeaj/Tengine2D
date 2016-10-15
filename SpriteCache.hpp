#pragma once
#ifndef SPRITECACHE_HPP
#define SPRITECACHE_HPP

// Engine Classes.
#include "CreateSprite.hpp"

// C++ Standard Library
#include <string>
#include <map>
#include <memory>


// A static class that uses the class CreateSprite to create a sprite, which it then saves.
class SpriteCache
{

public:

	// Uses CreateSprite to create a sprite, and if done successfully it saves it in a std::map.
	static void setupSprite(const std::string spriteName, const std::string path);
	// Uses CreateSprite to create a cropped sprite, and if done successfully it saves it in a std::map.
	static void setupSpriteCI(const std::string spriteName, const std::string path, sf::IntRect cropped);
	// Returns the sprite that is bound to the user-given name.
	static Sprite& getSprite(const std::string spriteName);

private:

	// Unused Default Constructor.
	SpriteCache() { }

};

#endif
