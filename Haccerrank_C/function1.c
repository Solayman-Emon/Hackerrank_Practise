#include<stdio.h>

int max_four(int x,int y,int z,int p)
{
  int max1= x > y ? x : y;
  int max2= z > p ? z : p;
  return max1>max2 ? max1 : max2;

}

int main()
{
    int x,y,z,p;
    scanf("%d %d %d %d",&x,&y,&z,&p);
    printf("%d",max_four(x,y,z,p));

    return 0;
}
