#include <stdio.h>

main() {
	long long int login, password;
	printf("Enter your login and then password\nlogin");
	scanf("%lli", &login);
	printf("password");
	scanf("%lli", &password);
	if((login==1988 && password==2017) || (login==2000 && password==2021)) {
		printf("Log In successfully, welcome");
	}
	else {
		printf("Log In failed, try again");
	}
}
