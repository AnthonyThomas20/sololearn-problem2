#include<stdio.h>
#include<math.h>

int main()
{
    int houses;
    float result,prob;
    scanf("%d",&houses);
    
    result=2.0/(float)houses*100.0;
    prob=ceil(result);
    printf("%d",(int)prob);
    return 0;
}
