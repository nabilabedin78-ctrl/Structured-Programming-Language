#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    float *marks;
    float sum=0.0,average;
printf("How many student's marks do you want to input?\n");
scanf("%d", &n);
marks =(float*)malloc(n*sizeof(float));
if (marks == NULL){
printf("Memory Allocation failed\n");
return 1;
}
printf("Enter %d student's marks: \n",n);
for(i = 0; i < n; i++){
printf("Student %d: ",i+1);
scanf("%f",&marks[i]);
sum += marks[i];
}
average=sum/n;
printf("Temp average = %.2f\n",average);
int new_n;
printf("Add other student's marks\n");
scanf("%d",&new_n);
int total_n =n+new_n;
float *temp =(float*)realloc(marks,total_n*sizeof(float));
if (temp == NULL){
printf("New memory allocation failed\n");
free(marks);
return 1;
}
marks=temp;
printf("Enter new %d student's marks: \n",new_n);
for(i=n;i<total_n;i++){
printf("Student %d: ",i+1);
scanf("%f", &marks[i]);
sum += marks[i];
}
average =sum/total_n;
printf("All student's marks average = %.2f\n",average);
free(marks);
printf("Memory freed successfully\n");
return 0;
}
