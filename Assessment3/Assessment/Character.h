#pragma once


class Character
{
public:

	int hp;
	float x, y;
	float speed;
	float rotation;

	char upKey, downKey, rightKey, leftKey;

	virtual void Draw();
	virtual void Update();
};