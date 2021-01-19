#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x,p,k;
    float S1,S2;

    printf("Input 4 so a, b, c, x : ");scanf("%f%f%f%f", &a,&b,&c,&x);
    printf("S1 = %f\n", a*x*x + b*x + c);
    
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



    printf("\nInput a, b, c : ");scanf("%f%f%f", &a,&b,&c);
    if (a>b){
        k = a;
        a = b;
        b = k;
    }
    if (b>c){
        k = b;
        b = c;
        c = k;

    }
    if (a>b){
        k = a;
        a = b;
        b = k;
    }
    printf("the min and max value of a,b,c are %f and %f ", c,a);
    printf("the ascending order: %f,%f,%f",a,b,c);

    return 0;
}