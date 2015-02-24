#include<stdio.h>
#define MAX 100
int buckets(int *Amax,int *Bmax,int *fill)
{
	char out[MAX];// {'a','\n','b','\n','c','\n','d','\n'};	
	int Aval,n_t,Bval,Fval,temp;
	Aval=*Amax;
	Bval=0;
	Fval=*fill;
	printf("\tA:%d\n",Aval);
	printf("\tB:%d\n\n",0);
	
	while(Aval != Fval && Bval != Fval)
	{
		while(Aval!=0 && Bval!=*Bmax)	
		{
			--Aval;
			++Bval;
		}
		printf("\n\tNext\n");	
		printf("\tA:%d\n",Aval);
		printf("\tB:%d\n\n",Bval);
		
		if(Aval==0)
		{
			Aval=*Amax;			
		}
		else if(Bval==*Bmax)
		{
			Bval=0;			
		}		
			
	}
}

main()
{
	int A,B,C;
	printf("\nenter the A value:");
	scanf("%d",&A);
	printf("\nenter the B value:");
	scanf("%d",&B);
	printf("\nenter the C value:");
	scanf("%d",&C);
	printf("\n\n\t***OUT**\n");
	printf("\n\tfirst\n");	
	buckets(&A,&B,&C);
	//printf("size:%d",t);
}
