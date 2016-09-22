#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct p{
	int a;
	struct p *next;
};
struct p *create(int n,int m);
int main()
{
	int m,n,i=0; 
	struct p *head,*p,*tail;
	scanf("%d %d",&n,&m);
	int start=clock(),end;
	head=create(n,m);
	for(p=head;p->next!=p->next->next;p=p->next)
	{
		i++;
		if(i==m)
		{
			i=0;
			tail->next=p->next;
			printf("%d\t",p->a);
			free(p);
			p=tail;
		}
		tail=p;
	}
		printf("\n%d",p->a);
		end=clock();
		printf("\n");
		printf("ºÄÊ±%dºÁÃë",end-start);
		return 0;
	
	}
////////////////////////////////////
struct p *create(int n,int m)
{
	int x=n;
	struct p *head=NULL,*p,*tail;
	while(n!=0)
	{   if((x-(n-1))%m==0)
	    {
		printf("%d\t",(x-(n-1)));
	    n--;
	    continue;
	    }
		p=(struct p *)malloc(sizeof(struct p));
		p->a=x-(n-1);
		if(head==NULL)
		{head=p;}
		else
		{tail->next=p;}
	tail=p;
	n--	;
	}
	p->next=head;
	return head;
}	
