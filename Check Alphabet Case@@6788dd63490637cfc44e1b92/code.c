#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch>='A' && ch<='Z'){
    printf("uppercase");

    }
    else if (ch>='a' && ch<='z'){
        printf("Lowercase");
    
    }
    else{
        printf("Not an alphabet");
    }
}