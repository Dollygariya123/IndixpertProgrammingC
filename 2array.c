#include<stdio.h>
int main()
{
char student_name[3][40];
int student_marks;

printf("please enter first student name  :");
scanf("%[^]\n",&student_name );

printf ("please enter second student name :");
scanf("%[^]\n",&student_name);

printf("please enter third student name :");
scanf("%[^]\n",&student_name);

printf(" please enter student %d marks :",);
scanf("%d",&student_marks[i]);
}
printf ("\nstudent details:\n");

for (int i=0; i< 3; i++)
{


printf("student %d\n",i +  1);
printf("name : %s\n", student_name[i]);
printf("marks : %d\n\n", student_marks[i]);
}
return 0;
}