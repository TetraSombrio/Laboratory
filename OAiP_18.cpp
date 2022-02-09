#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

void bubblesort(long int n, long int array[])
{
	long int tmp, i;
	
	while(i < (n - 1))
    {
        i++;
        for(int j = 0; j < n - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

void combsort(long int n, long int array[])
{
    float k = 1.247;
    long int step = n - 1;
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
}

void insertsort(long int n, long int array[])//?
{
    long int i, j, x;
    
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

void shellsort(long int n, long int array[])
{
    long int i, j, tmp, d;
    
	d = n / 2;
	
	while(d > 0)
	{
		i = d;
		while(i < n)
		{
			tmp = array[i];
			j = i;
			while(j >= d)
			{
				if(tmp < array[j - d])
				{
					array[j] = array[j - d];
					j = j - d;
				}
				else break;
			}
			array[j] = tmp;
			i++;
		}
		d = d / 2;
	}
}


void selectionsort(long int n, long int array[])//+
{
    long int i, j, tmp, min;
	
	while(i < n - 1)
	{
		j = i + 1;
		min = i;
		while(j < n)
		{
			if(array[j] < array[min])
			{
				min = j;
				j++;
			}
		}
		swap(array[i], array[min]);
		i++;
	}
}

void gnumsort(long int n, long int array[])//+
{
    long int i, j, tmp;
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
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			i--;
		}
			if(i > 0) 
				continue;
		i = j++;
	}
}

void quicksort(long int array[], int b, int e)
{
	long int tmp, i, j, pivot;
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
	long int select, n, k, i, randovalue = 1, tmprand;
	//float starttimer, endtimer;
	//float start, end;
	
	cout << "write numbers of elements in array" << endl;
	cin >> n;
	long int array[n];
	if(n <= 0)
	{
		cout << "invalid value" << endl;
		return 1;
	}
	
	int e2 = n - 1;//значение для quick sort

	srand(randovalue);
	
	for(k = 0; k < n; k++)//заполняет рандомными числами массив
	{
		tmprand = 1 + rand() % 65536;//рандомное число до 65536
		randovalue++;
		array[k] = tmprand;
	}
	
	auto start = std::chrono::steady_clock::now();
	bubblesort(n, array);
	auto end = std::chrono::steady_clock::now();
	auto elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "bubble sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	combsort(n, array);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "comb sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	insertsort(n, array);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "insert sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	shellsort(n, array);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "shell sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	selectionsort(n, array);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "selection sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	gnumsort(n, array);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "gnome sort compete for " << elapsed_ns.count() << " ms\n";
	
	for(k = 0; k < n; k++)//перезаполнение массива для другой сортировки
	{
		tmprand = 1 + rand();//рандомное число
		randovalue++;
		array[k] = tmprand;
	}
	
	start = std::chrono::steady_clock::now();
	quicksort(array, 0, e2);
	end = std::chrono::steady_clock::now();
	elapsed_ns = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout << "quick sort compete for " << elapsed_ns.count() << " ms\n";
	
	/*//вывод массива отправленного на сортировку
	for(i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    */
    return 0;
}
