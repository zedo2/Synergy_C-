#include <iostream>
 
using namespace std;
 
int main() { 
    int array[7];
 
    for (int i = 0; i < 7; i++)
    {
        cout << "Entry element [ " << i + 1 << " ] = ";
        cin >> array[i];
    }
    
    for (int j = 0; j < 7; j++)
    {
        cout << array[j] ;
        printf(" ");
    }
    
    int n = 0;
    cout << "Entry quantity elements :";
    cin >> n;
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "Entry element [ " << i + 1 << " ] = ";
        cin >> arr[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] ;
        printf(" ");
    }
    delete[] arr;
}
