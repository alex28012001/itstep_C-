#include<ctime>
#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(0));

	const int size = 10;
	int A[size];


	for (int i = 0; i<size; i++)
	{
		A[i] = rand() % 10;
		cout << A[i]<<"\t";
	}



	for (int d = size / 2; d > 0; d /= 2)
	{
		for (int i = d, j; i < size; i++)
		{
			int temp = A[i];
			for (j = i; j >= d; j -= d)
			{
				if (temp < A[j - d])
					A[j] = A[j - d];
				else
					break;
			}
			A[j] = temp;
			
		}
		
	}

	cout << "\nИсходный массив\n";
	for (int i = 0; i < size; i++)
	{

		cout << A[i] << "\t";
	}



	return 0;
}
