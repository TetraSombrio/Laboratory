#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;

/*
1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в 
диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в 
виде текста (например, «пятое января»).*/
void f1()//done
{
	int A, Ao, Ad;
	int ar[2];
	string resp1, resp2;
	cin >> A;
	
	if((A < 0) and (A > 32))
	{
		cout << "error" << endl;
		return;
	}
	
	Ao = A;
	for(int i = 0 ; i < 2; i++)
	{
		Ad = Ao;
		Ad %= 10;
		ar[i] = Ad % 10;
		Ao /= 10;
	}//cout << ar[1] << ar[0] << endl;// ввести 24 выдаст 24. Но посимвольно
	
	map <int, string> numbsmap;//здесь храним все числа "второго порядка"
	numbsmap[1] = "один";
	numbsmap[2] = "два";
	numbsmap[3] = "три";
	numbsmap[4] = "четыре";
	numbsmap[5] = "пять";
	numbsmap[6] = "шесть";
	numbsmap[7] = "семь";
	numbsmap[8] = "восемь";
	numbsmap[9] = "девять";
	numbsmap[10] = "десять";
	
	numbsmap[11] = "надцать";
	numbsmap[12] = "двенадцать";
	numbsmap[20] = "двадцать ";//а тут храним все числа "первого порядка"
	numbsmap[30] = "тридцать ";
	
	if(A == 10)
	{
		resp1 = "десять";
		cout << resp1 + resp2 << endl;
		return;
	}
	
	if(A == 12)
	{
		resp1 = numbsmap[12];
		cout << resp1 << endl;
		return;
	}
	
	if(ar[1] == 1)
	{
		resp1 = numbsmap[ar[0]];
		resp2 = numbsmap[11];
		cout << resp1 + resp2 << endl;
		return;
	}
	else resp2 = numbsmap[ar[0]];
	
	resp1 = numbsmap[ar[1] * 10];
	resp2 = numbsmap[ar[0]];
	
	cout << resp1 + resp2 << endl;
}

/*2. Робот может перемещаться в четырех направлениях («С» — север, 
«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 
0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. 
Дан символ C — исходное направление робота и целое число N — посланная 
ему команда. Вывести направление робота после выполнения полученной команды

Допустим, что в этом задании нужно было сделать перемещение по координатам
по командам. Тогда поле ограничено максимальными значениями переменной int,
а перемещение это просто инкремент по координатам. И поворот влево и вправо 
по командам.
*/
void f2()//done
{
	int movcom = 0;
	int c[2];
	
	cout << "введите начальные координаты робота. Сначала X а потом Y" << endl;
	cin >> c[0] >> c[1];// 0 - X; 1 - Y
	int forwardvectorrotation = 90;
	
	while((movcom < 2) and (movcom > -2))
	{
		cout << "введите команду" << endl;
		cin >> movcom;
		switch(movcom)
		{
			case 0:
				if((forwardvectorrotation % 360) == 90)
					c[1] += 1;
				else if((forwardvectorrotation % 360) == 270)
					c[1] -= 1;
				else if((forwardvectorrotation % 360) == 0)
					c[0] += 1;
				else if((forwardvectorrotation % 360) == 180)
					c[0] -= 1;
				
				system("cls");
				cout << "X coord = " << c[0] << endl << "Y coord = " << c[1] << endl;
				break;
			case 1:
				forwardvectorrotation -= 90;
				cout << forwardvectorrotation % 360 << endl;
				system("cls");
				cout << "X coord = " << c[0] << endl << "Y coord = " << c[1] << endl;
				break;
			case -1:
				forwardvectorrotation += 90;
				cout << forwardvectorrotation % 360 << endl;
				system("cls");
				cout << "X coord = " << c[0] << endl << "Y coord = " << c[1] << endl;
				break;
			default:
				break;
		}
	}
	cout << "Final coord is:" << endl;
	cout << "X = " << c[0] << endl << "Y = " << c[1] << endl;
}

/*3. Дано целое число в диапазоне 10–40, определяющее количество учебных 
заданий по некоторой теме. Вывести строку-описание указанного количества заданий, 
обеспечив правильное согласование числа со словами «учебное задание», 
например: 18 — «восемнадцать учебных заданий».

Суть решения такова - ответ это одна переменная типа string, которая составляется
из нескольких переменных - так число 42 будет состоять из слова "первого порядка" - 
десятка, в данном случае 'сорок' и "второго порядка", единиц - в данном случае 'два'.
В ответе получим 'сорок два'.
*/
void f3()//done
{
	int A, Ao, Ad;
	int ar[2];
	string resp1, resp2;
	cout << "введите кол-во учебных заданий" << endl;
	cin >> A;
	if((A < 10)and(A > 40)) return;
	
	Ao = A;
	for(int i = 0 ; i < 2; i++)
	{
		Ad = Ao;
		Ad %= 10;
		ar[i] = Ad % 10;
		Ao /= 10;
	}
	//cout << ar[1] << ar[0] << endl;// ввести 42 выдаст 42. Но посимвольно
	
	map <int, string> numbsmap;//здесь храним все числа "второго порядка"
	numbsmap[1] = "один";
	numbsmap[2] = "два";
	numbsmap[3] = "три";
	numbsmap[4] = "четыре";
	numbsmap[5] = "пять";
	numbsmap[6] = "шесть";
	numbsmap[7] = "семь";
	numbsmap[8] = "восемь";
	numbsmap[9] = "девять";
	
	
	if(A == 10)
	{
		resp1 = "десять";
		return;
	}
	else if(ar[1] == 1)
	{
		resp2 = "надцать";
	}
	else if(ar[1] == 2)
	{
		resp1 = "двадцать ";
	}
	else if(ar[1] == 3)
	{
		resp1 = "тридцать ";
	}
	else if(ar[1] == 4)
	{
		resp1 = "сорок";
		return;
	}
	
	if((A > 19)and(A < 40))
	{
		resp2 = numbsmap[ar[0]];
	}
	else if((A > 10)and(A < 20)and(A != 12))
	{
		resp1 = numbsmap[ar[0]];
	}
	else if(A == 40)
	{
		cout << resp1;
		return;
	}
	else if(A == 12)
	{
		resp1 = "две";
	}
	
	cout << resp1 + resp2 << "учебных заданий" << endl;
}

