#include<stdio.h>
int main(){
int example[2][4][3]={
{ { 4, 3, 2 }, { 1, 5, 9 }, { 8, 5, 3 }, { 2, 9, 4 } },
{ { 2, 9, 6 }, { 1, 2, 3 }, { 7, 8, 5 }, { 2, 3, 4 }}
};
for(int i=0;i<2;i++){
printf("Block:%d\n",i+1);
for(int j=0;j<4;j++){
for(int k=0;k<3;k++){
printf("%d",example[ i ] [ j ][ k ]);
}
printf("\n");
}
printf("\n");
}
return 0;
}
