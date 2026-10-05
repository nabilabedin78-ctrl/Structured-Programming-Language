#include<stdio.h>
int calculatesum(int x, int y){
return x+y;
}
int main(){
int resultarr[6];
resultarr[0]=calculatesum(89,67);
resultarr[1]=calculatesum(78,45);
resultarr[2]=calculatesum(12,43);
resultarr[3]=calculatesum(34,67);
resultarr[4]=calculatesum(56,67);
resultarr[5]=calculatesum(23,76);
for(int  i=0;i<6;i++){
printf("Result%d is %d\n",i+1,resultarr[i]);
}
return 0;
}
