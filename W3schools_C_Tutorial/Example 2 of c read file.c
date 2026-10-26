#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("NABIL.txt","r");
if(fptr==NULL){
printf("Unable to open the file\n");
}
else{
fclose(fptr);
}
return 0;
}
