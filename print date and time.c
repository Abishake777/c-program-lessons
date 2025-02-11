#include<stdio.h>
#include<stdbool.h>
bool isleap(int year){
    return(year % 400==0 || (year % 4==0 && year % 100 !=0));
}
bool isValid(int d,int m,int y){
    if(d > 31 || d < 1 || m>12 ||m<1 || y<1900)
        return false;
    switch (m)
    {
    case 4: case 6: case 9: case 11:
        if(d>30)
            return false;
        
        /* code */
        break;
    case 2:
        if(isleapYear(y)){
            if (d > 29)
                return false;
        }
    
    default:
        break;
    }
}
int main(){
    int dd, mm, yy;
    scanf("%d%d%d",&dd,&mm,&yy);
    if(isValid(dd,mm,yy)){
        printf("valid");
    }

    return 0;
}