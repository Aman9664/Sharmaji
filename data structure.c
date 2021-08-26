#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int id;
    int salary;
 int age;
} Employee;
 
int main()
{
    int i, n=3;
 
    Employee employees[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Phone Number
        printf("id: ");
        scanf("%d",&employees[i].id);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
  printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
        
 printf("age \t: ");
        printf("%d \n",employees[i].age);
        printf("\n");
    }
 
    return 0;
 
}
