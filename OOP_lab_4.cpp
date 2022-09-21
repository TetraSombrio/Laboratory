// OOP_lab_4.cpp

#include <iostream>
#include <string>
#define f5 hms_to_sec
#define пишыпорусски setlocale(LC_ALL,"Russian")

//---------------------------------задание-номер-5--------------------------------------
struct Time
{
public:
	int seconds, minutes, hours;
	long totalsecs;

	void enterValues()
	{
		std::cout << "write time values in format 22:58:14(h m s)" << std::endl;
		std::cin >> hours >> minutes >> seconds;
		calcValues();
	}

	long printTotalSec(Time t1)
	{
		totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
		std::cout << totalsecs << std::endl;
		return (totalsecs);
	}

	void totalsecToGlob(int totalsecs1)
	{
		int prom, prom2, pr;

		prom = totalsecs1 / 3600;
		prom2 = (totalsecs1 / 60) - prom * 60;//totalsecs/60 = h+m. Потому вычитаем из этого h в минутах
		pr = (totalsecs1 - prom * 60) - prom2;//тут та же схема, но вычитать нужно уже и минуты.
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

void f5()
{
	//int h, m, s;
	//long tot;
	int r;
	Time t1;

	std::cout << "select" << std::endl;
	std::cin >> r;
	switch (r)
	{
	default:
		break;
	case 0:
		std::cout << "write hours, minutes, seconds" << std::endl;
		std::cin >> t1.hours >> t1.minutes >> t1.seconds;
		t1.printTotalSec(t1);
	case 1:
		std::cout << "write totalseconds" << std::endl;
		std::cin >> t1.totalsecs;
		t1.totalsecToGlob(t1.totalsecs);
	}
}
//---------------------------------задание-номер-6--------------------------------------
void swap(int a, int b)
{
	auto c = a;
	a = b;
	b = c;
}

void swap(Time a, Time b)//проверить
{
	Time c = a;
	a = b;
	b = c;
}

void f6()
{
	Time l1, l2;
	l1.enterValues();
	l2.enterValues();

	swap(l1, l2);
	l1.printTotalSec(l1);
	l2.printTotalSec(l2);
}
//---------------------------------задание-номер-7--------------------------------------
double power(double n, int p)
{
	double result = 1.0;//начать с 1
	for (int j = 0; j < p; j++)//умножить на n
		result *= n;//p раз
	return result;
}

long power(long n, int p)
{
	long result = 1.0;//начать с 1
	for (int j = 0; j < p; j++)//умножить на n
		result *= n;//p раз
	return result;
}

int power(int n, int p)
{
	int result = 1.0;//начать с 1
	for (int j = 0; j < p; j++)//умножить на n
		result *= n;//p раз
	return result;
}

char power(char n, int p)
{
	char result = 1.0;//начать с 1
	for (int j = 0; j < p; j++)//умножить на n
		result *= n;//p раз
	return result;
}

void f7()
{
	int a, p;
	long b;
	char c;
	double n;

	std::cout << "последовательно введите несколько чисел" << std::endl;
	std::cin >> a >> b >> c >> n;
	std::cout << "выберите степень, в которую хотите возвести введённые числа" << std::endl;
	std::cin >> p;

	std::cout << power(a, p) << power(b, p) << power(c, p) << power(n, p) << std::endl;
}
//---------------------------------задание-номер-8-и-9----------------------------------
void f8(int a, int b)//swap for int
{
	int bufer = a;
	a = b;
	b = bufer;
}
void f9(Time a, Time b)//swap for time
{
	Time buf;
	buf.hours = a.hours;
	buf.minutes = a.minutes;
	buf.seconds = a.seconds;
	buf.totalsecs = a.totalsecs;

	a.hours = b.hours;
	a.minutes = b.minutes;
	a.seconds = b.seconds;
	a.totalsecs = b.totalsecs;

	b.hours = buf.hours;
	b.minutes = buf.minutes;
	b.seconds = buf.seconds;
	b.totalsecs = buf.totalsecs;
}

void f8u9()
{
	int a, b;
	std::cout << "введите числа для обмена значениями" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "a = " << a << "b = " << b << std::endl;
	f8(a, b);
	std::cout << "a = " << a << "b = " << b << std::endl;

	Time a1, b1;
	std::cout << "введите числа для обмена значениями" << std::endl;
	a1.enterValues();
	b1.enterValues();
	
	std::cout << "a = " << a1.printTotalSec(a1) << "b = " << b1.printTotalSec(b1) << std::endl;
	f9(a1, b1);
	std::cout << "a = " << a1.printTotalSec(a1) << "b = " << b1.printTotalSec(b1) << std::endl;
}
//---------------------------------задание-номер-10-------------------------------------
int i = 0;
int f10v1()
{
	i++;
	std::cout << i << std::endl;
	return i;
}

int f10v2(int n)
{
	static int cn = n;
	std::cout << n << std::endl;
	return n;
}

void f10main(int n)
{
	for (int i = 0; i < 10; i++)
	{
		f10v1();
		n++;
		std::cout << "\t\n" << f10v2(n) << "\n";
	}
}
//---------------------------------задание-номер-11-------------------------------------
struct sterling
{
private:
	int pound, shilling, penny;
public:
	sterling enterValues()
	{
		sterling st;
		std::cout << "последовательно введите значения фунтов, шиллингов и пенни" << std::endl;
		std::cin >> st.pound >> st.shilling >> st.penny;
		return st;
	}

	sterling fadd(sterling a, sterling b)
	{
		sterling c;
		c.pound = a.pound + b.pound;
		c.shilling = a.shilling + b.shilling;
		c.penny = a.penny + b.penny;
		return c;
	}

	sterling fsub(sterling a, sterling b)
	{
		sterling c;
		c.pound = a.pound - b.pound;
		c.shilling = a.shilling - b.shilling;
		c.penny = a.penny - b.penny;
		return c;
	}

	sterling fmul(sterling a, sterling b)
	{
		sterling c;
		c.pound = a.pound * b.pound;
		c.shilling = a.shilling * b.shilling;
		c.penny = a.penny * b.penny;
		return c;
	}

	sterling fdiv(sterling a, sterling b)
	{
		sterling c;
		c.pound = a.pound / b.pound;
		c.shilling = a.shilling / b.shilling;
		c.penny = a.penny / b.penny;
		return c;
	}

	void print()
	{
		std::cout << pound << "." << shilling << "." << penny << std::endl;
	}
};

void f11()
{
	sterling s1, s2, r;

	s1.enterValues();
	s2.enterValues();

	r.fadd(s1, s2);
	r.print();
}
//---------------------------------задание-номер-12-------------------------------------
struct Fraction
{
private:
	int numerator, denominator;//числитель, знаменатель
public:
	void enterValues()
	{
		std::cout << "введите числитель" << std::endl;
		std::cin >> numerator;

		std::cout << "введите знаменатель" << std::endl;
		std::cin >> denominator;
	}

	std::string printFrac()
	{
		return (denominator + "/" + numerator);
	}

	Fraction fsum(Fraction a, Fraction b)
	{
		Fraction c;
		c.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
		c.denominator = (a.denominator * b.denominator);
		return c;
	}

	Fraction fsub(Fraction a, Fraction b)
	{
		Fraction c;
		c.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
		c.denominator = (a.denominator * b.denominator);
		return c;
	}

	Fraction fmul(Fraction a, Fraction b)
	{
		Fraction c;
		c.numerator = (a.numerator * b.numerator);
		c.denominator = (a.denominator * b.denominator);
		return c;
	}

	Fraction fdiv(Fraction a, Fraction b)
	{
		Fraction c;
		c.numerator = (a.numerator * b.denominator);
		c.denominator = (a.denominator * b.numerator);
		return c;
	}
};

void f12()
{
	Fraction fr1, fr2, result;

	fr1.enterValues();
	fr2.enterValues();

	int s = 0;
	std::cout << "выберите одно из 4 действий с дробями: сложить, вычесть, умножить, поделить" << std::endl;
	std::cin >> s;

	switch (s)
	{
	default:
		result.fsum(fr1, fr2);
		break;
	case 2:
		result.fsub(fr1, fr2);
		break;
	case 3:
		result.fmul(fr1, fr2);
		break;
	case 4:
		result.fdiv(fr1, fr2);
		break;
	}
}

int main()
{
	пишыпорусски;

	std::cout << "задание-номер-5" << std::endl << std::endl;
    f5();

	std::cout << "задание-номер-6" << std::endl << std::endl;
    f6();

	std::cout << "задание-номер-7" << std::endl << std::endl;
    f7();

	std::cout << "задание-номер-8-и-9" << std::endl << std::endl;
	f8u9();

	std::cout << "задание-номер-10" << std::endl << std::endl;
	int n = 0;//global for f10
	f10main(n);

	std::cout << "задание-номер-11" << std::endl << std::endl;
	f11();

	std::cout << "задание-номер-12" << std::endl << std::endl;
	f12();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
