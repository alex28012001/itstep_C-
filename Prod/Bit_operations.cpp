//ex1 
//ex2

#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	setlocale(0, "");

	int a, b;
	cout << "Введите 1 число: ";
	cin >> a;
	cout << "Введите 2 число: ";
	cin >> b;

	cout << "*-/+ : ";
	char symb;
	cin >> symb;


	int result;
	switch (symb)
	{
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / b; break;

	}



	for (int i = 31; i >= 0; i--)
	{
		cout << ((result >> i) & 1);	//битовый сдвиг на единицу и битовое & с еденицей для получения каждого отдельного бита
		if (i % 8 == 0) cout << " ";
	}

	int number;
	cout << "Введите байт";
	cin >> number;
	result = ((255 << (3 - number) * 8)&result) >> ((3 - number) * 8);	
	//(3 - number) * 8) - выбор на сколько сдвинуть 255 (0 - 8 - 16 - 24)
	//(3 - number) * 8)&result) к получению байта применяем битовое & для получения заданного байта
	//((3 - number) * 8) - сдвиг обратно на (0 - 8 - 16 - 24)


	cout << endl;
	for (int i = 7; i >= 0; i--)
	{
		cout << ((result >> i) & 1);
	}




	return 0;
}




//ex 3
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 4, 4, 5, 5 };//сортируем массив
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < sizeof(arr) / sizeof(int); i += 2)//шаг = 2, ибо по условию
	{
		if (arr[i] ^ arr[i - 1])//с помощью xor сравниваем значения, если они равны, то даст 0
		{
			cout << arr[i - 1];
			break;
		}
	}

	cout << endl;
	return 0;
}


	
