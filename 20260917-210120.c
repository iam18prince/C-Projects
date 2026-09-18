#include<stdio.h>
int main (){
     int n;
     printf("enter a no. ");
     scanf("%d",&n);
     int i=0;
     while (n !=0){
     n=n/10;
     i++;
     }
     printf("The no. of digit are %d",i);
return 0;
}