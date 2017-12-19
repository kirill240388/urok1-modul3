#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cin >> task;
	if (task == 1)
		/*/1.	Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента
		(часы h, минуты m и секунды s) и возвращает количество секунд, прошедших с начала дня. */
	{
		int h, m, s,ss;
		cin >> h;
		cin >> m;
		cin >> s;
		ss = h * 3600 + m * 60 + s;
		cout << ss << endl;

	}
	if (task == 2)
		/*/2.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d)
		и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней.*/
	{
		int m, d, dd;
		cin >> m;
		cin >> d;
		dd = m * 30 + d;
		if (m < 12 && d < 30)
		{			cout << dd << endl;
		}
		else
			cout << "wrong" << endl;

	}
	if (task == 3)
		/*/3.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d)
		и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней,
		а год не високосный.*/
	{
		int m, d, dd;
		cin >> m;
		cin >> d;
		dd = m * 30 + d;
		if (m < 12 && d < 30)
		{
			cout << dd << endl;
		}
		else
			cout << "wrong" << endl;

	}
	if (task == 4)
		/*/4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую и последнюю цифры двузначного
		натурального числа N.*/
	{
		int m1, m2, n;
		cin >> n;
		m1 = n / 10;
		m2 = n % 10;
		cout << m1 << endl;
		cout << m2 << endl;

	}
	if (task == 5)
		/*/5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора
		трех целых чисел. Используйте условный оператор if*/

	{
		int x, y, z,m;
		cin >> x;
		cin >> y;
		cin >> z;
		m=min(min(x, y), z);
		cout << m << endl;

	}
	if (task == 6)
		/*/6.	Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число
		первому*/
	{
		int m, n;
		cin >> m;
		cin >> n;
		if (n%m == 0)
			cout << "kratno" << endl;
		else
			cout << "ne kratno" << endl;

	}



		system("pause");
	return 0;
}