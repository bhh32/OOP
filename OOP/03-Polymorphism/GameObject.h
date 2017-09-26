#pragma once

#include <string>


class GameObject
{
public:
	std::string name;

	bool enabled;

	virtual void Update();
	virtual void Draw();
};