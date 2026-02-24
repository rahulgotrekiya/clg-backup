// Program to create a simple calculator
#include <stdio.h>
int MAXSIZE = 3;       
int stack[3];     
int top = -1;  
int data;  
void push();
void pop();
void peek();


void main() {
 	int choice;

        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.push\n2.pop\n3.peep\n4.exit");  
       
        
	do
	{
		printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
		    switch(choice)
		    {
		        case 1:
		            push(10);
		            push(20);
		            push(30);
		            push(40);
		            break;
		
		        case 2:
		           	pop();
		            break;
		
		        case 3:
		           	peek();
		            break;
				case 4:
					exit(1);
					break;
		        // operator doesn't match any case constant +, -, *, /
		        default:
		            printf("Error! enter choice between 1-4");
		    }
	}while(1);
  
}
void push(int item)
{
	if(top == MAXSIZE-1) 
	{
    	printf("can not insert, Overflow: stack is full");
	}
	else
	{
		top = top + 1; 
	  	printf("value of top after push %d\n",top);  
        stack[top] = item;
   } 
}
void pop()
{
	if(top == -1) 
	{
      	printf("Could not retrieve data, Stack is empty.\n");
	}
	else
	{
		data = stack[top];
      	top = top - 1; 
		printf("popped element is : %d",data);  
		printf("value of top after pop %d\n",top);  
   } 
}
void peek()
{
	printf("peek element is %d", stack[top]);
}

