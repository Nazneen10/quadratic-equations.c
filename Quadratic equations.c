#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,check,root1,root2;
	printf("enter the value of a,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);
	check=b*b-4*a*c;
	if(check>0)
	{
		root1=(-b+ sqrt (check))/2*a;
		root2=(-b-sqrt (check))/2*a;
		printf("root1=%.2lf,root2=%.2lf",root1,root2);
	}
	else if(check==0)
	{
		root1=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	
	
	}
	else
	{
		root1=-b/2*a;
		root2=sqrt (-check)/(2*a);
		printf("root1=%.2lf+%.2lfi and root2=%.2lf-%.2lfi",root1,root2,root1,root2);
	}
}
