#include <stdio.h>

#define MAX_STUDENTS	2

typedef struct qua {
	int yearpast;
	char degree[20];
} Quali;

typedef struct stu {
	int rollno;
	char name[50];
	Quali Q[2];
} Stud;

int main()
{
	Stud S[MAX_STUDENTS];
	int i,k;
	for(i=0; i<MAX_STUDENTS; i++)
	{
		printf("Enter Student %d roll no: ",i+1);
		scanf("%d",&S[i].rollno);
		fflush(stdin);
		printf("Enter Student %d name: ",i+1);
		gets(S[i].name);
		for(k=0; k<2; k++)
		{
			printf("Enter Student %d Qualification %d year pass: ",i+1,k+1);
			scanf("%d",&S[i].Q[k].yearpast);
			printf("Enter Student %d Qualification %d degree name: ",i+1,k+1);
			fflush(stdin);
			gets(S[i].Q[k].degree);
		}
	}
	for(i=0; i<MAX_STUDENTS; i++)
	{
		printf("\n\n**********Student %d data**********\n",i+1);
		printf("Roll no: %d\nName: %s",S[i].rollno,S[i].name);
		for(k=0; k<2; k++)
		{
			printf("\n\tDegree: %s\n\t Year Passed: %d",S[i].Q[k].degree,S[i].Q[k].yearpast);
		}
	}
	return 0;
}

