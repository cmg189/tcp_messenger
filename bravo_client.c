#include "bravo.h"

int main(){
	printf("\nTCP Messenger: bravo\n");
	
	int repeat = 1;
	do{
		switch( user_input() ){
			case 1:
				printf("\nUsername\n");
				break;
			case 2:
				printf("\nEnding program\n");
				repeat = 0;
				break;
			default:
				printf("\nNot an option\n");
				break;
		}
	}while(repeat);

	printf("\n\nProgram ended\n");
	return 0;
}
