#include<stdio.h>


int main()
{
    float x, y;
    printf("Enter x-coordinator:-");
    scanf("%f",&x);
    printf("Enter y-coordinator:-");
    scanf("%f",&y);
    if (y==0 && (x>0 || x<0)){
    printf("It lies on x-axis");
    }
    else if (x==0 && (y>0 || y<0)){
    printf("It lies on y-axis");
    }
    else if (x==0 && y==0){
    printf("It lies on origin");
    }
    else if (x>0 || x<0 && y>0 || y<0){
    printf("It lies on quadrant");
    }
    return 0;
}