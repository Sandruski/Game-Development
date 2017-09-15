#include <iostream>
#include "Vector3.h"
using namespace std;

int main() {
	Vec3<float> a(0, 2.9, -3), b(2.1, 5, -9.5);
	Vec3<float> d(2.1, 5, -9.5);

	cout << "a(" << a.get_x() << ", " << a.get_y() << ", " << a.get_z() << ")" << endl;
	a.set_x(4);
	cout << "Setting a.x to 4..." << endl;
	cout << "a.x = " << a.get_x() << endl;

	Vec3<float> c = a + b;
	cout << "c(" << c.get_x() << ", " << c.get_y() << ", " << c.get_z() << ")" << endl;

	if (a == c)
		cout << "a is equal to c" << endl;
	else
		cout << "a is not equal to c" << endl;

	if (d == b)
		cout << "d is equal to b" << endl;
	else
		cout << "d is not equal to b" << endl;

	cout << endl;
	system("pause");
	return 0;
}

