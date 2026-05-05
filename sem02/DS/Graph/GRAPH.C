#include<stdio.h>
#include<conio.h>

void CreateGraph(int vertices) {
	int graph[10][10];
	int i, j, out_count=0, in_count=0;
	for(i=0; i<vertices; i++){
		for(j=0; j<vertices; j++) {
			printf("\nvertices %d and %d are adjecent ? (0/1): ", i+1, j+1);
			scanf("%d", &graph[i][j]);
		}
	}
	clrscr();
	printf("\nVertex\t| Out Degree\t| In Degree");
	for(i=0; i<vertices; i++){
		out_count = 0;
		in_count = 0;
		for(j=0; j<vertices; j++) {
			if(graph[i][j] == 1) {
				out_count++;
			}
			if(graph[j][i] == 1) {
				in_count++;
			}
		}

		printf("\n%d\t| %d\t|%d", (i + 1), out_count, in_count);
	}
}

void Menu() {
	printf("\n1. Create undirected graph");
	printf("\n0. Exit");
}
void main() {
	int ch, vertices;
	clrscr();
	do {
		clrscr();
		Menu();
		printf("\nEnter Your choice: ");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				printf("\nEnter no of vertices: ");
				scanf("%d", &vertices);

				CreateGraph(vertices);
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("\nInvalid choice!");
		}
		getch ();
	}while(ch!=0);
	getch ();
}