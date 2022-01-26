#include <iostream>
using namespace std;

void selectionsort(int n, int array[])//workin
{
    int i, j, tmp, min;
	
	while(i < n - 1)
	{
		j = i + 1;
		min = i;
		while(j < n)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
			j++;
		}
		swap(array[min], array[i]);
		i++;
	}
}

void forselectionsort(int n, int array[])
{
    int i, j, tmp, min;
	
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		swap(array[min], array[i]);
	}
}

int main()
{
	int selector, n, k, i;
	cout << "write numbers of elements in array" << endl;
	cin >> n;
	int array[n];//указываем размер для массива
	
	cout << "enter the array elements sequentially" << endl;
	for(k = 0; k < n; k++)
	{
		cin >> array[k];
	}
	
	cout << "choose algorithm version 1 - while. 2 - for\n" << endl;
	cin >> selector;
	
	switch(selector)
	{
		case 1:
			selectionsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Array sorted" << endl;
			for(i = 0; i < n; i++)
            {
                cout << array[i] << "\t";
            }
			break;
		case 2:
			forselectionsort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Array sorted" << endl;
			for(i = 0; i < n; i++)
            {
                cout << array[i] << "\t";
            }
			break;
		default:
			break;
	}
}