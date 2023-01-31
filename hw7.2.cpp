#include<iostream>
#include<stdlib.h>
#include <time.h>
#include "windows.h"

using namespace std;

void fillArray(int[], int n);
 
int main() {
	int arr[8];
	int array[6];	  
	fillArray(arr, 8);
	Sleep(1000);
	fillArray(array, 6);          
}

void fillArray(int a[], int n) {
	const int MIN_VALUE = -50;
  	const int MAX_VALUE = 50;
	srand(time(NULL));
       
    for (int i = 0; i < n; i++) {
	    	a[i] = (MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1));
	}
	
	cout << "\nvash massiv :" << endl << endl;
	for (int i = 0; i < n; i++) {
	   	cout << a[i] << " ";
	    cout << endl;
	}
}
