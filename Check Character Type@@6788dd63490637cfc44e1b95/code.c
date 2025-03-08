#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(isdigit(ch)){
    printf("Digit");
  }
  else if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
    char lower_ch = islower(ch);
    if(lower_ch=='a' || lower_ch=='e' || lower_ch=='i' || lower_ch=='o' || lower_ch=='u'){
        printf("Vowel");
    }
    else{
        printf("consonant");
    }

  }
  else{
    printf("Special Character");
  }




	return 0;
}

