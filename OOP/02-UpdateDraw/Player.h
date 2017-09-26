#pragma once


class Player
{
public:
	float x; // x-position
	float y; // y-position

	char upKey, downKey, leftKey, rightKey;

	void Update();
	void Draw();

	void PlayerControls();
};