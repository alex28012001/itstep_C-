#include<ctime>
#include<iostream>
using namespace std;
int main()
			{
				setlocale(0, "");
				srand(time(0));

				const int size = 10;
				int A[size];
				int left = 0, right = size - 1,mid;

				for (int i = 0; i < size; i++)
				{
					A[i] = rand() % 10;
					cout << A[i] << "\t";
				}




					for (int i = 0; i < size - 1; i++)
					{
						
						int min_i = i;
						
						for (int j = i + 1; j < size; j++) 
						{
							if (A[j] < A[min_i])
							{
								min_i = j;
							}
						}
						
						int temp = A[i];
						A[i] = A[min_i];
						A[min_i] = temp;
					}
				
					cout << "\nИсходный массив\n";
					for (int i = 0; i < size; i++)
					{
						
						cout << A[i] << "\t";
					}





				return 0;
			}
