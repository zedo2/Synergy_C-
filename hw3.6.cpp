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
	        printf(" bolshe chisla x");
		}
		if(x>y) {
	        cout << y << ' ';
	        printf(" menshe chisla x");
		}
		if(x==y) {
			cout << y << ' ';
        	printf(" eto chislo x\ngame over");
        	exit(EXIT_SUCCESS);
		}
	}
	while(y!=x);
}

