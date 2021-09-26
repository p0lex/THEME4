#include <iostream>
using namespace std;

int main()
{
	int a, b, s, p;
	cin >> a >> b; //Ввод длин сторон прямоугольника
	s = a * b; 
	p = (a + b) * 2;
	cout << s << "\n" << p; //Вывод площади и периметра
}