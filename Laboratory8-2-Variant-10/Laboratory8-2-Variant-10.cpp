/*
#include <iostream>
#include "windows.h"
using namespace std;
const int n = 10;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[n], b, i, sum = 0, q = 0, min_i = 0,min = 0 ,max=0 ,max_i = 0, sum2 = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Введіть значення " << i << "-го елементу массиву\n";
        cin >> a[i];
        if (a[i] < 0)
        {
            sum = sum + a[i];
            q = q + 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0 && min == 0)
        {
            min_i = i;
            min = a[i];
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] >= 0 && max == 0)
        {
            max_i = i;
            max = a[i];
        }
    }
    for (i = min_i; i <= max_i; i++)
    {
        sum2 = a[i] + sum2;
    }
    if (max_i == min_i)
    {
        cout << "Масив має тільки 1 додатній елемент, або не має їх взагалі\n";
    }
    else
    {
        cout << "Перший додатній елемент массиву = " << min << " з індиксом " << min_i << endl;
        cout << "Останній додатній елемент массиву = " << max << " з індиксом " << max_i << endl;
        cout << "Сумма елементів між першим і останнім додатнім елементом = " << sum2 << endl;
    }
    cout << "Добуток від'ємних елементів массиву = " << sum << ". Їх кількість = " << q << endl;
    return 0;
}
*/

/*
#include <iostream>
#include "windows.h"
using namespace std;
const int n = 20;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[n], i, b, max=0;
    for (i = 0; i < n; i++)
    {
        cout << "Введіть значення " << i << "-го елементу массиву\n";
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
        if (a[i] <= max)
        {
            for (b = 0; b < i; b++)
            {
                a[b] = max;
                a[i] = a[b];
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << endl;
}
*/
