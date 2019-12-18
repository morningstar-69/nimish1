/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the number \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even...square of the number is %d", +(a*a));
    }
    else
    {
        printf("number is odd...cube of the number is %d", +(a*a*a));
    }

}

