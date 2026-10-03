#include<stdio.h>
void myfunction(int numbers[5]){
for(int i=0;i<5;i++){
printf("%d\n",numbers[i]);
}
}
int main(){
int numbers[5]={25,54,65,76,78};
myfunction(numbers);
return 0;
}
