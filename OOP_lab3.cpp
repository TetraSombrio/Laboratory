#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

struct Date
{
	int day, mount, year;

	void enterDate()
	{
		unsigned int place;
		string r, proc;


		cout << "write date in formate(dd/mm/yyyy)" << endl;
		cin >> r;
		int i = 0;


		while (i < 2)
		{
			place = r.find("/");//находим местоположение "/"
			if (i == place)//если дошли до номера этого символа, то выйти из цикла
			{
				break;
			}
			else
				proc += r[i];//записываем символы до знака дроби в "a"
			i++;
		}
		day = stoi(proc);//конвертируем string в int

		proc = "";
		int k = i + 1;
		int im = 0;
		while (k < 5)
		{
			place = r.find("/");//находим местоположение "/"
			if (k == place)//если дошли до номера этого символа, то выйти из цикла
			{
				break;
			}
			else
				proc += r[k];//записываем символы до знака дроби в "a"
			im++;
			k++;
		}
		mount = stoi(proc);

		proc = "";
		for (int ij = k + 1; ij < k + 1 + 4; ij++)//считываем оставшиеся символы
		{
			proc += r[ij];//записываем символы после знака дроби в "b"
		}
		year = stoi(proc);//конвертируем string в int
	}
	
	void printDate()
	{
		cout << day << "/" << mount << "/" << year << endl;
	}
};

struct Employee
{
	int ID;
	float stipend;
	enum etype {laborer, secretary, manager, accoutant, executive, researcher};
	Date empdate;

	void printInfo()
	{
		cout << "ID: " << ID << endl;
		cout << "Stipend: " << stipend << endl;
		cout << "Post: " << etype() << endl;
		cout << "Date of employment: "; empdate.printDate(); cout << endl;//требуется встроенный метод вывода такого типа данных
	}

	void enterDate_p()
	{
		empdate.enterDate();
	}

	string typesearch(int n)
	{
		switch (n)
		{
		default:
			return "error: invalid value of type number";
		case 0:
			return "laborer";
		case 1:
			return "secretary";
		case 2:
			return "manager";
		case 3:
			return "accoutant";
		case 4:
			return "executive";
		case 5:
			return "researcher";
		}
	}

	string strtypesearch(string n)
	{
		if ("l" == n)
			return "laborer";
		else if ("s" == n)
			return "secretary";
		else if ("m" == n)
			return "manager";
		else if ("a" == n)
			return "accoutant";
		else if ("e" == n)
			return "executive";
		else if ("r" == n)
			return "researcher";
		else
			return "\0";
	}
};

Employee worker1;
Employee worker2;
Employee worker3;

void f4()
{
	//int count;

	cout << "Worker 1" << endl;
	cout << "write worker ID" << endl;
	cin >> worker1.ID;
	cout << "write worker stipend" << endl;
	cin >> worker1.stipend;
	system("cls");

	cout << "Worker 2" << endl;
	cout << "write worker ID" << endl;
	cin >> worker2.ID;
	cout << "write worker stipend" << endl;
	cin >> worker2.stipend;
	system("cls");

	cout << "Worker 3" << endl;
	cout << "write worker ID" << endl;
	cin >> worker3.ID;
	cout << "write worker stipend" << endl;
	cin >> worker3.stipend;
	system("cls");

	worker1.printInfo();
	worker2.printInfo();
	worker3.printInfo();
}

void f5()
{
	Date Date;

	Date.enterDate();
	Date.printDate();
}

void f6()
{
	string r;
	cout << "write first sign in post name" << endl; cin >> setw(1) >> r;//даем только ввести 1 символ
	
	if (worker1.strtypesearch(r) == "\0")
	{
		if (worker2.strtypesearch(r) == "\0")
		{
			worker3.strtypesearch(r);
			cout << worker3.strtypesearch(r) << endl;
		}
		else 
		{
			cout << worker2.strtypesearch(r) << endl;
		}
	}
	else
	{
		cout << worker1.strtypesearch(r) << endl;
	}
}

void f7()
{
	int w1_prom, w2_prom, w3_prom;
	cout << "write worker1 type number" << endl;
	cin >> w1_prom;
	cout << "write worker2 type number" << endl;
	cin >> w2_prom;
	cout << "write worker3 type number" << endl;
	cin >> w3_prom;

}

struct Fraction
{
	int denominator, numerator;

	string printthis()
	{
		return (denominator + "/" + numerator);
	}
};

