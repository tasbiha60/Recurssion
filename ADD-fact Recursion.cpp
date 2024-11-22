int fact(int n)
{
    if(n==1){
        return 1;
    }
    else
        return n*fact(n-1);

}

#include<stdio.h>
int main(){
    int n=4;
    printf("%d",fact(n));
}
