#include<stdio.h>
#include<stdbool.h>
int main(){
int age=19;
bool ispermission=age>=18;
if(ispermission){
printf("Allowed");
}
else{
printf("Not Allowed");
}
return 0;
}
