#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	float a = 34, b = 23, s, c, p, r;
	s = a * a + b * b;
	p = a * a * b * b;
	r = (abs)(a * a - b * b);
	c = a * a / b / b;
	cout << s << "\n" << p << "\n" << r << "\n" << c;

}