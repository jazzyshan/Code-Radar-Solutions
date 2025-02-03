#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  char str[100];
  gets(str);
  print(You entered: "%s",str);
    return 0;
}