#include<stdio.h>
int main(){

    int a,i,j;
    scanf("%d",&a);
    for(i=a;i<a;i--){
        for(j=a;j<i;j--){
            printf("*");
        }
        printf("");
    }
}