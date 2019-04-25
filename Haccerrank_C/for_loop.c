#include<stdio.h>

int main()
{
    int n,m;
    char *s[]= {"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&n,&m);


    for(int i=n; i<=m; i++)
    {

        if(i>0 && i<=9)
        {
            printf("%s\n",s[i-1]);
        }
        if(i>9)
        {
            if(i%2==0)
            {
                printf("even\n");
            }
            else
                printf("odd\n");
        }
    }



}
