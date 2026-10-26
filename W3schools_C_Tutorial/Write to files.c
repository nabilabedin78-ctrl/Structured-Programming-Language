#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("write in c file.txt","w");
fprintf(fptr,"This file is created by C language");
fclose(fptr);
return 0;
}
