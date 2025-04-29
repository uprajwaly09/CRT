#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int year;
    scanf("%d",&year);
    (year%4==0 && year%100!=0)?printf("Yes"):
        (year%400==0)?printf("Yes"):printf("No");
    return 0;
}