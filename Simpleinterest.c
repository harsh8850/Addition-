#include<stdio.h>
int main(){
    float Principle,Time,Rate,Interest;
    printf ("Enter the Amount of Principle\n");
    scanf("%f",&Principle);
    printf("Enter the Time \n");
    scanf("%f",&Time);
    printf("Enter the Rate\n");
    scanf("%f",&Rate);
    Interest= Principle*Time*Rate/100;
    printf("Total Interest %f",Interest);
    return 0;
    //In this program we find out the simple interest by using principle time and rate


}