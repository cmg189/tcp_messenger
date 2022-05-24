#include <stdio.h>
#include <string.h>

int user_input(){
	int choice;

	printf("\nMenu\n");
	printf("1 > Enter username\n");
	printf("2 > End program\n");
	printf("\nChoose an option: ");
	scanf("%d", &choice);

	return choice;
}
