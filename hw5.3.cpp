#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
 
int main() {
	const int MIN_VALUE = -2;
  	const int MAX_VALUE = 7;
	srand(time(NULL));
	
	int N, M;
    cout<<"vvedite razmery (2 chisla) : ";
    cin >> N >> M;
    int ** A = new int * [N];
    for (int i = 0; i < N; i++) {
    	A [i] = new int [M];
	}
       
    for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M; j++) {
	    	A [i][j] = (MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1));
		}
	}
	
	cout << "vash massiv :" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl;
	}	               
}
