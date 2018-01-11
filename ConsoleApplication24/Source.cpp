#include <stdio.h>
#include <stdlib.h> // для использования функций system()
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

#define sizeArr 12
///*
//void main1()
//{
//	srand(time(NULL));
//	/*1.	Ввести два целочисленных массива − по 10 элементов в каждом.
//	Сформировать новый массив, на четных местах которого будут 
//	элементы с нечетными индексами из первого массива, а на нечетных – 
//	с четными индексами из второго.  */
//	int mas1[10];
//	int mas2[10];
//	for (int i = 0; i <10; i++)
//	{
//		mas1[i] = 1 + rand() % 99;
//		mas2[i]= 1 + rand() % 99;
//
//		cout << mas1[i]<< " - "<<mas2[i] <<endl;
//	}
//	//Сформировать новый массив, 
//	//на четных местах которого будут 
//	//элементы с нечетными индексами из первого массива
//	int mas3[10];
//	for (int j = 0; j < 10; j++)
//	{
//		if (j % 2 == 0)
//		{
//			mas3[j] = mas1[j + 1];
//		}
//		//а на нечетных – 
//		//с четными индексами из второго
//		else 
//			mas3[j] = mas2[j - 1];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Sformirpvali =  " << mas3[i] << endl;
//	}
//	
//
//
//
//
//
//
//
//
//	
//
//
//
//
//
//
//
//
//
//	system("pause");
//
//}
////


void main()
{

	int a;
	cout << "Vedite nomer zd ";
	cin >> a;
	if (a == 1)
	{
		/*2.	Ввести целочисленный массив, состоящий из 17-ти
		элементов (двузначные целые числа). Вычислить сумму цифр этого массива*/
		int mas1[17];
		unsigned long long summa = 0;
		for (int i = 0; i <10; i++)
		{
			mas1[i] = 11 + rand() % 99;
			cout << mas1[i] << "  " << endl;
		}
		for (int j = 0; j < 17; j++)
		{
			summa += mas1[j];

		}
		cout << "Summa =    " << summa << endl;
	}

	else if (a == 2)
	{
		/*3.	Ввести два массива X и Y, состоящих из 10-ти элементов целого типа.
		Сформировать
		массив S, состоящий из одинаковых элементов исходных массивов*/
		int masx[10];
		int masy[10];
		int masS[10] = { 0 };
		for (int i = 0; i < 10; i++)
		{
			masx[i] = 1 + rand() % 4;
			masy[i] = 1 + rand() % 4;
			cout << masx[i] << "   -   " << masy[i] << endl;
		}
		for (int i = 0; i < 10; i++)
		{
			if (masx[i] == masy[i])
			{
				masS[i] = masx[i];

			}
		}
		for (int i = 0; i < 10; i++)
		{
			cout << "Massiv S  " << masS[i] << endl;
		}

	}

	else if (a == 3)
	{
		/*4.	Дан массив вещественных чисел Z(16) .
		Определить разность между суммой элементов
		c четными индексами и суммой элементов, индексы которых кратны трем*/
		int masz[16];
		double summa = 0;
		double summakra = 0;
		//Определить разность между суммой элементов 
		//c четными индексами и суммой элементов,
		for (int i = 0; i < 10; i++)
		{
			masz[i] = 1 + rand() % 4;
			if (i % 2 == 0)
				summa += masz[i];
			if (i % 3 == 0)
				summakra += masz[i];
			cout << masz[i] << "   " << endl;

		}
		cout << "Summa:  " << summa << endl;
		cout << "Kratna 3:  " << summakra << endl;


	}

	else if (a == 4)
	{
		/*5.	Ввести массив, состоящий из 12 элементов действительного типа.
		Расположить элементы в порядке убывания.
		Определить количество  происшедших при этом перестановок.*/
		int mas[sizeArr];
		int per ;
		for (int i = 0; i < sizeArr; i++)
		{
			mas[i] = 1 + rand() % 99;
			cout << mas[i] << "   " << endl;
		}


		int chet=0;


		for (int i = 0; i < sizeArr; i++)
		{
			for (int h = (sizeArr - 1); h > i; h--)
			{
				if (mas[h - 1] > mas[h])
				{
					per = mas[h - 1];
					mas[h - 1] = mas[h];
					mas[h] = per;
					chet++;
				}
			}
		}
		for (int i = 0; i < sizeArr; i++)
		{
			cout << "Pervoe    " << mas[i] << endl;
		}
		cout << "Proizohlo pytei " << chet << endl;
	}

	else if (a == 5)
	{
		/*6.	Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов.
		Вычислить сумму нечетных
		по значению отрицательных элементов и заменить элементы кратные трем */
		int mas[11];
		int summa=0;
		for (int i = 0; i < 11; i++)
		{
			mas[i] = -99 + rand() % 99;
			if (mas[i] % 2 != 0 && mas[i]<0)
				summa += mas[i];
		
			cout << mas[i] << "   " << endl;
		}
		cout << "Summa otricatelnix ravno " << summa << endl;
		for (int  i = 0; i < 11; i++)
		{
			if (mas[i] % 3 == 0)
			{
				mas[i] = summa;
			}
			cout << "-> " << mas[i] << endl;
		}
		
		
	}



	system("pause");
}