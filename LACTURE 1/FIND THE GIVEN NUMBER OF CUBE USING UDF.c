#include<stdio.h>
int cube(int a)
{
	int ans;
	ans = a*a*a;
	printf("%d",ans);
}
int main()
{
	int a;
	
	printf("ENTER THE CUBE VALUE =");
	scanf("%d",&a);
	cube(a);
}