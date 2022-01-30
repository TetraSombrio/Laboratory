#include <iostream>
using namespace std;

void quicksort(int array[], int b, int e)
{
	int tmp, i, j, pivot;
	if(b < e)
	{
		i = b;
		j = e;
		pivot = array[(b + e) / 2];
	do
	{
		while(array[i] < pivot)
		i++;
		while(array[j] > pivot)
		j--;
		if(i <= j)
		{
			swap(array[i], array[j]);
			i++;
			j--;
		}
	} while(i <= j);
	quicksort(array, b, j);
	quicksort(array, i, e);
	}
}

int main()
{
	int select, n, k, i, e2;
	cout << "write numbers of elements in array" << endl;
	cin >> n;
	int array[n];//указываем размер для массива
	
	e2 = n - 1;
	
	cout << "enter the array elements sequentially" << endl;
	for(k = 0; k < n; k++)
	{
		cin >> array[k];
	}
	
	quicksort(array, 0, e2);
	
	for(i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    
    return 0;
}