#include<stdio.h>
void CALCULATOR()
{
	int x,x1,x2;
	do
	{
		printf("\n ENTER YOUR CHOICE :- ");
		scanf("%d",&x);
		if(x==6)
		{
			printf("\nEXIT....THANKS FOR USING CALCULATOR.....");
		}
		if(x>6)
		{
			printf("\n______ENTER THE VALID VALUE_______\n");
			printf("\n ENTER YOUR CHOICE :- ");
		    scanf("%d",&x);
		}
		if(x<6)
		{
			printf("\nENTER THE FIRST VALUE = ");
			scanf("%d",&x1);
			printf("ENTER THE SECOND VALUE = ");
			scanf("%d",&x2);
			
			switch(x)
			{
				case 1: 
				printf("%d+%d=%d",x1,x2,x1+x2);
				break;
				
			    case 2: 
				printf("%d-%d=%d",x1,x2,x1-x2);
				break;
				
				case 3: 
				printf("%d*%d=%d",x1,x2,x1*x2);
				break;
				
				case 4: 
				printf("%d/%d=%d",x1,x2,x1/x2);
				break;
				
				case 5: 
				printf("%d%%d=%d",x1,x2,x1%x2);
				break;
			
				default :
				printf("ENTER THE VALID VALUE...");
				break;
	        }
		}
	}while(x<=5);
}
int main()
{
	printf("\n1.ADDITION\n");
		printf("2.SUBTRACTION\n");
		    printf("3.MULTIPLICATION\n");
			    printf("4.DIVISON\n");
					printf("5.MODULES\n");
						printf("6.EXIT\n");
						
						CALCULATOR();
}