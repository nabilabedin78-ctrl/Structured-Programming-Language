#include<stdio.h>
int main(){
int ages[]={23,43,54,65,12,87,98,56};
int length=sizeof(ages)/sizeof(ages[0]);
int i;
int lowestAge=ages[0];
for(i=0;i<length;i++){
if(ages[i]<ages[0]){
lowestAge=ages[i];
}
}
printf("The lowest age is %d",lowestAge);
return 0;
}

