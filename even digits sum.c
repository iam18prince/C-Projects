#include<stdio.h>
int main (){
     int n;
     printf("Enter your number:- ");
     scanf("%d",&n);
     int s=0;
     int ld =0;
     while (n!=0){
     ld=n%10;
     if (ld%2==0) 
     s=s+ld;
     n=n/10;
     
     }
     printf("Sum of even digits are :-%d",s);
return 0;
}