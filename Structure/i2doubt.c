//struture within a structure
#include<stdio.h>
struct stu_personal_info{
	char stu_name[10];
	char fathers_name[10];
    char mothers_name[10];
};
struct stu_college_info{
	struct stu_personal_info p1;
	int student_id;
	int roll_no;
}p2;
void main()
{
	struct stu_college_info p2;
    printf("Enter students name:");
	scanf("%s",&p2.p1.stu_name);
	printf("Enter fathers name:");
	scanf("%s",&p2.p1.fathers_name);
	printf("Enter mothers name:");
	scanf("%s",&p2.p1.mothers_name);
	printf("Enter students id:");
	scanf("%d",&p2.student_id);
	printf("Enter students roll number:");
	scanf("%d",&p2.roll_no);
	printf("\n Entered Record...\n");
	printf("STUDENTS NAME:%s\n",p2.p1.stu_name);
	printf("FATHERS NAME:%s\n",p2.p1.fathers_name);
	printf("MOTHERS NAME:%s\n",p2.p1.mothers_name);
	printf("STUDENT ID:%d\n",p2.student_id);
	printf("ROLL NUMBER:%d\n",p2.roll_no);
}
