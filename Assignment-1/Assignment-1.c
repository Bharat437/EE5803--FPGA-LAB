#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool x,y,z,w;
	printf("Enter X=");
	scanf("%d",&x);
	printf("Enter Y=");
	scanf("%d",&y);
	printf("Enter Z=");
	scanf("%d",&z);
	printf("Enter W=");
	scanf("%d",&w);
	printf("Output of logic Gate=%d",((!x|y)&z)|!w);
	return(0);
}
