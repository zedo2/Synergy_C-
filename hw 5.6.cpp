#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;
 
int main() {
	const int MIN_VALUE = -9;
  	const int MAX_VALUE = 9;
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
	
	cout << "vash massiv do sortirovki :" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl << endl;
	}
	
	for (int i = 0; i < N; ++i)
	{
		int temp;
	    for (int j = 0; j < M; ++j)
	    {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N-1; j++) {
				  if (A[i][j] > A[i][j + 1]) {
				    int b = A[i][j];
				    A[i][j] = A[i][j + 1];
				    A[i][j + 1] = b;
				  }
				}
			}
	    }
	}	 
	
	cout << "vash massiv otsortirovan:" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl;
	}
	
	for(int i = 0; i < N; ++i) {
		delete[] A[i];
	}
	
	delete[] A;
	
	
	int X, Z;
    cout<<"vvedite razmery (2 chisla) : ";
    cin >> X >> Z;
    int ** B = new int * [X];
    for (int i = 0; i < X; i++) {
    	B [i] = new int [Z];
	}
	
    for (int i = 0; i < X; i++) {
		for (int j = 0; j < Z; j++) {
	    	B[i][j] = (MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1));
		}
	}
	
	cout << "vash massiv do :" << endl << endl;
	for (int i = 0; i < X; i++) {
	    for(int j = 0; j < Z; j++) {
	    	cout << B[i][j] << " ";
		}
	    cout << endl << endl;
	}
	
	for (int i = 0; i < X; ++i)
	{
		int temp2;
	    for (int j = 0; j < Z; ++j)
	    {
			if(i == j) {
				temp2 = B[i][0];
				B[i][0] = B[i][2];
				B[i][2] = temp2;
			}
	    }
	}
	
	cout << "vash massiv posle :" << endl << endl;
	for (int i = 0; i < X; i++) {
	    for(int j = 0; j < Z; j++) {
	    	cout << B[i][j] << " ";
		}
	    cout << endl << endl;
	}
	
	for(int i = 0; i < X; ++i) {
		delete[] B[i];
	}
	
	delete[] B;
}
