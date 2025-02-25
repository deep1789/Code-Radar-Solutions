#include<stdio.h>
int main()
{
	int r,c,rows,clmns;
	
	printf("Enter the rows");
	scanf("%d",&rows);
	printf("Enter the columns");
	scanf("%d",&clmns);
	
	for(r=0;r<rows;r++)
	{
		printf("indexes at row %d ",r);
		for(c=0;c<clmns;c++)
		{
			printf("%d%d ",r,c);
			
		}
		printf("\n");
	}
	
	return 0;
}