void f8()
{
	Fraction fr1, fr2;

	double re = 0;
	unsigned int place;
	string r, selector, proc;


	cout << "write first drob" << endl;
	cin >> r;
	int i = 0;


	while (1>0)
	{
		place = r.find("/");//находим местоположение "/"
		if (i == place)//если дошли до этого символа, то выйти из цикла
		{
			break;
		}
		else
			proc += r[i];//записываем символы до знака дроби в "a"
			i++;
	}
	fr1.denominator = stoi(proc);//конвертируем string в int

	proc = "";
	for (int k = i+1; k < r.length(); k++)//считываем оставшиеся символы
	{
		proc += r[k];//записываем символы после знака дроби в "b"
	}
	fr1.numerator = stoi(proc);


	cout << "write second drob" << endl;
	cin >> r;
	int ij = 0;
	proc = "";

	while (1 > 0)
	{
		place = r.find("/");//находим местоположение "/"
		if (ij == place)
		{
			break;
		}
		else
			proc += r[ij];//записываем символы до знака дроби в "a"
		ij++;
	}
	fr2.denominator = stoi(proc);

	proc = "";
	for (int k = ij+1; k < r.length(); k++)//считываем оставшиеся символы
	{
		proc += r[k];//записываем символы после знака дроби в "d"
	}
	fr2.numerator = stoi(proc);

	cout << "select math operand" << endl;
	cin >> selector;

	if (selector == "+")
	{
		re = ((fr1.denominator * fr2.numerator) + (fr1.numerator * fr2.denominator)) / (fr1.numerator * fr2.numerator);
		cout << re << endl;
	}
	else if (selector == "-")
	{
		re = ((fr1.denominator * fr2.numerator) - (fr1.numerator * fr2.denominator)) / (fr1.numerator * fr2.numerator);
		cout << re << endl;
	}
	else if (selector == "*")
	{
		re = (fr1.denominator * fr2.denominator) / (fr1.numerator * fr2.numerator);
		cout << re << endl;
	}
	else if (selector == "/")
	{
		re = (fr1.denominator / fr2.numerator) / (fr1.numerator * fr2.denominator);
		cout << re << endl;
	}
}

struct Time
{
	int seconds, minutes, hours;
	long totalsecs;

	void enterValues()
	{
		cout << "write time values in format 22:58:14(h m s)" << endl;
		cin >> hours >> minutes >> seconds;
		calcValues();
	}

	/*int toSeconds()
	{

	}*/

	void printTotalSec()
	{
		totalsecs = hours * 3600 + minutes * 60 + seconds;
		cout << totalsecs << endl;
	}

private:
	void calcValues()
	{
		int prom;
		if (seconds > 60)
		{
			prom = seconds / 60;
			minutes += prom;
			seconds % 60;
		}
		prom = 0;
		if (minutes > 60)
		{
			prom = minutes / 60;
			hours += prom;
			minutes % 60;
		}
	}
};

void f9()
{
	Time t1;
	t1.enterValues();
	t1.printTotalSec();
}

class ParsTool
{
private:
    string s;
    string ctch;
public:
    string rs;
    /*
    bool isStringWithInt(string s)
    {
        if()
    }
    */
    int inToString(string s)
    {
        int r;
        r = stoi(s);
        return r;
    }

    string tryInToString(string s)
    {
        try
        {
            rs = stoi(s);
        }
        catch (...)
        {
            return ctch;//как нибудь записать сюда ошибку
        }
        return rs;
    }
};

struct Sterling
{
private:
	int pound;
	int shillings;
	int penny;

	int pound2;
	int shillings2;
	int penny2;

	void calcPoundAndShilligs()
	{
		if (penny > 11)
		{
			penny -= 12;
			++shillings;
		}
		if (shillings > 19)
		{
			shillings -= 20;
			++pound;
		}
	}

public:
	void printValues()
	{
		cout << pound << "." << shillings << "." << penny << endl;
	}

	void sumValues(int value_pound1, int value_shillings1, int value_penny1, int value_pound2, int value_shillings2, int value_penny2)
	{
		pound = value_pound1 + value_pound2; // инициализация фунта
		shillings = value_shillings1 + value_shillings2; // инициализация шиллингов
		penny = value_penny1 + value_penny2; // инициализация пенни
		calcPoundAndShilligs();
	}
	void subValues(int value_pound1, int value_shillings1, int value_penny1, int value_pound2, int value_shillings2, int value_penny2)
	{
		pound = value_pound1 - value_pound2; // инициализация фунта
		shillings = value_shillings1 - value_shillings2; // инициализация шиллингов
		penny = value_penny1 - value_penny2; // инициализация пенни
		calcPoundAndShilligs();
	}
	void multValues(int value_pound1, int value_shillings1, int value_penny1, int mnoj)
	{
		pound = value_pound1 * mnoj; // инициализация фунта
		shillings = value_shillings1 * mnoj; // инициализация шиллингов
		penny = value_penny1 * mnoj; // инициализация пенни
		calcPoundAndShilligs();
	}

	void calc()
	{
		cout << "write " << endl;
		cin >> pound >> shillings >> penny;
		cout << "write " << endl;
		cin >> pound2 >> shillings2 >> penny2;

		int r;
		string r2;
		cout << "" << endl;
		cin >> r2;
		ParsTool parsetool;
		r = parsetool.inToString(r2);
		switch (r)
		{
		case 1:
			pound += pound2;
			shillings += shillings2;
			penny += penny2;
		case 2:
			pound -= pound2;
			shillings -= shillings2;
			penny -= penny2;
		case 3:
			pound *= pound2;
			shillings *= shillings2;
			penny *= penny2;
		case 4:
			pound /= pound2;
			shillings /= shillings2;
			penny /= penny2;
		}
		calcPoundAndShilligs();
		printValues();
	}
};

void f10()
{

}

void f11()
{
	Time tf1, tf2;

	tf1.enterValues();
	tf2.enterValues();
}

int main()
{
	//f4();
	//f5();
	f6();
	f7();
	f8();
	f9();

	f11();

	return 0;
}