/*

#include<iostream>
#include<ctime>
#include<cstring>
using namespace std;

char *findSub(char*, char*);

int main()
{
        char ptr[100];
        cout << "Input str : ";
        cin.getline(ptr, 100);

        char ptr2[10];
        cout << "Input sub : ";
        cin.get(ptr2, 10);


        char *ykazatel = findSub(ptr, ptr2);

        int counter = 0;
        for (; ykazatel != 0; ykazatel = findSub(ykazatel + strlen(ptr2), ptr2))
        {
                counter++;
        }
        cout << counter;

        ykazatel == strstr(ptr, ptr2);
        for (; ykazatel != 0; ykazatel = findSub(ykazatel + strlen(ptr2), ptr2))
        {
                cout << counter << endl;
        }

        return 0;
}

char *findSub(char*str, char*sub)
{
        char *startStr = str;
        char *startSub = sub;
        char *ptr = NULL;

        for (int i = 0; i < str[i] != '\0'; i++)
        {
                startStr = &str[i];
                ptr = startStr;
                while (*startSub != '\0' && *startSub == *startStr)
                {
                        startSub++;
                        startStr++;
                }
                if (*startSub == '\0')return ptr;

        }

}
*/


/*
//ex1


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        char str[20]="";

        cout << "Input str :";
        cin.get(str, 20);

        int counter = 0;

        for (int i = 0; i < str[i] != '\0'; i++)
        {
                counter++;
        }

        cout << "Length: "<<counter << endl;


        return 0;
}
*/


/*
//ex2
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        char str[100] = "";

        cout << "Input str :";
        cin.get(str, 20);



        for (char * dot = strchr(str, '.'); dot != 0;dot = strchr(dot+1,'.'))
        {
                *dot='!';


        }
        cout << str << endl;



        return 0;
}

*/



/*
//strtoc (ex 4)(деление слов из строчки)
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
        char str[] = "hello world lala", *s;



        char delim[] = " ,.!?-";
        s = str;
        s = strtoc(s, delim);

        while (s != NULL)
        {
                cout << s << endl;
                s = strtoc(0, delim);
        }


        return 0;
}
*/



/*
//ex4
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>


using namespace std;

int main()
{
        char str[100], words[10][3], *s;
        char delim[] = " .,!?";
        cout << "Input str: ";
        cin.getline(str, 100);
        s = str;
        s = strtok(s, delim);
        int i = 0;
        while (s != NULL)
        {
                if (strlen(s) == 2)
                {
                        strcpy(words[i], s);
                        i++;
                }
                s = strtok(0, delim);
        }
        int size = i;

        for (int i = 0; i < size; i++)
        {
                for (int j = size - 1; j > i; j--)
                {
                        if (strcmp(words[j], words[j - 1]) < 0)
                        {
                                swap(words[j], words[j - 1]);
                        }
                }
        }
        int counter = 1;
        for (int i = 0; i < size; i++)
        {
                if (strcmp(words[i], words[i + 1]) == 0)
                {
                        counter++;
                }
                else
                {
                        cout << words[i] << "\t" << counter << endl;
                        counter = 1;
                }
        }

        return 0;
}

*/

ex 1
#include<iostream>
using namespace std;
int main()
{
	char str[100] = "";
	cout << "Input str : ";
	cin.getline(str, 100);

	int counter = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	cout << "Length : " << counter << endl;



	return 0;
}

ex2
#include<iostream>
using namespace std;
int main()
{
	char str[100] = "";
	cout << "Input str : ";
	cin.getline(str, 100);

	for (char * dot = strchr(str, '.'); dot != '\0'; dot = strchr(fuck + 1, '.'))
	{
		*dot = '!';
	}
	
	
	cout << str << endl;


	return 0;
}

ex3
#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	char str[100] = "";
	char symbol;

	cout << "Input str : ";
	cin.getline(str, 100);

	cout << "Input symbol: ";
	cin>>symbol;




	int counter = 0;

	for (char * dot = strchr(str, symbol); dot != '\0'; dot = strchr(dot + 1, symbol))
	{
		counter++;
	}


	cout << "В строке '" << str << "'  буква "<<symbol<< " встречаеться " << counter << " разa " << endl;


	return 0;
}


ex4
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>


using namespace std;

int main()
{
	char str[100], words[10][3], *s;
	char delim[] = " .,!?";
	cout << "Input str: ";
	cin.getline(str, 100);
	s = str;
	s = strtok(s, delim);
	int i = 0;
	while (s != NULL)
	{
		if (strlen(s) == 2)
		{
			strcpy(words[i], s);
			i++;
		}
		s = strtok(0, delim);
	}
	int size = i;

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (strcmp(words[j], words[j - 1]) < 0)
			{
				swap(words[j], words[j - 1]);
			}
		}
	}
	int counter = 1;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(words[i], words[i + 1]) == 0)
		{
			counter++;
		}
		else
		{
			cout << words[i] << "\t" << counter << endl;
			counter = 1;
		}
	}

	return 0;
}




