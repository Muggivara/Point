#include "Point.h"
void Point::SetX(int x)
{
	X = x;
}
void Point::SetY(int y)
{
	Y = y;
}
int Point::GetX() const
{
	return X;
}
int Point::GetY() const
{
	return Y;
}
Point::Point(int x, int y)
{
	SetX(x);
	SetY(y);
}
void Point::Show()
{
	std::cout << "x = " << GetX() << "\n";
	std::cout << "y = " << GetY() << "\n";
}

void Point::LeftShift(int a)
{
	std::cout << "Было: x = " << X << " y = " << Y << "\n";
	X -= a;
	std::cout << "Стало: x = " << X << " y = " << Y << "\n"; 
}
void Point::RightShift(int a)
{
	std::cout << "Было: x = " << X <<" y = " << Y << "\n";
	X += a;
	std::cout << "Стало: x = " << X << " y = " << Y << "\n";
}
void Point::UpShift(int a)
{
	std::cout << "Было: x = " << X << " y = " << Y << "\n";
	Y += a;
	std::cout << "Стало: x = " << X << " y = " << Y << "\n";
}
void Point::DownShift(int a)
{
	std::cout << "Было: x = " << X << " y = " << Y << "\n";
	Y -= a;
	std::cout << "Стало: x = " << X << " y = " << Y << "\n";	
}
