#include<iostream>
using namespace std;
 
int main()
{
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
        
	cout << "vash massiv :" << endl << endl;
	for (int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	cout << A[i][j] << " ";
		}
	    cout << endl;
	}
}
