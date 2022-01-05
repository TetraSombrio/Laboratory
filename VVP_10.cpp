#include <iostream>
using namespace std;

void f1()
{
	short A, B;
	cout << "введите A и B" << endl;
	cin >> A >> B:
	
	if(A > 2 and B <= 3)
	{
		cout << "Неравенства A > 2 и B ≤ 3 справедливы" << endl;
	}
	else cout << "Неравенства A > 2 и B ≤ 3 НЕ справедливы" << endl;
}

void f2()
{
	int A, B, C;
	cout << "введите " << endl;
	cin >> A >> B >> C:
	
	if(A < B < C)
	{
		cout << "Двойное неравенство A < B < C справедливо" << endl;
	}
	else cout << "Двойное неравенство A < B < C НЕ справедливо" << endl;
}

void f3()
{
	short A;
	cout << "введите " << endl;
	cin >> A:
	
	if(sizeof(A) < 0.86)//0.86 это вес числа 100. Если число весит меньше 0.86 байт = оно меньше 100.
	{
		if(A \ 2 == 0)//проверка на четность
		{
			cout << "Данное число является четным двузначным" << endl;
		}
	}
	else
	{
		cout << "Данное число НЕ является четным двузначным" << endl;
	}
}

void f4()
{
	short mas[3];
	short A, B;
	cout << "введите " << endl;
	cin >> A >> B:
	
	for(int i = 0; i < 3; i++)//стандартное разложение числа на отдельные цифры.
	{
		m = m%10;
        n = n/10;
        mas[i] = m;
        m = n;
	}
	
	if(mas[1] < mas[2] < mas[3])
	{
		cout << "Цифры данного числа являются возростающей последовательностью" << endl;
	}
	else if(mas[3] < mas[2] < mas[1])
		cout << "Цифры данного числа являются убывающей последовательностью" << endl;
}

void f5()
{
	short mas[4];
	int A, m;
	cout << "введите " << endl;
	cin >> A:
	
	for(int i = 0; i < 4; i++)//стандартное разложение числа на отдельные цифры.
	{
		m = m%10;
        A = A/10;
        mas[i] = m;
        m = A;
	}
	
	if(mas[1] == mas[4] and mas[2] == mas[3])
	{
		cout << "Данное число читается одинаково слева направо и справа налево" << endl;
	}
	else
	{
		cout << "Данное число НЕ читается одинаково слева направо и справа налево" << endl;
	}
}

void f6()
{
	int A, B, C, C1, C2, G;
	cout << "введите последовательно A B и C" << endl;
	cin >> A >> B >> C:
	
	while(not(A != B and A + B > C and C > 0))//проверка свойств прямоугольного треугольника.
	{
		
	}
	
	if(A > 0 and B > 0 and C > 0)//защита от отрицательных значений.
	{
		if(C1 * C1 + C2 * C2 == G * G)//теорема пифагора работает только на прямоугольных треугольниках.
		{
			cout << "Треугольник со сторонами a, b, c является прямоугольным" << endl;
		}
		else
		{
			cout << "Треугольник со сторонами a, b, c НЕ является прямоугольным" << endl;
		}
	}
}

void f7()
{
	cout << "введите " << endl;
	cin >> A:
	
	
}


void main()
{
	setlocale(LC_ALL, "ru");
	
	f1();
	cout << endl;
	
	f2();
	cout << endl;
	
	f3();
	cout << endl;
	
	f4();
	cout << endl;
	
	f5();
	cout << endl;
	
	f6();
	cout << endl;
	
	f7();
	cout << endl;
}