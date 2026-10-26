#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("write in c file.txt","a");
fprintf(fptr, "\n Hello Everyone");
fclose(fptr);
return 0;
}

