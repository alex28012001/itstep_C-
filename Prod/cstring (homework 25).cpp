/*
//ex 4 homework 25

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
int main()
{

	char str[100], *s,oper[20];
	const char op[10] = "* /+-";
	int A[20], size_A = 0, size_op = 0;
	cin.getline(str, 100);

	while (s = strpbrk(str, op))  //заполнение массива операциями из строки
	{
		oper[size_op++] = *s;
		*s = ' ';
	}


	strtok(str, " ");
	

	while (s)
	{
		A[size_A++] = atoi(s);
		s = strtok(0, " ");
	}

	for (int i = 0; i < size_A; i++)
	{
		cout << A[i] << "  ";

	}

	cout << endl;

	for (int i = 0; i < size_op; i++)
	{
		cout << oper[i] << " ";
	}

	cout << endl;




	for (int i = 0; i < size_op; i++)
	{
		if (oper[i] == '*')
		{
			A[i] *= A[i + 1];
			memcpy(&A[i + 1], &A[i + 2], sizeof(int)*size_A - i - 2);
		}

		if (oper[i] == '/')
		{
			A[i] /= A[i + 1];
		}
	}

	for (int i = 0; i < size_op; i++)
	{
		if (oper[i] == '+')
		{
			A[i] *= A[i + 1];
		}

		if (oper[i] == '-')
		{
			A[i] /= A[i + 1];
		}
	}




	return 0;
}

*/

//ex 1

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	setlocale(0, "");

	char str[] = " ";
	cout << "Input str: ";
	cin.get(str, 100);

	int counter_b = 0, counter_n = 0, counter_s = 0;


	while (isdigit(str[counter_n]))
	{
		counter_n = atoi(str);
		counter_n++;
	}

	while (isalpha(str[counter_b]))
	{
		counter_b++;
	}



	cout << "Кол - во букв: " << counter_b << endl;
	cout << "Кол - во цифр: " << counter_n << endl;
	cout << "Кол - во остальных символов: " << counter_s << endl;
		




	return 0;
}
