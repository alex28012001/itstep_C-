#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE * in;
	int a, b;
	if (!(in = fopen("input.txt", "r")))
	{
		printf("Error");
		return 1;
	}
	fscanf(in, "%d%d", &a, &b);
	fclose(in);
	int sum;
	sum = a + b;
	printf("sum = %d", sum);

	return 0;

}

-----------------------------------------------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE * in, *out;
	int a, b;

	if (!(in = fopen("potoki cpp", "r")))
	{
		printf("Error");
		return 1;
	}

	fscanf(in, "%d%d", &a, &b);
	fclose(in);

	if(!(out = fopen("output.txt", "w")))
	{
		printf("Error");
		return 1;
	}

	int sum;
	sum = a + b;
	fprintf(out,"sum = %d", sum);
	fclose(in);

	return 0;

}

------------------------------------------------------------------------------------------------------------------------------------


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE * in, *out;
	char str[256];

	if (!(in = fopen("potoki cpp", "r")))
	{
		printf("Error");
		return 1;
	}

	if(!(out = fopen("output.txt", "w")))
		{
			printf("Error");
			return 1;
		}



	while (!feof(in))
	{
		fgets(str, 255, in);
		fputs(str, out);
	}
	


	fclose(in);

	
	fclose(in);

	return 0;

}


EX1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>
int main()
{
	FILE *in, *out;//объявляем два потока, in для чтения, out для записи
	char str[256];
	if (!(in = fopen("28.txt", "r")))//проверка на существование файла
	{
		printf("Error!\n");
		return 1;
	}

	if (!(out = fopen("output.txt", "w")))//проверка на создание файла
	{
		printf("Error!\n");
		return 1;
	}

	char operations[10][5] = { "+", " = ", "++", "*", "||", "==", "!", "%", "<<", "->" };//искомые операции
	int counters[10] = { 0 };//счетчик операций

	while (!feof(in))//принимает поток и ищет конец файла,
	{
		fgets(str, 255, in);//считывает строку, в конце файла и возвращает str
		for (int i = 0; i < 10; i++)//перемещение по массиву операций
		{
			char *s = str;
			while (s)//пока не кончится строка ищем операцию
			{
				if (s = strstr(s, operations[i]))//поиск вхождения операции
				{
					counters[i]++;
					s = s + strlen(operations[i]);//перемещение указателя на случай нескольких одинаковых операций в одной строке
				}
			}
		}
	}
	for (int i = 0; i < 10; i++)//вывод
		fprintf(out, "%s - %d\n", operations[i], counters[i]);

	


	fclose(in);
	fclose(out);
	return 0;
}








EX2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
int main()
{
	FILE *in, *out;//объявляем два потока, in для чтения, out для записи
	if (!(in = fopen("28.txt", "r"))) {
		printf("Error\n");
		return 1;
	}
	int counter = 0;
	char word[28];
	while (!feof(in))
	{
		fscanf(in,"%s",word);
		counter++;
	}
	printf("%d",counter);

	fseek(in,0,SEEK_SET);//перемещение укзаателя файла на начало файла

	char **lenWord = (char**)malloc(sizeof(char*)*counter);
	for (int i = 0; i < counter; i++)
		lenWord[i] = (char*)malloc(sizeof(char)*28);

	int i = 0;
	while (!feof(in))
	{
		fscanf(in, "%s", word);
		strcpy(lenWord[i], word);
		i++;
	}


	fclose(in);
	return 0;
}




EX3
input.txt



Ivanov 4  456345   5 3 4  
Petrov  4  456348   4 3 4
Ivanov  5 456340   5 3 5
Petrova  5 456349   4 5 4

--------------------------------------

students.cpp




#include"Header.h"



Student read(FILE *in)
{
	Student student;
	fscanf(in, "%s%d%d%d%d%d", student.FIO, &student.group, &student.num_zuch, &student.marks[0], &student.marks[1], &student.marks[2]);
	return student;
}




void output(Student student, FILE *out)
{
	fprintf(out, "%s %d %d %d %d %d ", student.FIO, student.group, student.num_zuch, student.marks[0], student.marks[1], student.marks[2]);
}



float avg(Student student)
{
	float sred = 0;
	for (int i = 0; i < 3; i++)
		sred += student.marks[i];

	return sred / 3;
}



float whole_avg(Student *student, int size)
{
	float w_sred = 0;
	for (int i = 0; i < size; i++)
		w_sred += avg(student[i]);

	return w_sred / size;
}

bool otlichniki(Student student)
{
	bool flag = 1;
	for (int i = 0; i < 3; i++)
	if (student.marks[i] < 9) flag = 0;

	return flag;
}


/*
void change_marks(Student *student, char *name)
{
	if (strcmp(name, student->FIO) == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Input " << i + 1 << "mark: ";
			cin >> student->marks[i];
		}
	}
}
*/


--------------------------------------------------------------------------------------

Header.h




#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

const int size = 4;

struct Student
{
	char FIO[40];
	short group;
	unsigned long num_zuch;
	int marks[3];
};


Student read(FILE * in);

void output(Student student,FILE *out);


float avg(Student student);

float whole_avg(Student *student, int size);


bool otlichniki(Student student);


void change_marks(Student *student, char *name);


--------------------------------------------------------------------------------------------

main.cpp





#include"Header.h"


int main()
{
	Student student[size];

	FILE *in, *out;
	if (!(in = fopen("Input.txt", "r")))
	{
		printf("Error");
		return 1;
	}

	
	if (!(out = fopen("Output.txt", "w")))
	{
		printf("Error");
		return 2;
	}




	for (int i = 0; i < size; i++)
		student[i] = read(in);



	for (int i = 0; i < size; i++)
	{
		output(student[i],out);
		fprintf(out, "%0.2f \n", avg(student[i]));
	}

	
	fprintf(out, "Whole avg: %0.2f \n", whole_avg(student, size));

	/*cout << "Whole avg: " << whole_avg(student, size);

	cout << "Good boys: ";
	for (int i = 0; i < size; i++)
	{
		if (otlichniki(student[i]))
			cout << student[i].FIO << " ";
	}

	cout << "Input student for changing marks: ";
	char st[20]; cin >> st;
	for (int i = 0; i < size; i++)
		change_marks(&student[i], st);

	for (int i = 0; i < size; i++)
		output(student[i]);


	cout << endl;
	*/



	return 0;
}

















