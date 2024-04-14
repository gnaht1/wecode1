/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 100

void PrimeArrayInput(int *a, int &n);
int NOEContainsY(int *a, int n, int y);

// ###INSERT CODE HERE -
bool isPrime(int x)
{
	if (x < 2)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i < x; ++i)
		{
			if (x % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}

void PrimeArrayInput(int *a, int &n)
{
	cin >> n;
	int count = 0;
	int num = 2;
	while (count < n)
	{
		if (isPrime(num))
		{
			a[count++] = num;
		}
		num++;
	}
}

int NOEContainsY(int *a, int n, int y)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int num = a[i];
		while (num > 0)
		{
			if (num % 10 == y)
			{
				count++;
				break;
			}
			num /= 10;
		}
	}
	return count;
}

int main()
{
	int a[MAX], n, y;
	cin >> y;
	PrimeArrayInput(a, n);
	cout << NOEContainsY(a, n, y);
	return 0;
}