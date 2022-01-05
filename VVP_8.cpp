#include <iostream>
using namespace std;

void task1()
{
    float r;
    int byt;
    cout << "enter numbers of bytes" << endl;
    cin >> byt;
    
    r = byt/1024;
    r = int(r);
    cout << r << endl;
}

void task2()
{
	int x, A, B;
	cout << "consistently enter numbers A and B(A > B)" << endl;
	cin >> A >> B;
	x = 1;
	
	if((A >= B) and (B > 0 and (A > 0)))//защита от ввода нуля и защита для выполнения условия A > B.
	{
		while((B * x) >= A)
		{
			if((B * x) > A)
			{
				if(A - (B * x) == 0)// если 
				{
					break;
				}
				if(A - (B * x) < 0)
				{
					x--;
					break;
				}
			}
			x++;
		}
		cout << x << endl;
	}
}

void task3()
{
    int r, x, A, B;
    cout << "consistently enter numbers A and B" << endl;
    cin >> A >> B;
	//r = A - (A / B);
	if(A > B)
	{
		while((B * x) < A)
		{
			x++;
		}
		
		r = A - (B * x);
		cout << abs(++r) << endl;//костыль, убрать, если получится
	}
	else cout << "0\n";
}

void task4()
{
	int m, n, i;
	int mas[2];
	cout << "enter a two-digits number to replace the digits" << endl;
	cin >> n;
	m = n;
	
	if(n < 100 and n > 9)
	{
		if(!(n == 0) or !(n/10 == 0))
		{
			m = m%10;
    		n = n/10;
    		mas[0] = m;//просто запишем в обратном порядке в массив
    		n = n%10;
    		mas[1] = n;
    		cout << mas[0] << mas[1] << endl;
		}
	}
	else cout << "incorrect number" << endl;
}

void task5()
{
	int m, n, i;
	int mas[3];
	cout << "enter a number to replace the digits" << endl;
	cin >> n;
	m = n;
	
	if(n < 1000 and n > 99)//проверка трёхзначности
	{
		for(int i = 0; i < 3; i++)//трехзначное число, значит нужно три итерации
    	{
        	m = m%10;
        	n = n/10;
        	mas[i] = m;//
        	m = n;
    	}
	}
	else cout << "incorrect number" << endl;
    
	swap(mas[0],mas[1]);
	
	for(i = 0; i < 3; i++)
	{
		cout << mas[i];
	}
	cout << endl;
}

int main()
{
	//setlocale(LC_ALL, "ru");//не работает
	
	cout << "Task 1:\t";
	task1();
	cout << endl;
	
	cout << "Task 2:\t";
	task2();
	cout << endl;
	
	cout << "Task 3:\t";
	task3();
	cout << endl;
	
	cout << "Task 4:\t";
	task4();
	cout << endl;
	
	cout << "Task 5:\t";
    task5();
    cout << endl;
}