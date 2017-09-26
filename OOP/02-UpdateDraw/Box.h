#pragma once


class Box
{
public:
	
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	char upKey, downKey, rightKey, leftKey;

	void Draw();
	void Update();
};