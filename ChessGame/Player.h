#pragma once

#include <string>

#include "enums.h"

class Player
{
private:
	Color _color;
	std::string _name;

public:
	Player(Color color, std::string name);

	Color GetColor() const { return _color; }
	std::string GetName() const { return _name; }

};
