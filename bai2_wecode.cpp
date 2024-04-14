#include <iostream>
using namespace std;

int check_prime(int x)
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

void xuat_nto(int n)
{
    int count = 0;
    int i = 2;
    while (count != n)
    {
        if (check_prime(i) == 1)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main()
{
    int *n;
    n = new int;
    cin >> *n;
    xuat_nto(*n);
    delete n;
    return 0;
}