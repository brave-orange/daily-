#include<stdio.h>
#include<malloc.h>
#include<time.h>
int main()
{
	int n,m,t,i,bs=0,xb=0,z=0,q=0;
	
	scanf("%d %d",&n,&m);
	int start=clock(),end; 
	t=n;	
    int * p=(int *)malloc(sizeof(int)*n);
	int * x=(int *)malloc(sizeof(int)*n);
	
    for(i=0;i<n;i++)
		p[i] = i+1;
	
	while(t-1)
	{
		while(1)
		{	
			if(p[xb] != 0)
				bs++;     //报数一次
			if(bs==m)
			{
				bs = 0;
				break;
			}
			xb++;
			if(xb==n)
				xb = 0;	
		}
		
		x[z] = p[xb];
		p[xb] = 0;
		z++;
		t--;
		xb++;
		if(xb==n)
			xb = 0;	
	}
	
	for(i=0;i<n;i++)
		if(p[i]!=0)
			x[n-1]=p[i];
		
		for(i=0;i<n;i++)
			printf("%d\t",x[i]);
		printf("\n");
				end=clock();
		printf("耗时%d毫秒",end-start);
		
		return 0;
}

