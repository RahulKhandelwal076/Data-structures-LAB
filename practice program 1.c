#include <stdio.h>
#define SIZE 100
struct student
{

    int id;
    int age;
    int marks;

};


void input(struct student s1[])
{

    printf("\nEnter the id: ");
    scanf("%d", &s1->id);
    printf("\nEnter the age: ");
    scanf("%d", &s1->age);
    printf("\nEnter the marks: ");
    scanf("%d", &s1->marks);

}

int verification(struct student s1[])
    {
    if (s1->age > 20 && (s1->marks >=0 && s1->marks <= 100))
        {
        if(s1->marks >= 65)
        return 1;
        else return 2;
        }
    else
    return 3;
    }

void outcome(int a, struct student s1[])
{
     if(a == 1)
     printf("\n\tstudent qualifies for admission\n");
     else if(a == 2)
     printf("\n\tStudent does not qualify for admission\n");
     else
     printf("\n\tInvalid information\n");
}

int main()
{

    struct student s1[SIZE];
    int n, a = 0;
    printf("\nEnter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        {
		printf("\nEnter information of student %d", i+1);
		input(s1);
		a = verification(s1);
		outcome(a, s1);
	    }
    return 0;

}
