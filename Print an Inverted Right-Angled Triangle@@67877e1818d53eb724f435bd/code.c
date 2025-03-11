#include<stdio.h>
int main(){

scanf("%d",&a);
for(i=0;i<a;i++){
    for(j=a;j>i;j--){
        printf("*");
    }
    printf("\n");
}
}