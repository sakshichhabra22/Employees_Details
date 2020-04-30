int i;
struct employee
{
  int empno;
  char empname[20];
  char department_name[30];
  int salary;
};
struct employee input()
{
  struct employee e;
  for(i=0;i<20;i++)
  {
    printf("\nEnter information of employee %d : ",i+1);
    
    printf("\nName: ");
    scanf("%s",e.empname);
    printf("\nDepartment Name: ");
    scanf("%s",e.department_name);
    printf("\nSalary: ");
    scanf("%d",&e.salary);
  }
  return(e);
};

void display(struct employee e)
{
  
  for(i=0;i<20;i++)
  {
    e.empno= i+1;
    printf("\nEmployee %d",e.empno);
    printf("\n Name: %s\n Department name: %s\n Salary: %d\n",e.empname,e.department_name,e.salary);
  }
}
void main()
{
  struct employee e1;
  e1 = input();
  printf("Details of employees is as follows: ");
  display(e1);
  return 0;
}
