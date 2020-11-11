#include "myMath.h"
#define e  2.718281828

double Exponent(int x)
{
    if(x==0)
    {
        return 1;
    }
    int tmp = x;
    if(x<0)
    {
        tmp = -x;
    }        
    int i;
    double ans = 1.0;
    for (i = 1; i <=tmp; i++)
    {
        ans = ans*e;
    }
    if(x>0)
    {
        return ans;  
    }         
    else
    {
        return 1.0/ans;
    }
}

double Power(double x, int y)
{
    if(y==0)
    {
        return 1;
    }
    int tmp = y;
    if(y<0)
    {
        tmp = -y;
    }        
    int i;
    double ans = 1.0;
    for (i = 1; i <=tmp; i++)
    {
        ans = ans*x;
    }
    if(y>0)
    {
        return ans;  
    }         
    else
    {
        return 1.0/ans;
    }
}
