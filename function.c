#include <stdio.h>

int addition()
{
    int a = 10;
    int b = 20;

    printf(" addition %d  \n", a + b);
}
int subtraction()
{
    int a = 6;
    int b = 5;
    printf(" subtraction %d \n", a - b);
}
int divide (){
    int a=4;
    int b=16;

    printf("devide %d \n",a/b);

}
int multiply(){
    int a=4;
    int b=10;
    printf("subtraction %d \n", a*b);

}


int main()
{
    addition();
    subtraction();
    divide();
    multiply();

    return 0;
}