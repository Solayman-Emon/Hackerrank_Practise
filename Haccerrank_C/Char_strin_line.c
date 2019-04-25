#include <stdio.h>
int main(){
    char s[100];
    while(scanf("%[^\n]%*c",s)==1){
        printf("%s\n",s);
    }
    return 0;
}
