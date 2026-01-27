#include<stdio.h>
#include<conio.h>
struct Employee {
	char name[20];
	int id;
	int basic_salary;
}emp[3];

void main() {
	int i, hra[3], da[3], pf[3], net_salary[3], basic_salary[3];
	clrscr();
	for (i = 0; i < 3; i++) {
		printf("\nEnter Name of employee: ");
		gets(emp[i].name);
		printf("Enter ID of employee : ");
		scanf("%d", &emp[i].id);

		printf("Enter Basic salary of employee: ");
		scanf("%d", &emp[i].basic_salary);

		scanf("%*c");
	}
	for(i = 0; i < 3; i++) {
		hra[i] = 0.10 * emp[i].basic_salary;
		da[i] = 0.05 * emp[i].basic_salary;
		pf[i] = 0.12 * emp[i].basic_salary;

		net_salary[i] = emp[i].basic_salary + hra[i] + da[i] - pf[i];

		printf("\n\nEmployee %d details :", emp[i].id);
		printf("\nName of employee %s", emp[i].name);
		printf("\nhra %d", hra[i]);
		printf("\nda %d", da[i]);
		printf("\npf %d", pf[i]);
		printf("\nSalary %d", emp[i].basic_salary);
		printf("\nNet Salary %d", net_salary[i]);

	}
	getch();
}