/*4. Дано целое число в диапазоне 100–999. Вывести строку-описание 
данного числа, например: 256 — «двести пятьдесят шесть», 814 — 
«восемьсот четырнадцать».
*/
void f4()//done
{
	int A, Ao, Ad;
	int ar[3];
	string resp1, resp2, resp3;
	cin >> A;
	
	if((A > 999) and (A < 100))
	{
		cout << "error" << endl;
		return;
	}
	
	Ao = A;
	for(int i = 0 ; i < 3; i++)
	{
		Ad = Ao;
		Ad %= 10;
		ar[i] = Ad % 10;
		Ao /= 10;
	}//cout << ar[2] << ar[1] << ar[0] << endl;// ввести 142 выдаст 142. Но посимвольно
	
	map <int, string> numbsmap;//здесь храним все числа "третьего порядка"
	numbsmap[1] = "один";
	numbsmap[2] = "два";
	numbsmap[3] = "три";
	numbsmap[4] = "четыре";
	numbsmap[5] = "пять";
	numbsmap[6] = "шесть";
	numbsmap[7] = "семь";
	numbsmap[8] = "восемь";
	numbsmap[9] = "девять";
	
	numbsmap[10] = "десять";
	numbsmap[11] = "надцать";
	numbsmap[12] = "двенадцать";
	numbsmap[20] = "двадцать ";//а тут храним все числа "второго порядка"
	numbsmap[30] = "тридцать ";
	numbsmap[40] = "сорок ";
	numbsmap[50] = "пятьдесят ";
	numbsmap[60] = "шестьдесят ";
	numbsmap[70] = "семьдесят ";
	numbsmap[80] = "восемьдесят ";
	numbsmap[90] = "девяносто ";
	
	numbsmap[100] = "сто ";//а тут храним все числа "первого порядка"
	numbsmap[200] = "двести ";
	numbsmap[300] = "триста ";
	numbsmap[400] = "четыреста ";
	numbsmap[500] = "пятьсот ";
	numbsmap[600] = "шестьсот ";
	numbsmap[700] = "семьсот ";
	numbsmap[800] = "восемьсот ";
	numbsmap[900] = "девятьсот ";
	
	resp1 = numbsmap[ar[2]*100];
	
	if((ar[1] == 1)and(ar[0] == 0))
	{
		resp2 = "десять";
		cout << resp1 + resp2 + resp3 << endl;
		return;
	}
	
	resp2 = numbsmap[ar[1]*10];
	
	if(ar[0] == 0)
	{
		resp3 = "";
	}
	else if((ar[1] == 1) and (ar[0] == 2))
	{
		resp2 = numbsmap[12];
		cout << resp1 + resp2 + resp3 << endl;
		return;
	}
	
	if(ar[1] == 1)
	{
		resp2 = numbsmap[ar[0]];
		resp3 = numbsmap[11];
	}
	else resp3 = numbsmap[ar[0]];
	
	cout << resp1 + resp2 + resp3 << endl;
}

/*5. В восточном календаре принят 60-летний цикл, состоящий из 12- 
летних подциклов, обозначаемых названиями цвета: зеленый, красный, 
желтый, белый и черный. В каждом подцикле годы носят названия 
животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, 
овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить 
его название, если 1984 год — начало цикла: «год зеленой крысы».*/
void f5()//done
{
	int currentyear = 2022, startyear = 1984, r1, r2;
	
	map <int, string> animap;
	animap[1] = " крыса";
	animap[2] = " корова";
	animap[3] = " тигр";
	animap[4] = " заяц";
	animap[5] = " дракон";
	animap[6] = " змея";
	animap[7] = " лошадь";
	animap[8] = " овца";
	animap[9] = " обезьяна";
	animap[10] = " курица";
	animap[11] = " собака";
	animap[12] = " свинья";
	
	map <int, string> colormap;
	colormap[1] = "зелёный";
	colormap[2] = "красный";
	colormap[3] = "жолтый";
	colormap[4] = "белый";
	colormap[5] = "черный";
	
	cout << "введите нужный год" << endl;
	cin >> currentyear;
	int dist = abs(currentyear - startyear);
	
	if((dist > 60)and(dist % 60 != 0))
	{
		dist %= dist;
	}
	else if(dist % 60 == 0)
	{
		cout << currentyear << " год по восточному календарю это год " << colormap[1] << animap[1] << endl;
		return;
	}
	
	r1 = dist % 12;
	r2 = dist / 12;
	if(r1 == 0)
		r1++;
	if(r2 == 0)
		r2++;
	
	cout << currentyear << " год по восточному календарю это год " << colormap[r2] << animap[r1] << endl;
}

int main()
{
	setlocale(LC_ALL, "russian");
	
	short r = 1;
	int i;
	
	while(i <= 5)
	{
		cout << "введите номер задания" << endl;
		cin >> r;
		switch(r)
		{
			default:
				//break;
				return 0;
				break;
			case 1:
				f1();
				continue;
				i++;
			case 2:
				f2();
				continue;
				i++;
			case 3:
				f3();
				continue;
				i++;
			case 4:
				f4();
				continue;
				i++;
			case 5:
				f5();
				continue;
				i++;
		}
	}
	system("pause");
}