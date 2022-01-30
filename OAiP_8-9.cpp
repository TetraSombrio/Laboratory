#include <iostream>
using namespace std;

void insertsort(int n, int array[])
{
    int i, j, x;
    
	for(i = 0; i < n; i++)
	{
		x = array[i];
		j = i;
		while((j > 0) and (array[j - 1] > x))
		{
			array[j] = array[j - 1];
			j--;	
		}
		array[j] = x;
	}
}

void forinsertsort(int n, int array[])
{
    int i, j, x;
    
	for(i = 0; i < n; i++)
	{
		for(j = i, x = array[i]; (j > 0) and (x < array[j - 1]); j--)
		{
			array[j] = array[j - 1];
		}
		array[j] = x;
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
			insertsort(n, array);
			cout << "Array sorted while" << endl;
			break;
		case 2:
			forinsertsort(n, array);
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