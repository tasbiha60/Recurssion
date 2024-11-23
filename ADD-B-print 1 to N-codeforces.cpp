void print(int n)
{

    if(n>1){
            print (n-1);
          }



          printf("%d\n",n);
}



#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
