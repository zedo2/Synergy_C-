#include <iostream>
 
using namespace std;
 
int main() {
 
	int arr[100];
 
	int n = 0;
	cout << "Entry quantity elements :";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
	    cout << "Entry element [ " << i + 1 << " ] = ";
	    cin >> arr[i];
	}
 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
		  if (arr[j] > arr[j + 1]) {
		    int b = arr[j];
		    arr[j] = arr[j + 1];
		    arr[j + 1] = b;
		  }
		}
	}
	
	for (int i = 0; i < n; i++)
	{
	    cout << arr[i];
	    printf(" ");
	}
}
