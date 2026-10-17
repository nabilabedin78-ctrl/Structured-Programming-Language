#include<stdio.h>
void add(){printf("Add\n");}
void multiply(){printf("Multiply\n");}
void subtract(){printf("Subtract\n");}
int main(){
void (*operations[3])()={add,multiply,subtract};
for(int i=0;i<3;i++){
operations[i]();
}
return 0;
}
