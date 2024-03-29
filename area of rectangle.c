// calculating area of rectangle 
#include <stdio.h>

int Area(int l,int w);
int main()
{
    int l,w,result;
    printf("Enter l and w: ")
    scanf("%d%d",&l,&w);
    result=Area(l,w);
    printf("Area is %d",result);
}
int Area(int x,int y)
{
    int z;
    z=x*y;
    return (z);
}