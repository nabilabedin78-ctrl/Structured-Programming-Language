#include<stdio.h>
void solve(int n);
int main(){
int n=8;
solve(n);
return 0;
}
void solve(int n){
if(n==0){
return;
}
solve(n-1);
printf("%d\n",n);
}


