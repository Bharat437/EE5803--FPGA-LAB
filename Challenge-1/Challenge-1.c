#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool x[8]={0,0,0,0,1,1,1,1},y[8]={0,0,1,1,0,0,1,1},z[8]={0,1,0,1,0,1,0,1},g[8]={0,0,1,0,1,1,0,1},sop,nand;
    printf("X Y Z | ouput for SOP form | output using NAND gates\n");
    for(int i=0;i<=7;++i)
    {   
        sop=((!x[i])&y[i]&(!z[i]))|(x[i]&(!y[i])&(!z[i]))|(x[i]&(!y[i])&z[i])|(x[i]&y[i]&z[i]);
        nand=!((!((!x[i])&y[i]&(!z[i])))&(!(x[i]&(!y[i])&(!z[i])))&(!(x[i]&(!y[i])&z[i]))&(!(x[i]&y[i]&z[i])));
        printf("%d %d %d          %d                  %d\n", x[i],y[i],z[i],sop,nand);
    }
    return 0;
}
