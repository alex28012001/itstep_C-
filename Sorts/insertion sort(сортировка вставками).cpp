#include<ctime>
#include<iostream>
using namespace std;
int main()
			{
				setlocale(0, "");
				srand(time(0));

				int temp;
				const int size = 7;
				int A[size];



				for (int i = 0; i < size; i++)
				{
					A[i] = rand() % 10;
					cout << A[i] << "\t";
				}



				for (int i = 1, j; i < size; i++)
				{
					temp = A[i];

					for (j = i - 1; (j >= 0) && (A[j]>temp); j--){

						A[j + 1] = A[j];
						A[j] = temp;

					}
				}




				return 0;
			}
