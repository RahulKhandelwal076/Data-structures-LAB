#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
void push();
void pop();
void display();
int stack [SIZE], top = -1;


void main()
{
    int value,choice;
    while(1)
    {

        printf("\nSelect the choice:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
               display();
               break;

            case 4:
                printf("Exiting from app.\n");
                exit(0);
                break;

            default:
                printf("Wrong selection.\n");
        }
    }

}

void push(int value)
{
    if (top == SIZE - 1)
        printf("Stack is full");
    else
    {
        top++;
        stack [top] = value;
        printf("\nValue inserted successfully\n");
    }
}

void pop ()
{
    if (top == -1)
        printf("\nStack is empty");
    else
    {
        printf("\nDeleted %d", stack[top]);
        top--;
    }
}

void display ()
{
    if (top == -1)
        printf("\nStack is empty");
    else
    {
        int i;
        printf("\nStack elements are:\n");
        for (i=top; i>=0; i--)
            printf("%d\n", stack[i]);
    }
}

