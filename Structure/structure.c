#include<stdio.h>
struct institution{
char *SEC;
int Established_year;
char *Location;
};
int main(){
struct institution data;
data.SEC="Sylhet Engineering College";
data.Established_year=2007;
data.Location="Tilagarh,Sylhet";
printf("%s\n",data.SEC);
printf("%d\n",data.Established_year);
printf("%s",data.Location);
return 0;
}
