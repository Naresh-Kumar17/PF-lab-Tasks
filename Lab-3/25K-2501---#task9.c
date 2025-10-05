#include<stdio.h>
int main(){
	int student_id;
	int no_courses;
	int course_fess=25000;
	int transport=21000;
	printf("Enter your id: ");
	scanf("%d",&student_id);
	printf("Enter numberof courses: ");
	scanf("%d",&no_courses);
	printf("Student ID: %d \n",student_id);
	printf("Total Fess: %d ",no_courses*course_fess+transport);
	return 0;
}
