#pragma once


class Box
{
public:
	
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	float x, y; // Space ship image placement
	float speed;
	float rotation;

	char upKey, downKey, rightKey, leftKey;

	void Draw();
	void Update();
};