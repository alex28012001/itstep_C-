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
				int key;
				cin >> key;








				for (int i = 0; i < size; i++)
				{
					A[i] = rand() % 10;
					cout << A[i] << "\t";
				}


				while (left < right)
				{
					mid = (left + right)/2;
					key <= A[mid] ? right = mid : left = mid+1;
					left = mid+1;
				}
				if (key == A[right])
					cout << right << endl;

				else
				cout << "Элемент не найден ";

				return 0;
			}
