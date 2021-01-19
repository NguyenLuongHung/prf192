#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Sum(int x1, int x2){
   int i, sum = 0;
   for( i = x1; i <= x2; i++){
       sum += i;
   }

   return sum;

}
int main(){
    int a1 = 1, a2 = 5, s = 0;
    printf("sum = %d\n", Sum(a1, a2));
    
    return 0;

}