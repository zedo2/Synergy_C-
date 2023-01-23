#include<iostream>
#include<stdlib.h>

using namespace std;
 
int main() {
	
	int N, M;
    cout<<"vvedite razmery (2 chisla) : ";
    cin >> N >> M;
    int ** A = new int * [N];
    for (int i = 0; i < N; i++) {
    	A [i] = new int [M];
	}
       
    for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M; j++) {
	    	cout << "Entry element [ " << i + 1 << " ] [ "<< j + 1 << " ] = ";
		    cin >> A[i][j];
		}
	}  
	
	cout << "vash massiv do inversii :" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl;
	}
	
	for (int i = 0; i < N; ++i)
	{
		int temp;
	    for (int j = 0; j < M; ++j)
	    {
			if(i == j) {
		      	continue;
			}
			if(i < j) {
				temp = A[i][j];
				A[i][j] = A[j][i];
				A[j][i] = temp;
			}
	    }
	}	               
        
	cout << "vash massiv posle inversii :" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl;
	}
}
