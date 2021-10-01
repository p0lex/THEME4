#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	float a = 34, b = -43, aa, ab, s, r, p, c;
	aa = abs(a);
	ab = abs(b);
	s = aa + ab;
	r = (abs)(aa - ab);
	p = aa * ab;
	c = aa / ab;
	cout << s << '\n' << r << '\n' << p << '\n' << c;



}