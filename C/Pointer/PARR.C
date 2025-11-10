void Print(int *a, int size) {
	int i;
	for(i = 0; i < size; i++){
	       //	printf("%4d", a[i]);
	       //	printf("%4d", i[a]);
	       //	printf("%4d", *(a+i));
	       //	printf("%4d", *(i+a));
		printf("%4d", *a++);

	}
}
void main() {
	int a[] = {1, 2, 3, 4, 5};
	char *p;
	p = a;
	clrscr();
	Print(a, 5);
	getch();

}