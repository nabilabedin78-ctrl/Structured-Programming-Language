#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("write in c file.txt","r");
char mystring[100];

if(fptr !=NULL){
while(fgets(mystring,100,fptr)){
printf("%s",mystring);
}
fclose(fptr);
}
else{
printf("Unable to read the file\n");
}
return 0;
}
