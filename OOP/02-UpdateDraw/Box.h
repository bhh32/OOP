#pragma once


class Box
{
public:
	/*float startXSide1;
	float startYSide1;
	float endXSide1;
	float endYSide1;

	float startXSide2;
	float startYSide2;
	float endXSide2;
	float endYSide2;

	float startXSide3;
	float startYSide3;
	float endXSide3;
	float endYSide3;

	float startXSide4;
	float startYSide4;
	float endXSide4;
	float endYSide4;*/

	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	float x;
	float y;

	char upKey, downKey, rightKey, leftKey;

	void Draw();
	void Update();
};