#include<stdio.h>
#include<stdlib.h>

int main()
{

    float P, R, T;
    
    printf("Enter Principal");
    scanf("%f",&P);
    printf("\nEnter Rate");
    scanf("%f", &R);
    printf("\nEnter Time per annum");
    scanf("%f",&T);
    float SI = (P*R*T)/100;
    printf("\nSIMPLE Interset: %f",SI);
    float Amount = P+SI;
    printf("\nFinal Amount: %f",Amount);
    return 0;
}
