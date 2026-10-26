#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("C file.txt","w");

fclose(fptr);
return 0;
}

