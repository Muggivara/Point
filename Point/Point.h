#pragma once
#include <iostream>
class Point 
{
	
private:
	int X;
	int Y;
public:
	void SetX(int x);
	void SetY(int y);
	int GetX() const;
	int GetY() const;
	Point(int x, int y);
	void Show();
	void LeftShift(int a);
	void RightShift(int a);
	void UpShift(int a);
	void DownShift(int a);
};