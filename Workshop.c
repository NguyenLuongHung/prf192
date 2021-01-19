#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x,p;
    float S1,S2;

    printf("Input 4 so a, b, c, x : ");scanf("%f%f%f%f", &a,&b,&c,&x);
    printf("S1 = %f", a*x*x + b*x + c);
    
    if ((b*b-4*a*c)>0){
        S2 = sqrt(b*b-4*a*c);
    }else S2 = 0;
    printf("S2 = %f", S2);
    printf("\nInput a, b, c : ");scanf("%f%f%f", &a,&b,&c);
    p = (a+b+c)/2;
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        printf("\n a,b,c are three sides of triangle");
        printf("\n P = %f", a+b+c);
        printf("\n S = %f", sqrt(p*(p-a)*(p-b)*(p-c)));
    }else printf("a,b,c are not three sides of triangle");

    return 0;
}