#include<stdio.h>
#include<conio.h>
void main () {
	FILE *file;
	int num;

	clrscr();
	putw(1234, file);
	putw(5678, file);

	file = fopen("data.bin", "w");

	if(file == NULL){
		printf("Error");
	}

	num = getw(file);
	printf("First integer : %d \n", num);

	num = getw(file);
	printf("Second integer : %d \n", num);
	fclose(file);

	getch();

}