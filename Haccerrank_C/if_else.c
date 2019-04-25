#include<stdio.h>

int main()
{
    int n;
    char *s[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);

    if(n<=9)
    {
      printf("%s",s[n-1]);
    }

    else if(n>9)
    {
        printf("Greater than 9");
    }


    return 0;
}
