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
		/*/1.	�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ���������
		(���� h, ������ m � ������� s) � ���������� ���������� ������, ��������� � ������ ���. */
	{
		int h, m, s,ss;
		cin >> h;
		cin >> m;
		cin >> s;
		ss = h * 3600 + m * 60 + s;
		cout << ss << endl;

	}
	if (task == 2)
		/*/2.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d)
		� ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ����.*/
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
		/*/3.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d)
		� ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����,
		� ��� �� ����������.*/
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
		/*/4.	�������� ������� f(int& m1, int& m0, int N), ������� ���������� ������ � ��������� ����� �����������
		������������ ����� N.*/
	{
		int m1, m2, n;
		cin >> n;
		m1 = n / 10;
		m2 = n % 10;
		cout << m1 << endl;
		cout << m2 << endl;

	}
	if (task == 5)
		/*/5.	�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������
		���� ����� �����. ����������� �������� �������� if*/

	{
		int x, y, z,m;
		cin >> x;
		cin >> y;
		cin >> z;
		m=min(min(x, y), z);
		cout << m << endl;

	}
	if (task == 6)
		/*/6.	�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ �����
		�������*/
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