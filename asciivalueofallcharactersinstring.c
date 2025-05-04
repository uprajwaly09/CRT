#include <stdio.h>
#include <stdlib.h>
int main() {
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        int ans=c;
        printf("%d\t",ans);
    }
    return 0;
}