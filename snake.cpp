/*蛇形输出数字*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b,i,j,t,n,num=1;
	scanf("%d",&n);
	int **a=(int **)malloc(sizeof(int *)*n);
	for (j=0;j<n;j++)
	{
		a[j] = (int *) malloc(sizeof(int) * n);
	}
	for(i=0;i<n;i++)
	{	for(j=i,t=0;j>=0;t++,j--)
	{
		if(i%2==0)
			a[j][t]=num;
		else
		{	
			a[t][j]=num;
		}
		
		num++;
	}
	}
	
	num=n*n;
	for(i=n-1;i>0;i--)
	{	
		for(j=i,t=n-1;j<=n-1;t--,j++)
		{	
			if(n%2==1)
				b=i+1;
			else
			{	b=i;}
			if(b%2==1)
				a[j][t]=num;
			else
			{	
				a[t][j]=num;
			}
			num--;
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
