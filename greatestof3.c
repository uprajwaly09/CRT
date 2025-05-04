#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int lar2=(a>b)?a:b;
    int lar3=(c>lar2)?c:lar2;
    printf("%d",lar3);
    return 0;
}