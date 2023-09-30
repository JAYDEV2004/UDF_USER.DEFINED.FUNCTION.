#include<stdio.h>
int cube(int a)
{
	
	if(a%3==0 && a%5==0)
	{
	  printf("YOUR VALUE CAN DIVIDED BY 3 AND 5 = %d",a);	
	}
	else if(a%3==0 && a%5!=0)
	{
		printf("YOUR VALUE CAN DIVIDED BY 3 BUT NOT BY 5 = %d",a);
	}
	else if(a%5==0 && a%3!=0)
	{
		printf("YOUR VALUE CAN DIVIDED BY 5 BUT NOT BY 3 = %d",a);
	}
	else
	{
		printf("YOUR VALUE CAN'T DIVIDED BY 3 AND 5 = %d",a);
	}
}
int main()
{
	int a;
	
	printf("ENTER THE CUBE VALUE =");
	scanf("%d",&a);
	cube(a);
}