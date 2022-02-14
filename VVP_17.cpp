#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;

/*1. Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти 
среднее арифметическое элементов массива с номерами от K до L 
включительно.*/
void f1()//done
{
	int n;
	cout << "enter the number of array numbers" << endl;
	cin >> n;
	int arr[n];
	int k, l, sr = 0, i;
	cout << "enter slice boundaries(K, L)" << endl;
	cin >> k >> l;
	
	int randovalue = 1, tmprand;
	srand(randovalue);
	for(int j = 0; j < n; j++)//заполняет рандомными числами массив
	{
		tmprand = 1 + rand() % 1024;//рандомное число до 1024
		randovalue++;
		arr[j] = tmprand;
		cout << arr[j] << endl;
	}

	cout << endl;

	for(i = k; i < l; i++)
	{
		sr += arr[i];
	}
	sr /= l - k;
	
	cout << "arithmetic mean = " << sr << endl;
}

/*2. Дан целочисленный массив размера N, не содержащий одинаковых чисел.
Проверить, образуют ли его элементы арифметическую прогрессию. Если 
образуют, то вывести разность прогрессии, если нет — вывести 0.


решение - записать разности между элементами, и если хоть раз эта разница была
не одинаковой - break*/
void f2()//done
{
	int n, raz, raz2;
	cout << "enter the number of array numbers" << endl;
	cin >> n;
	int arr[n];
	cout << "enter numbers to array" << endl;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int j = 2; j < n; j++)
	{
		raz = arr[j-1] - arr[j-2];
		raz2 = arr[j] - arr[j-1];
		if(raz != raz2)
		{
			cout << "array doesn't form an arithmetic sequence." << endl;
			return;
		}
		else
		{
			continue;
		}
	}
	
	cout << "array forms an arithmetic sequence." << endl;
}

/*3. Дан массив A размера N. Найти минимальный элемент из его элементов
с четными номерами: A2, A4, A6,*/
void f3()//done
{
	int n;
	cout << "enter the number of array numbers" << endl;
	cin >> n;
	int arr[n];
	int i, mini;

	cout << "enter numbers to array" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	bool localmaxisreality = false;
	
	for(i = 2; i < n; i+=2)
	{
		if(mini > arr[i])
		{
			mini = arr[i];
		}
	}

	cout << "minimum = " << mini << endl;
}

/*4. Дан массив размера N. Найти номер его последнего локального 
максимума (локальный максимум — это элемент, который больше любого 
из своих соседей).*/
void f4()//done
{
	int n;
	cout << "enter the number of array numbers" << endl;
	cin >> n;
	int arr[n];
	int i, max;

	cout << "enter numbers to array" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	bool localmaxisreality = false;
	
	for(i = 1; i < n; i++)
	{
		if((arr[i] > arr[i-1]) and (arr[i] > arr[i+1]))
		{
			localmaxisreality = true;
			max = arr[i];
		}
		
		if((i == (n - 1)) and (localmaxisreality == true))
		{
			cout << "local max = " << max << endl;
			return;
		}
	}

	cout << "local max = " << max << endl;
}

/*5. Дан целочисленный массив размера N, содержащий ровно два 
одинаковых элемента. Найти номера одинаковых элементов и 
вывести эти номера в порядке возрастания*/
void f5()//done
{
	int n;
	cout << "enter the number of array numbers" << endl;
	cin >> n;
	int array[n];
	
	cout << "enter numbers to array" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	
	for(int j = 0; j < n; j++)
	{
		int member = array[j];
		for(int i = n - 1; i > 0; i--)
			if(array[i] == member)
			{
				int r1 = j;
				int r2 = i;
				cout << r1 << " " << r2 << endl;
				return;
			}
	}
}

int main()
{
	short r = 1;
	int i;
	
	while(i <= 6)
	{
		cout << "write number of quest" << endl;
		cin >> r;
		switch(r)
		{
			default:
				//break;
				return 0;
				break;
			case 1:
				f1();
				continue;
				i++;
			case 2:
				f2();
				continue;
				i++;
			case 3:
				f3();
				continue;
				i++;
			case 4:
				f4();
				continue;
				i++;
			case 5:
				f5();
				continue;
				i++;
		}
	}
	system("pause");
}