#include <iostream>
using namespace std;

void shellsort(int n, int array[])
{
    int i, j, x, d;
    
	d = d / 2;
	
	while(d > 0)
	{
		i = d;
		while(i < n)
		{
			x = array[i];
			j = i;
			while(j >= d)
			{
				if(x > array[j - d])
				{
					array[j] = array[j - d];
					j = j - d;
				}
				else break;
			}
			array[i] = x;
		}
		d = d / 2;
	}
}

void forshellsort(int n, int array[])
{
    int i, j, d;
    int tmp;
    
    for (d = n / 2; d > 0; d /= 2)
    {
        for (i = d; i < n; i++)
        {
            tmp = array[i];
            for (j = i; j >= d; j -= d)
            {
                if (tmp < array[j - d])
                    array[j] = array[j - d];
                else
                    break;
            }
            array[j] = tmp;
    	}
	}
}

int main()
{
	int selector, n, k, i;
	cout << "Введите размер массива" << endl;
	cin >> n;
	int array[n];//указываем размер для массива
	
	cout << "вводите последовательно элементы массива" << endl;
	for(k = 0; k < n; k++)
	{
		cin >> array[k];
	}
	
	cout << "выберите реализацию алгоритма 1 - цикл while. 2 - цикл for\n" << endl;
	cin >> selector;
	
	switch(selector)
	{
		case 1:
			shellsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Массив отсортирован" << endl;
			for(i = 0; i < n; i++)
            {
                cout << array[i] << "\t";
            }
			break;
		case 2:
			forshellsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Массив отсортирован" << endl;
			for(i = 0; i < n; i++)
            {
                cout << array[i] << "\t";
            }
			break;
		default:
			break;
	}
}
