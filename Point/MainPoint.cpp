#include "Point.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Point A(8, 9);
	A.Show();

	Point B(5, 7);
	B.LeftShift(1);

	Point C(3, 9);
	C.RightShift(2);

	Point D(1, -7);
	D.UpShift(3);

	Point E(9, 0);
	E.DownShift(4);
}