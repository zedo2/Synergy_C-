#include <iostream>
#include <stdlib.h>

using namespace std;

main() {
	for(int i=1; i<11; i++) {
		cout << i << ' ';
		printf("* na 5 = ");
		cout << i*5 << '\n';
	}
	
	int x=7;
	int y, i;
	
	do {
		cout << "vvedite chislo x\n";
		cin >> y;
	    if(x<y) {
	        cout << y << ' ';
	        printf(" bolshe chisla x\n");
		}
		if(x>y) {
	        cout << y << ' ';
	        printf(" menshe chisla x\n");
		}
		if(10<y) {
	        cout << y << ' ';
	        printf(" bolshe chisla 10\n");
		}
		if(10>y) {
	        cout << y << ' ';
	        printf(" menshe chisla 10\n");
		}
		if(y%2==0) {
	        cout << y << ' ';
	        printf(" chislo delitsya na 2\n");
		}
		if(y%3==0) {
	        cout << y << ' ';
	        printf(" chislo delitsya na 3\n");
		}
		if(x==y) {
			cout << y << ' ';
        	printf(" eto chislo x\ngame over");
        	exit(EXIT_SUCCESS);
		}
	}
	while(y!=x);
}

