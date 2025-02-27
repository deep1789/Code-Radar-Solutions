#include<stdio.h>
int main()
{
	int r,c,rows,clmns,temp=10;
	
	printf("Enter the rows");
	scanf("%d",&rows);
	
	printf("Enter the columns");
	scanf("%d",&clmns);
	
	for(r=0;r<rows;r++)
	{
		for(c=0;c<clmns;c++)
		{
			printf("%c ",c+97);
			
		}
		printf("\n");
	}
	
	return 0;
}
