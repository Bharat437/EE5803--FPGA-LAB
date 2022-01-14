#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x=false,y,z,sop,nand;
    printf("X Y Z | ouput for SOP form | output using NAND gates\n");
    for(int i=0;i<=7;++i)
    {   
		y=false;
		z=false;
		if(i>=4)
			x=true;
		if(i==2 || i==3 || i==6 || i==7)
			y=true;
		if(i%2==1)
			z=true;
        sop=(x&(!y))|(x&y&z)|((!x)&y&(!z));
        nand=!((!(x&(!y)))&(!(x&y&z))&(!((!x)&y&(!z))));
        printf("%d %d %d          %d                  %d\n", x,y,z,sop,nand);
        z=true;
    }
    return 0;
}
