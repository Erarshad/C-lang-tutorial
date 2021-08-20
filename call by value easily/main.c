#include<stdio.h>
#include<conio.h>

int swap(int , int);
//declaring the function and we will put two int value in this function by the main function

int main()
{
    int a,b;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the  number b");
    scanf("%d",&b);
    //calling the function in main function and puting the the value of a,b
    swap(a,b);

    getch();
}
//finally this is the driver function that will bridge to main function and the all operation is held in it
int swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
printf("a is :%d",x);
printf("b is %d",y);
}
