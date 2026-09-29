#include<stdio.h>
int main(){
int numbers[4]={3,6,7,5};
//print first element's value
printf("%d\n", *numbers);
//print 2nd element's value
printf("%d\n", *(numbers+1));
//print 3rd element's value
printf("%d\n", *(numbers+2));
//print 4th element's value
printf("%d\n", *(numbers+3));

printf("Print All elements of this array by pointer including Loop\n");
int *ptr=numbers;
int i;
for(i=0;i<4;i++){
printf("%d\n",*(ptr+i));
}
return 0;
}

