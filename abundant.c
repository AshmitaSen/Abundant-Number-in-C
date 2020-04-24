#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum>n)
		printf("abundant");
	else
		printf("not");
	getch();
}
