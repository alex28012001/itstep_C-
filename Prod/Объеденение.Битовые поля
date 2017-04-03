/*
#include<iostream>
using namespace std;
struct bit{

	bool a1 : 1;
	bool a2 : 1;
	bool a3 : 1;
	bool a4 : 1;
	bool a5 : 1;
	bool a6 : 1;
	bool a7 : 1;
	bool a8 : 1;

};


union myunion{
	double data;
	bit b[sizeof(double)];
	unsigned char byte[sizeof(double)];
};


int main()
{
	myunion u;
	u.data = 123.123;
	for (int i = 7; i >= 0; i--)
	{
		cout << u.b[i].a1 << endl;

	}
	
	return 0;
}

*/



#include<iostream>
using namespace std;
struct bit{

	bool a1 : 1;
	bool a2 : 1;
	bool a3 : 1;
	bool a4 : 1;
	bool a5 : 1;
	bool a6 : 1;
	bool a7 : 1;
	bool a8 : 1;


};



union myunion
{

	unsigned int data;
	bit b[sizeof(int)];
	unsigned char byte[sizeof(int)];

};





int main()
{
	setlocale(0, "");
	myunion u;
	cout << "Input number: ";
	cin >> u.data;

	cout << "Number: " << u.data << endl;
	cout << "Байт: " << sizeof(u.data);

	cout << "\nВведите байт который вы хотите посмотреть: ";
	cin >> u.byte;

	
	for (int i = 7; i >= 0; i--)
	{
		cout << u.b[i].a1;
	}
	cout << endl;



	return 0;
}



