#include<stdio.h>
int main(){
int mynumbers[]={23,43,65,76,87};
int length=sizeof(mynumbers)/sizeof(mynumbers[0]);
int i;
for(i=0;i<length;i++){
printf("%d\n", mynumbers[i]);
}
return 0;
}
