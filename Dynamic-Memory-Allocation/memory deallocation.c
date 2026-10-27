#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*)malloc(5*sizeof(int));
if(ptr==NULL){
printf("Memory not allocated\n");
}
else{
printf("Memory Allocation successful.\n");
free(ptr);
printf("Memory freed Successfully\n");
}
return 0;
}

