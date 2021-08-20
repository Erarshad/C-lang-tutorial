#include<stdio.h>
#include<conio.h>

void main()
{

 int sub1;
 int sub2;
 int sub3;
 int sub4;
 int sub5;
 int mm;
 int add;
 float percentage;
 printf("sub1");
 scanf("%d",&sub1);
 printf("sub2");
 scanf("%d",&sub2);
 printf("sub3");
 scanf("%d",&sub3);
 printf("sub4");
 scanf("%d",&sub4);
 printf("sub5");
 scanf("%d",&sub5);

 add=sub1+sub2+sub3+sub4+sub5;
 printf("addition of marks:%d",add);

 printf("\nenter mm");
 scanf("%d",&mm);

  percentage=add*100/mm;

  printf("percent is :%f",percentage);

  printf("\n programmed by Arshad");




 getch();


}
