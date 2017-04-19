#include<stdio.h>
int main()
{
int x;
float y,amount;
scanf("%d %f",&x,&y);

if(((x%5)==0)&&(x<y))
amount=y-x-0.50;

else
amount=y;
printf("%0.2f",amount);
return 0;
}
