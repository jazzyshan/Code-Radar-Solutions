#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    if(91>a>64){
    printf("uppercase");

    }
    else if (122>=a>=97){
        printf("Lowercase");
    
    }
    else{
        printf("Not an alphabet");
    }
}