// Program to specify data of students
#include <stdio.h>
#include <conio.h>
struct student
{
  char name[20],dept[20],course[20];
  int roll, year_join;
}
stud[450];
// Creating a function to specify data of students
void main ()
{
  int i,n;
  printf("\n\nEnter the number of student's: ");
  scanf("%d",&n);
// Creating a loop to store data from user's
  for(i=0;i<n;i++)
  {
  printf("---Enter the record of student---\n");
  printf("Enter Roll no: ");
  scanf("%d",&stud[i].roll);
  printf("Enter name: ");
  scanf("%s",&stud[i].name);
  printf("Enter Department: ");
  scanf("%s",&stud[i].dept);
  printf("Enter course: ");
  scanf("%s",&stud[i].course);
  printf("Enter year of joining: ");
  scanf("%d", &stud[i].year_join);
  printf("\n");
  }
// Creating a loop to print user's data
  for(i=0;i<n;i++)
  {
   printf("---Data of %d students is---\n", i+1);
   printf("Roll no of student is: %d\n",stud[i].roll);
   printf("Name of student is: %s\n",stud[i].name);
   printf("Departemt of student is: %s\n",stud[i].dept);
   printf("Course of student is: %s\n",stud[i].course);
   printf("Year of joining is: %d\n",stud[i].year_join);
   printf("\n");
  }
getch();
}