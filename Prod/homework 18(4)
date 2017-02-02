#include <iostream>
using namespace std;


int maxdig(int n)
{
	int max;
	if (n < 10)
		return n;

	else
		max = maxdig(n / 10);

	if (max>n % 10)
		return max;

	else
		return n % 10;
}

int main()
{
	cout <<maxdig(393753) << endl;
}

