#include<stdio.h>
int main (){
    int physics,chemistry,maths;
    float total;
    printf("Enter the number of physics \n");
    scanf ("%d",&physics);
    
    printf("Enter the number of chemistry \n");
    scanf ("%d",&chemistry);

    total = (physics+chemistry+maths)/3 ;
    
    printf("Enter the number of maths \n");
    scanf ("%d",&maths);
    if ((total<40) ||  physics<33 || chemistry<33 || maths<33 ){
        printf("total percentage is %f and you are fail,total \n");
    }
    else  {
    printf("total percentage is %f and you are pass,total \n");
    }
    return 0 ;
    // in this program we can check pass and fail in the physics chemistry and maths and find of the percentage of  three sunjects
    
    

    
}