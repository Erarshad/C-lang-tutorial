#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("press 1 for shutdown:\npress 2 for restart:\npress 3 for hibernate:");
    scanf("%d",&a);

     switch(a)
{

  case 1:
 {
     system("shutdown/s");
 }
 break;
 case 2:
 {
     system("shutdown/r");
 }
 break;
 case 3:
 {
     system("shutdown/h");
 }
 break;
 default:
    {
        printf("plz enter a valid key\nbooting enviroment create by arshad");

    }
    }


 getch();
}
