#include<stdio.h>
#include<string.h>
int main(){
char str1[]={"Hello"};
char str2[]={"Hi"};
char str3[]={"Hello"};
printf("%d\n",strcmp(str1,str3));
printf("%d\n", strcmp(str2,str3));
return 0;
}

