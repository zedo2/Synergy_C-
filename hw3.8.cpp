#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 0;
    cout << "Введите количество елементов :";
    cin >> n;
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "Введите елемент [ " << i + 1 << " ] = ";
        cin >> arr[i];
    }
 
    int minimal = arr[0];
    int maximum = arr[0];
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimal)
        {
            minimal = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        sum += arr[i];
    }
 
    cout << "Максимум = " << maximum << '\n';
    cout << "Минимум = " << minimal << '\n';
    cout << "Сумма всех елементов = " << sum << '\n';
    cout << "Середнее арифметическое = " << sum / n << '\n';
 
    delete[] arr;
}

