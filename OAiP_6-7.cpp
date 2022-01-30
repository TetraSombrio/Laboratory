#include <iostream>
using namespace std;

void combsort(int n, int array[])
{
    float k = 1.247;
    int step = n - 1;
    while(step >= 1)
    {
        int i = 0;
        while(i < n - step)
        {
            if(array[i] > array[i + step])
            {
                swap(array[i], array[i + step]);
            }
        i++;
        }
        step /= k;
    }
    
    for(int i = 0; i <= n - 1; i++)
    {
        cout << array[i] << endl;
    }
}

void forcombsort(int n, int array[])
{
    float k = 1.247;
    for(int step = n - 1; step <= 1; step /= k)
    {
        int i = 0;
        for(i = 0; i < n - step; i++)//проверить не i>n-step ли правильно будет
        {
            if(array[i] > array[i + step])
            {
                swap(array[i], array[i + 1]);
            }
        }
    }
    
    for(int i = 0; i <= n - 1; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
	int select, n, k, i;
	cout << "write numbers of elements in array" << endl;
	cin >> n;
	int array[n];//указываем размер для массива
	
	cout << "enter the array elements sequentially" << endl;
	for(k = 0; k < n; k++)
	{
		cin >> array[k];
	}
	
	cout << "choose algorithm version 1 - while. 2 - for\n" << endl;
	cin >> select;
	
	switch(select)
	{
		case 1:
			combsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Array sorted while" << endl;
			break;
		case 2:
			forcombsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Array sorted for" << endl;
			break;
		default:
            cout << "invalid value";
            return 0;
			break;
	}
	
	for(i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    
    return 0;
}