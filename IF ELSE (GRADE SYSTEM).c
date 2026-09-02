#include<stdio.h>
int main(){
    /*Ques: Take input percentage of a student and print the Grade according to marks:

    1) 91-100 Excellent

    2) 81-90 Very Good

    3) 71-80 Good

    4) 61-70 Can do better

    5) 51-60 Average

    6) 41-50 Below Average

    7) <40 Fail*/
    float a;
    printf("Enter your Percentage:-");
    scanf("%f",&a);
    if(a==91 || a==100|| a>91 && a<100){
    printf("Excellent");
    }
    else if (a==81 || a==90|| a>81 && a<90){
    printf("Very Good");
    }
    else if (a==71 || a==80|| a>71 && a<80){
    printf("Good");
    }
    else if (a==61 || a==70|| a>61 && a<70){
    printf("Can Do Better");
    }
    else if (a==51 || a==60|| a>51 && a<60){
    printf("Average");
    }
    else if (a==41 || a==50|| a>41 && a<50){
    printf("Below Average");
    }
    else if (a<40){
    printf("Fail");
    }
    
       return 0;
    }