#include <iostream>
#include <cstdio>

int main()
{
    int n;
    long lg;
    char ch1[10], ch2[10], ch3[10];
    float f;
    double d;

     /*  every scanf() leaves a newline character in
    buffer that is read by next scanf.*/

    scanf("%s",ch1);
    scanf("%s",ch2);
    scanf("%s",ch3);

    printf("%s\t",ch1);
    printf("%s\t",ch2);
    printf("%s\t",ch3);

    return 0;
}
