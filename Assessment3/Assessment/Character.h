#pragma once


class Character
{
public:
	float x, y;
	float speed;
	float rotation;

	char upKey, downKey, rightKey, leftKey;

	virtual void Draw();
	virtual void Update();
};