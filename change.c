#include <stdio.h>

void main() {
    int m = 0;
    printf("Please enter the amount of money you wish to withdraw: ");
    scanf ("%d", &m);
    printf("You received %d hundred(s)", m/100 );
    m=m%100;
    printf("You received %d fifty(s)", m/50);
    m=m%50;
    printf("You received %d twenty(s)", m/20);
    m=m%20;
    printf("You received %d ten(s)", m/10);
    m=m%10;
    printf("You received %d five(s)", m/5 );
    m=m%5;
    printf("You received %d one(s)", m/1);
}