#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b,c;
printf("enter the 3 sides:");
scanf("%d%d%d",&a,&b,&c);
if((a<1||a>10)||(b<1||b>10)||(c<1||c>10))
{
printf("out of range values");
exit(0);
}

if((a<b+c)&&(b<a+c)&&(c<a+b))
{
	if((a==b)&&(b==c)&&(a==c))
	{
		printf("equilateral triangle");
	}
	else if((a!=b)&&(b!=c)&&(a!=c))
	{
		printf("scalene triangle");
	}
	else
	{
	printf("isoscles triangle");
	}
}
else
{
printf("triangle cannot be formed");
}

return 0;
}
