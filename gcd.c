#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter any two integers to find GCD: ");
    scanf("%d%d",&a,&b);
    while(b!=0){
        c = a%b;
        a=b;
        b=c;
    }
    printf("GCD is %d",a);
    return 0;
}
