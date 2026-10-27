#include<stdio.h>
float toCelsius(float fahrenheit){
return (9.0/5.0) * (fahrenheit-32);
}
int main(){
float CurrentTemp= 85.6F;
float result= toCelsius(CurrentTemp);
printf("Fahrenheit:%.2fF\n",CurrentTemp);
printf("Conversion result of Fahrenheit to Celsius:%.2fC\n",result);
return 0;
}


