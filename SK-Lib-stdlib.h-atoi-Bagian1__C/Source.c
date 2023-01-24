#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int i;
	char buffer[256];

	printf("Enter a number: ");
	fgets(buffer, 256, stdin);
	
	i = atoi(buffer);
	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
	
	_getch();
	return 0;
}