#include<stdio.h>
int main(){
    float a,b,sum;
    scanf("%f",&a);
    scanf("%f",&b);
    sum = a+b;
    if(sum == (int)sum)
        printf("%d",(int)sum);
    else
        printf("%2f",sum);    
return 0; 
}