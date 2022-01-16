#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool x,y,z,w,o;
	int temp;
	printf("Enter X=");
	scanf("%d",&temp);
	x=temp;
	printf("Enter Y=");
	scanf("%d",&temp);
	y=temp;
	printf("Enter Z=");
	scanf("%d",&temp);
	z=temp;
	printf("Enter W=");
	scanf("%d",&temp);
	w=temp;
	o=!((!((!(x&!y))&z))&w);
	printf("Output of logic Gate=%d\n",o);
	return(0);
}
