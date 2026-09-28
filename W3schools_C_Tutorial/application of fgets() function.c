#include<stdio.h>
int main(){
char fullname[30];
printf("Please enter your fullname: \n");
fgets(fullname, sizeof(fullname), stdin);
printf("Hello %s",fullname);
return 0;
}
