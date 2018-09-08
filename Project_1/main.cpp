#include <iostream>

using namespace std;

int main()
{
	//begin
	{
		cout << "a and b are integers" << endl;
		int a = 7;
		int b = 3;
		cout << "a is:		" << a << endl;
		cout << "b is:		" << b << endl
			 << endl;
		//1st space
		cout << "a + b:		" << a + b << endl;
		cout << "a - b:		" << a - b << endl;
		cout << "a * b:		" << a * b << endl;
		cout << "a / b:		" << a / b << endl;
		cout << "a % b:		" << a % b << endl
			 << endl;
		//3rd space
		cout << "-a is:		" << -a << endl;
		cout << "-b is:		" << -b << endl
			 << endl;
		//4th space
		cout << "a == b is:	";
		if (a == b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "a < b is:	";
		if (a < b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "a <= b is:	";
		if (a <= b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "a > b is:	";
		if (a > b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "a >= b is:	";
		if (a >= b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "a != b is:	";
		if (a != b)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << endl;
		//5th space
		cout << "f and g are floats" << endl;
		float f = 7;
		float g = 3;
		cout << "f is:		" << f << endl;
		cout << "g is:		" << g << endl
			 << endl;
		cout << "f + g:		" << f + g << endl;
		cout << "f - g:		" << f - g << endl;
		cout << "f * g:		" << f * g << endl;
		cout << "f / g:		" << f / g << endl
			 << endl;
		cout << "-f is:		" << -f << endl;
		cout << "-g is:		" << -g << endl
			 << endl;
		cout << "f == g is:	";
		if (f == g)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "f < g is: ";
		if (f < g)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "f <= g is: ";
		if (f <= g)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "f > g is: ";
		if (f > g)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "f >= g is: ";
		if (f >= g)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "f != g is: ";
		if (f != g)
			cout << 1;
		else
			cout << 0;
		cout << endl
			 << endl;
		//6th space
		cout << "x and y are bools" << endl;
		bool x = 0;
		bool y = 1;
		cout << "x is:		" << x << endl;
		cout << "y is:		" << y << endl
			 << endl;
		//7th space
		cout << "x + y:		" << x + y << endl;
		cout << "x - y:		" << x - y << endl;
		cout << "x * y:		" << x * y << endl;
		cout << "x / y:		" << x / y << endl;
		cout << "x % y:		" << x % y << endl
			 << endl;
		cout << "-x is:		" << -x << endl;
		cout << "!x is:		" << !x << endl;
		cout << "-y is:		" << -y << endl;
		cout << "!y is:		" << !y << endl
			 << endl;
		cout << "x == y is: ";
		if (x == y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "x < y is: ";
		if (x < y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "x <= y is: ";
		if (x <= y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "x > y is: ";
		if (x > y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "x >= y is: ";
		if (x >= y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		cout << "x != y is: ";
		if (x != y)
			cout << 1;
		else
			cout << 0;
		cout << endl;
		//Booyah I'm done
	}
	cout << "Hit enter to exit: ";
	cin.get();
	cin.get();
	return 0;
}