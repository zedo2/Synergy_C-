#include<iostream>

using namespace std;

int squareInt(int);
int squareInt(int);
int squareInt(int*);
 
int main() {
	int arr[10];
	cout << "vvedite chisla \n";
	for(int i=0;i<3;i++) {
		cout << "vvedite " << i + 1 << " chislo ";
		cin >> arr[i];	  
	}
	int n = arr[1];
	int &nRef = n;
	int t = arr[2];
	
	squareInt(arr[0]);
	squareInt(nRef);
	squareInt(t);
	
	return 1;    
}

int squareInt(int n) {
	if (n == 0) {
		printf("nol ne podhodit");
	} 
	int i2=0;
    for(int i = 2; i2 < n; i++) {  
        i2 = i * i;
        if(i2 == n){
        	cout << n << " - da, eto koren celogo chisla " << n / i << "\n";
		} 
		if(i2 > n) {
			cout << n << " - net, eto ne koren celogo chisla\n";
		}		
	}
	
}

int squareInt(int *n) {
	if (n == 0) {
		printf("nol ne podhodit");
	} 
	int i2=0;
    for(int i = 2; i2 < *n; i++) {  
        i2 = i * i;
        if(i2 == *n){
        	cout << n << " - da, eto koren celogo chisla " << *n / i << "\n";
		} 
		if(i2 > *n) {
		cout << n << " - net, eto ne koren celogo chisla\n";
		}		
	}
	return *n;
}
