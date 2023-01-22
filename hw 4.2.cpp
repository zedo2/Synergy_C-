#include <iostream>
 
using namespace std;
 
int main() { 
    int n = 0;
    cout << "Entry quantity elements :";
    cin >> n;
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "Entry element [ " << i + 1 << " ] = ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        printf(" ");
    }
}
