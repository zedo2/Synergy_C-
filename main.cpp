#include <iostream>

main() {
	for(int i=0; i<9; i++) {
		printf("Hello\n");
	}
	
	for (int i = 0; i < 15; i++) {
 		std::cout << i << ' ';
 	}
	printf("\n");
	
 	for (int i = 0; i < 15; i++) {
        if(i%2) {
        	std::cout << i << ' ';
		}
    }
    printf("nechetnie chisla\n");
    
    int sum=0;
    for(int i=5; i<16; i++) {
		sum+=i;
	}
	printf("Summa chisel ot 5 do 15 = ");
	std::cout << sum << ' ';
	printf("\n");
}

