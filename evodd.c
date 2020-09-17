#include<stdio.h>

int main()

{

int n;

    printf("Enter an Integer Number: ");

    scanf("%d",&n);

if((n & 1)==1)

    printf("odd");

else

    printf("even");

}
