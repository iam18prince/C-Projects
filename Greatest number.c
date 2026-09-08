#include<stdio.h>
int main(){
      float a, b, c, d;
      printf("Enter first number:");
      scanf("%f",&a);
      printf("Enter second number:");
      scanf("%f",&b);
      printf("Enter your third number:");
      scanf("%f",&c);
      printf("Enter your fourth number:");
      scanf("%f",&d);
      if(a>b&&a>c&&a>d){
      printf("First number is greatest");
      }
      if(b>a&&b>c&&b>d){
      printf("second number is greatest");}
      if(c>a&&c>b&&c>d){
      printf("Third number is greatest");
      }
      if(d>a&&d>b&&d>c){
      printf("Fourth number is greatest");}
       return 0;
    }
