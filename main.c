#include "myMath.h"
#include <stdio.h>

int main()
{
    
printf("Please insert a real number: \n");
double x;
if(scanf("%lf", &x) != 1){
    printf("Please enter a real number next time you run the program\n");
    return 0;
}
// function one - 
double ex = Exponent((int)x);
double snd = Power(x,3);
float ans1 = add((float)ex, (float)snd);
float one = sub(ans1, 2);

// function two - 
snd = Power(x,2);
double m = mul(snd,2);
double ans3 = mul(x,3);
float two= add(ans3,m);

// function three - 
snd = Power(x,3);
m = mul(snd,4);
ex = div(m,5);
double tmpd = mul(x,2);
float three = sub(ex,tmpd);
printf("The value of f(x) = e^x + x^3 -2 at the point %.4lf is: %.4f\n", x, one);           
printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is : %.4f\n", x, two);
printf("The value of f(x) = (4x^3)/5 - 2x at the point %.4lf is : %.4f\n", x, three);
    
    return 0;   
}