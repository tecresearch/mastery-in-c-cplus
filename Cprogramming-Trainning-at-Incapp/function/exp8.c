#include<stdio.h>

int addition()
{
  int sum;
    int num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
   return sum;
}

int main()
{

    int x= addition();
   printf("sum of three numbers are : %d",x);

    return 0;
}


