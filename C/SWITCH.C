#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
/*
	WAP Menu driven program to calcluate area, volume and intrest.
*/
float AreaOfCircle(const float radius) {
	return PI*radius*radius;
}
float AreaOfTriangle(const float base, const float height) {
	return (base*height) / 2;
}
float VolumeOfCylinder(const float radius, const float height) {
	return PI*radius*radius*height;
}
float VolumeOfCone(const float radius, const float height) {
	return (PI*radius*radius*height) / 3;
}
float SI(const float principal, const float rate, const float time) {
	return (principal * rate * time) / 100;
}
float CI(const float principal, const float rate, const float time, const int years) {
	return principal * pow((1 + (rate / (100 * years))), years * time);
}
void Menu() {
	printf("\n1..Area");
	printf("\n2..Volume");
	printf("\n3..Intrest");
	printf("\n4..Exit");
	printf("\n \n Enter your choice : ");
}
void AreaMenu(){
	printf("\n1..Area of Circle");
	printf("\n2..Area of Triangle");
	printf("\n3..Exit");
	printf("\n \n Enter your choice : ");
}
void VolumeMenu(){
	printf("\n1..Volume of Cylinder");
	printf("\n2..Volume of Come");
	printf("\n3..Exit");
	printf("\n \n Enter your choice : ");
}
void IntrestMenu(){
	printf("\n1..Simple Intrest");
	printf("\n2..Compund Interest");
	printf("\n3..Exit");
	printf("\n \n Enter your choice : ");
}
void main(){
	int ch, ach, vch, ich;
	float radius, base, height, principal, rate, time;
	clrscr();
	Menu();
	scanf("%d", &ch);
	switch(ch) {
		case 1:	// Area of circle
			clrscr();
			AreaMenu();
			scanf("%d", &ach);
			switch(ach) {
				case 1: 	// Area of circle
					printf("\nEnter Radius of Circle : ");
					scanf("%f", &radius);
					printf("\nArea of Circle = %g",AreaOfCircle(radius));
				break;
				case 2: 	// Area of Triangle
					printf("\nEnter Radius of Triangle : ");
					scanf("%d", &base, &height);
					printf("\nArea of Triangle = %g",AreaOfTriangle(base, height));
				break;
				case 3:	// Exit
				default:
				printf("\nWrong choice");
				break;
			}
		break;
		case 2:	// Volume
			clrscr();
			VolumeMenu();
			scanf("%d", &vch);
			switch(vch) {
				case 1: 	// Volume of Cylinder
					printf("\nEnter radius and height of cylinder : ");
					scanf("%f %f", &radius, &height);
					printf("\nVolume of Circle = %g", VolumeOfCylinder(radius, height));
				break;
				case 2: 	// Volume if Cone
					printf("\nEnter raius and height of come : ");
					scanf("%f %f", &radius, &height);
					printf("\nVolume of Come = %g", VolumeOfCone(radius, height));
				break;
				case 3:	// Exit
				default:
				printf("\nWrong choice");
				break;
			}
		break;
		case 3:	//intrest
			clrscr();
			IntrestMenu();
			scanf("%d", &ich);
			switch(ich) {
				case 1: 	// Simple Interest
					printf("\nEnter principal, rate and time : ");
					scanf("%f %f %f", &principal, &rate, &time);
					printf("\nSimple Intrest = %g", SI(principal, rate, time));
				break;
				case 2: 	// Compound Interst
					printf("\nEnter principal, rate, time and no of time interst applied per Year: ");
					scanf("%f %f %f %d", &principal, &rate, &time, &years);
					printf("\nArea of Triangle = %g", CI(principal, rate, time, years));
				break;
				case 3:	// Exit
				default:
					printf("\nWrong choice");
				break;
			}

		break;
		case 4:	//Exit
			clrscr();
			gotoxy(35,12);
			printf("Thank You !!!");
		break;
		default:
			printf("\nWrong choice !!!");
		break;
	}
	getch();
}