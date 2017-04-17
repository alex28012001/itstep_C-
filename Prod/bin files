#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//подключаем библиотеку (fprintf,fscanf)
#include<stdlib.h>//подключаем библиотеку(rand)
const int size = 20;//создаем константную переменную
long filesize(FILE *in)//вычисляем размер файла
{
	fseek(in, 0, SEEK_END);
	return ftell(in);	
}

bool check_fileopen(FILE *in,const char *filename)//проверка на верность потока
{
	if (!in)
	{
		printf("Error!!! %s",filename);
		return false;
	}
	return true;
}

void write(FILE *ftxt,FILE*fdat)
{
	int number;
	for (int i = 0; i < size; i++)
	{
		number = rand();
		fwrite(&number, sizeof(int), 1, fdat);
		fprintf(ftxt, "%d ", number);
	}
}
void printTXT(FILE *ftxt)
{
	printf("Numbers from text file\n");
	int  number;
	while (!feof(ftxt))
	{
		fscanf(ftxt, "%d", &number);
		printf("%d ", number);
	}

}
void printDAT(FILE *fdat)
{
	printf("Numbers from .dat file\n");
	int  number;
	while (!feof(fdat))
	{
		fread(&number,sizeof(int),1,fdat);
		printf("%d ", number);
	}

}

int main()
{
	FILE *ftxt, *fdat;
	ftxt = fopen("Textfile.txt","w");
	fdat = fopen("Binfile.dat", "wb");
	
	check_fileopen(ftxt, "Textfile.txt");
	check_fileopen(fdat, "Binfile.dat");

	write(ftxt, fdat);
	fclose(ftxt);
	fclose(fdat);

	FILE *ftxt1, *fdat1;
	ftxt1 = fopen("Textfile.txt", "r");
	fdat1 = fopen("Binfile.dat", "rb");

	printf("Size of file txt = %d\n", filesize(ftxt1));
	printf("Size of file .dat = %d\n",filesize(fdat1));
	fseek(ftxt1, 0, SEEK_SET);
	fseek(fdat1, 0, SEEK_SET);
	printTXT(ftxt1);
	printDAT(fdat1);

	return 0;
}


