/*
#include<stdarg.h>
#include<iostream>

using namespace std;

void myprintf(char * str, ...)
{
	char * s = str;
	va_list params;
	va_start(params);

	int ivalue;
	double dvalue;


	while (*s)
	{
		if (*s == '%')
		{
			switch (*(++s))
			{


			case 'i': ivalue = va_arg(params, int);
				cout << ivalue << "  "; break;

			case 'd':dvalue = va_arg(params, double);
				cout << dvalue << "  "; break;



			}

		}
		else cout << *s << "  "; s++;
		va_end(params);
	}


}

int main()
{
	myprintf("%i%d", 5, 5.5);


	return 0;
}


*/


/*
#include<stdio.h>
int main()
{
	printf("Hello world");
	int ivalue = 777;
	printf("ivalue = %, ivalue_hex = %x");
	printf("%*d", 10, ivalue);



	return 0;
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//ex1
	
	/*
	char A[10];
	scanf("%s", A);
	printf("Str: %20s", A);
	*/


	//ex1
	int data = 0;

	scanf("%t", data);
	


	printf("Data: %d", data);
	


	return 0;
}
