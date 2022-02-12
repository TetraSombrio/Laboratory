#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
1. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 
1 кг конфет.
*/
void f1()//done
{
	float cost;
	cout << "write cost of 1kg pack of candy" << endl;
	cin >> cost;
	system("cls");
	for(float i = 0.1; i < 1.1; i += 0.1)
	{
		cout << cost * i << endl;
	}
	
}

/*2. Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . 
(N сомножителей).
*/
void f2()//done
{
	float r = 1, A, n, k = 1.1;
	cout << "write number" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		r *= k;
		k += 0.1;
	}
	cout << "1.1 · 1.2 · 1.3 · ... · (n co-multipluers) = " << r << endl;
}

/*3. Дано целое число N (> 0). Найти квадрат данного числа, используя для 
его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). 
После добавления к сумме каждого слагаемого выводить текущее значение суммы
*/
void f3()//done
{
	int r = 0, n = 0, k = 1, z;
	cout << "write number" << endl;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		r += k;
		k += 2;
		cout << r << endl;
	}
}

/*4. Дано вещественное число A и целое число N (> 0). Используя один 
цикл, найти сумму 1 + A + A2 + A3 + . . . + AN
*/
void f4()//done
{
	int r = 1, A, n;
	cout << "write number and N" << endl;
	cin >> A >> n;
	
	for(int i = 1; i <= n; i++)
	{
		r += pow(A, i);
	}
	cout << "1 + A + A^2+A^3+...+A^N = " << r << endl;
}

/*5. Дано вещественное число A и целое число N (> 0). Используя 
один цикл, найти значение выражения 
1 − A + A2 − A3 + . . . ± AN . 
Условный оператор не использовать.
*/
void f5()//done
{
	int n;
	int r = 1, A, z;
	cout << "write number and N" << endl;
	cin >> A >> n;
	
	for(int i = 0; i <= n; i++)
	{
		r = (pow(-A, i));
		z += r;
	}
	
	cout << "1 - A + A^2 - A^3 + ... +- A^n = " << z << endl;
}

int main()
{
	setlocale(LC_ALL, "russian");
	
	short r = 1;
	int i;
	
	while(i <= 5)
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