// C program to print details of employees
#include <stdio.h>
#include<string.h>
struct employee {
char name[100];
int id;
int exp;
int salary;
};
void display(struct employee emp[] ,int n)
{
printf("Name\tId\tExp\tSalary\n");
for (int i = 0; i < n; i++)
{
printf("%s",emp[i].name);
printf("\t%d",emp[i].id);
printf("\t%d",emp[i].exp);
printf("\t%d",emp[i].salary);
printf("\n");
}
}
int main()
{
int n = 5;
struct employee emp[n];;

strcpy(emp[0].name,"Bhushan");
emp[0].id = 102;
emp[0].exp = 5;
emp[0].salary = 28000;

strcpy(emp[1].name,"Arnav");
emp[1].id = 103;
emp[1].exp = 9;
emp[1].salary = 50000;

strcpy(emp[2].name,"Shubham");
emp[2].id = 104;
emp[2].exp = 1;
emp[2].salary = 30500;

strcpy(emp[3].name,"Sahil");
emp[3].id = 105;
emp[3].exp = 4;
emp[3].salary = 34500;

strcpy(emp[4].name,"Shubham");
emp[4].id = 110;
emp[4].exp = 2;
emp[4].salary = 20500;

display(emp, n);

return 0;
}
