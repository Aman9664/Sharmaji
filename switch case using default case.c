#include<stdio.h>
main()
{
printf("A number :\n1.0\n2.1");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("you picked 0.");
break;
case 2:
printf("You picked 1.");
break;
default : printf("Invalid choice");
}
}

