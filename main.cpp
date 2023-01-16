#include <stdio.h>

main() {
	int a, b;

	printf("vvedite 1 chislo");
	scanf("%i", &a);
	printf("vvedite 2 chislo:");
	scanf("%i", &b);

	if(a>b) {
		printf("bolshe");
	}
	else {
		if(a<b) {
			printf("menshe");
		}
		else {
			printf("ravny");
		}
	}
}
