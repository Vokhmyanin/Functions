#include<iostream>
using namespace std;
/*int Add(int a, int b);  //�������� ������� (���������� �������-function declaration
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
//Default arguments, default parameters
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b); //�����, ��� ������������� �-� (function call)
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a,b) << endl;
	cout << a << "*" << b << "=" << Mul(a,b) << endl;
	cout << a << "/" << b << "=" << Div(a,b) << endl;
	

}
int Add(int a, int b) //Add -�������� (���������� �������-function definition
{
	int c = a + b;
	return c;
}
int Sub(int a, int b) //Subtraction -���������
{
	return a-b;
}
int Mul(int a, int b) //Multiplication -���������
{
	return a * b;
}
 double Div(int a, int b) //Division -�������
{
	return (double)a / b;
}
 */
int Power(int a, int n);
int Factorial(int a); 
int b = 1;
int f = 1;
int j = 1;

void main()
{
	setlocale(LC_ALL, "");
    int a, n;
	cout << "������� �����: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " " << "� �������  " << n << " ����� " << Power(a,n) << endl;
	cout << "��������� ����� " << a << " ����� " << Factorial(a);
}
int Power(int a, int n)
{
	for (int i = 1; i < n; i++)
	{
		b *= a;
	}
	return b*=a;
}
int Factorial(int a)
{
	for (int j = 1;	j <= a;	j++	)
	{
		f *= j;
	}
	return f;
}
