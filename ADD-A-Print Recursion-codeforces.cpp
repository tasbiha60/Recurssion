void print(int n){
     if (n==0){
    return ;
    }
     else
        printf("I love Recursion\n");
        print  (n-1);
}


#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}


