#include<stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=1;j<=k-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}