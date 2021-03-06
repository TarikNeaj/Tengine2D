#include "Font.hpp"

namespace t2d {

	// Loads a font from a user-given path.
	bool Font::load(const std::string fontPath)
	{
		return m_Font.loadFromFile(fontPath);
	}
}
