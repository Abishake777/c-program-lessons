#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = (a+b)- (b=a);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}