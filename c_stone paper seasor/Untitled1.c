#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	while(1)
	{
	
		int i, rnum, amount=1, start=1, end=3;
		char c,u;
		//    printf("Enter Interval: ");
		//    scanf("%d%d", &start, &end);
		
		printf("\n\t\t Enter t for stone , p for paper , s for seisor :");
		scanf("%c",&u);
		srand(time(0));
		   
		
		rnum = rand()%(end+1-start)+start;
		    
		if (rnum==1)
		    {
		    	c='t';
			}
		else if (rnum == 2)
		    {
		    	c='p';
			}
			
		else
			{
				c='s';
			}
		

		
		if (c=='t' && u=='t')
		{
			printf("\n\t\t computer = stone  you = stone");
			printf("\n\t\t ohh same sam...");
		}
		else if (c=='t' && u=='p')
		{
			printf("\n\t\t computer = stone  you = paper");
			printf("\n\t\t you won...");
		}
		else if (c=='t' && u=='s')
		{
			printf("\n\t\t computer = stone  you = seisor");
			printf("\n\t\t you loose...");
		}
		else if (c=='p' && u=='p')
		{
			printf("\n\t\t computer = paper  you = paper");
			printf("\n\t\t ohh same same...");
		}
		else if (c=='p' && u=='s')
		{
			printf("\n\t\t computer = paper  you = seisor");
			printf("\n\t\t you won...");
		}
		else if (c=='p' && u=='t')
		{
			printf("\n\t\t computer = paper  you = stone");
			printf("\n\t\t you loose...");
		}
		else if (c=='s' && u=='s')
		{
			printf("\n\t\t computer = seisor  you = seisor");
			printf("\n\t\t ohh same same...");
		}
		else if (c=='s' && u=='t')
		{
			printf("\n\t\t computer = seisor  you = stone");
			printf("\n\t\t you won...");
		}
		else if (c=='s' && u=='p')
		{
			printf("\n\t\t computer = seisor  you = paper");
			printf("\n\t\t you loose...");
		}
		
	}}
