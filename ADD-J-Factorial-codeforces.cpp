

long long fact(long long n)
{

    if(n==0 || n==1){
        return 1;
    }
    else
        return n*fact(n-1);
}








#include<stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", fact(n));
    return 0;

}











