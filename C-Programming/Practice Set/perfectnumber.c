//Find if the number is perfect
#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf ("Enter a number : ");
    scanf ("%d",&num);
    for (i=1;(i<=num/2);i++){
        if (num%i==0)
        sum=sum+i;
    }
    if (sum==num) {
    printf ("%d is a perfect number.\n",num);
    }else printf ("%d is not a perfect number.\n",num);
    return 0;
}
