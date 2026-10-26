#include<stdio.h>
#include <string.h>
struct myStructure {
  int Number;
  char Letter;
  char myString[30];
};
int main(){
  struct myStructure s1;
  strcpy(s1.myString, "Hello C");
  printf("My string: %s", s1.myString);
  return 0;
}
