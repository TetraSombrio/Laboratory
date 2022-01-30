#include <iostream>
using namespace std;

void gnumesort(int n, int array[])
{
    int i, j, tmp;
    i = 1;
    j = 2;
	
	while(i < n)
	{
		
		if(array[i] >= array[i - 1])
		{
			i++;
		}
		else
		{
			swap(array[i], array[i - 1]);
			i--;
		}
			if(i > 0)
				continue;
		i = j++;
	}
}

void forgnumesort(int n, int array[])
{
    int i, j, tmp;
	j = 2;
	
	for(i = 1; i <= n; i += 0)
	{
		if(array[i] >= array[i - 1])
		{
			i++;
		}
		else
		{
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			i--;
		}
			if(i == 0) 
				i = 1;
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
			gnumesort(n, array);
			system("clear");//чистим консоль в Linux, это только для онлайн-компилятора нужно
			cout << "Array sorted while" << endl;
			break;
		case 2:
			forgnumesort(n, array);
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