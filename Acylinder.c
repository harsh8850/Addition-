#include<stdio.h>
int main(){
    float radius,height,area;
    printf("Enter the radius of cylinder\n");
    scanf("%f",& radius);
    printf("Enter the height of cylinder\n");
    scanf("%f",&height);
    area=3.14*radius*radius*height ;
    printf("area of cylinder %f",area);
    return 0;
// In this program we find the area of cylinder 
}