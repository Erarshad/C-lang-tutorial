#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[]={10,20,30,45,67,56,74};
   int *i=&arr[1];
   int *j=&arr[2];
   printf("difference by pointer%d",*i-*j);
    getch();
}
