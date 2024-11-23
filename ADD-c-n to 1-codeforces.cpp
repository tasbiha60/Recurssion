void print(int n){
 
    if(n>0){
            printf("%d", n);
    if(n!=1){
        printf(" ");
    }
 
        print (n-1);
    }
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    print(n);
    printf("\n");
    return 0;
}
