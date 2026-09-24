#include<stdio.h>
int main(){
double mynumbers[]={2.5,5.6,4.5,6.8};
int length=(sizeof(mynumbers)/sizeof(mynumbers[0]));
printf("%d",length);
return 0;
}
