#include<iostream>
using namespace std;
void FillRand (int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(const int arr[], const int n);
double Average(const int arr[], const int n);
int Min(int arr[], const int n);
int Max(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n); cout << endl;
	Sort(arr, n);
	Print(arr, n); cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Average(arr, n) << endl;
	cout << "Минимальное значение в массиве : " << Min(arr, n) << endl;
	cout << "Максимальное значение в массиве : " << Max(arr, n) << endl;

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<"\t";
	}
}
void Sort(int arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}
int Sum(const int arr[], const int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Average(const int arr[], const int n)
{
	double avg = Sum(arr,n) / n;
	return (double)avg;
}
int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int Max(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}