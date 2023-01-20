#include <stdio.h>

main() {
	int day, month, year;
	printf("Enter the number of the day your birthday  ");
	scanf("%i", &day);
	printf("Enter the number of the month your birthday  ");
	scanf("%i", &month);
	printf("Enter the number of the year your birthday  ");
	scanf("%i", &year);
	
	if(year%4==0) {
		printf("Vash god visokosniy i ");
	}
	else {
		printf("Vash god ne visokosniy i ");	
	}
	
	switch(year%12) {
		case 1: printf("god petuha");
			break;
		case 2: printf("god sobaki");
			break;
		case 3: printf("god kabana");
			break;
		case 4: printf("god krisy");
			break;
		case 5: printf("god bika");
			break;
		case 6: printf("god tigra");
			break;
		case 7: printf("god krolika");
			break;
		case 8: printf("god drakona");
			break;
		case 9: printf("god zmei");
			break;
		case 10: printf("god loshadi");
			break;
		case 11: printf("god kozy");
			break;
		case 0: printf("god obezyany");
			break;
		default: printf("Error");
	}
	
	if((month==12 && day>21) || (month==1 && day<21)) {
		printf("\nVash znak zodiaka Kozerog");
	}
	if((month==1 && day>20) || (month==2 && day<20)) {
		printf("\nVash znak zodiaka Vodoley");
	}
	if((month==2 && day>19) || (month==3 && day<21)) {
		printf("\nVash znak zodiaka Rybi");
	}
	if((month==3 && day>20) || (month==4 && day<21)) {
		printf("\nVash znak zodiaka Oven");
	}
	if((month==4 && day>20) || (month==5 && day<21)) {
		printf("\nVash znak zodiaka Telec");
	}
	if((month==5 && day>20) || (month==6 && day<22)) {
		printf("\nVash znak zodiaka bliznecy");
	}
	if((month==6 && day>21) || (month==7 && day<23)) {
		printf("\nVash znak zodiaka Rak");
	}
	if((month==7 && day>22) || (month==8 && day<24)) {
		printf("\nVash znak zodiaka Lev");
	}
	if((month==8 && day>23) || (month==9 && day<24)) {
		printf("\nVash znak zodiaka Deva");
	}
	if((month==9 && day>23) || (month==10 && day<24)) {
		printf("\nVash znak zodiaka Vesy");
	}
	if((month==10 && day>23) || (month==11 && day<23)) {
		printf("\nVash znak zodiaka Skorpion");
	}
	if((month==11 && day>22) || (month==12 && day<22)) {
		printf("\nVash znak zodiaka Strelec");
	}	
}
