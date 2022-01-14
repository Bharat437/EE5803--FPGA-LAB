#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool x,y,z,w,o;
	printf("Enter X=");
	scanf("%d",&x);
	printf("Enter Y=");
	scanf("%d",&y);
	printf("Enter Z=");
	scanf("%d",&z);
	printf("Enter W=");
	scanf("%d",&w);
	o=!((!((!(x&!y))&z))&w);
	printf("Output of logic Gate=%d\n",o);
	return(0);
}
