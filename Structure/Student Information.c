#include<stdio.h>
#include<string.h>
struct students{
char name[50];
int roll;
float Gpa;
};
int main(){
int num_students;
printf("Total Students: \n");
scanf("%d",&num_students);
while(getchar() != '\n');
struct students Info[num_students];
for(int i=0;i<num_students;i++){
printf("Enter details for student%d\n",i+1);
printf("Enter student's name: ");
fgets(Info[i].name,sizeof(Info[i].name), stdin);
Info[i].name[strcspn(Info[i].name, "\n")]='\0';
printf("Enter roll: \n");
scanf("%d",&Info[i].roll);
while(getchar() != '\n');
printf("Enter Gpa: \n");
scanf("%f",&Info[i].Gpa);
while(getchar() != '\n');
}
int enterROLL;
int found =0;
printf("\n\n");
printf("Enter Student's Roll: ");
scanf("%d",&enterROLL);
for(int i=0;i<num_students;i++){
if( Info[i].roll==enterROLL ){
printf("Student Info found\n");
printf("Name:%s\n",Info[i].name);
printf("Gpa:%.2f\n",Info[i].Gpa);
found=1;
break;
}
}
if(!found){
printf("Student's Info with Roll %d not found\n",enterROLL);
}
return 0;
}



