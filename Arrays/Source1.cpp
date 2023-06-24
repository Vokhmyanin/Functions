#include<iostream>
using namespace std;


void FillRand (int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);


void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Sum(const int arr[], const int n);
double Sum(const double  arr[], const int n);
char Sum(char  arr[], const int n);

double Average(const int arr[], const int n);
double Average(double const arr[], const int n);
double Average(char arr[], const int n);

int Min(int arr[], const int n);
double Min(const double arr[], const int n);
char Min(char arr[], const int n);

int Max(int arr[], const int n);
double Max(const double arr[], const int n);
char Max(char arr[], const int n);

void Left(int arr[], const int n);
void Left(double arr[], const int n);
void Left(char arr[], const int n);

void Right(int arr[],const int n);
void Right(double arr[], const int n);
void Right(char arr[], const int n);

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
	Left(arr, n);
	Print(arr, n); cout << endl;
	Right(arr, n);
	Print(arr, n); cout << endl;

	

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<"\t";
	}
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
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
void Sort(double arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				double buf = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = buf;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				char buf = arr[i];
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
double Sum(double const arr[], const int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	return summ;
}
char Sum(char  arr[], const int n)
{
	char summ = 0;
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
double Average(const double arr[], const int n)
{
	double avg = Sum(arr, n) / n;
	return (double)avg;
}
double Average(char arr[], const int n)
{
	double avg = Sum(arr, n) / n;
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
double Min(const double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char Min(char arr[], const int n)
{
	char min = arr[0];
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
double Max(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char Max(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void Left(int arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите значение для сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

}
void Left(double arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите значение для сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Left(char arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите значение для сдвига влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Right(int arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите значение для сдвига вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void Right(double arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите значение для сдвига вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
		void Right(char arr[], const int n)
		{
			int number_of_shifts;
			cout << "Введите значение для сдвига вправо: "; cin >> number_of_shifts;
			for (int i = 0; i < number_of_shifts; i++)
			{
				char buffer = arr[n - 1];
				for (int i = n - 1; i > 0; i--)
				{
					arr[i] = arr[i - 1];
				}
				arr[0] = buffer;
		}
}