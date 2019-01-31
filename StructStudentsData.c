/*
                            Struct for Students data
    By: Arose Niazi
    FA18-BSE-10
    Started On: 13-12-2018
    Last Edited: 15-12-2018
    Functions:
        Takes input of 5 students
		Prints their data and calculate avg.
*/

/*
Includes:
    stdio.h -> Using for basic input output functions.
    conio.h -> Using for getch() function.
*/
#include <stdio.h>
#include <conio.h>

/*
Symbolic Constants:
    MAX_RECORDS using for easily editing if more records are to be added.
	MAX_SUBJECT using for easily editing if more subjects are to be added.
*/
#define MAX_RECORDS 	5
#define MAX_SUBJECT		3

/*
    Type:
        Defining a type for calling the functions.

    Using struct
		Name -> To store name upto 29 characters. 1 for '\o'.
		RollNo -> To store the students roll no.
		Marks[MAX_SUBJECT] -> To store students marks according to subject.
*/

typedef struct student {
	char Name[30];
	int RollNo;
	float Marks[MAX_SUBJECT];
} Students;

/*
User defined functions:
    Menu -> Prints the available menu for the user.
    GetInput -> Gets the data of next student.
    PrintData -> Prints the data of all the students entered till now.
    CalculateAvg -> Used to calculate the avg of all subjects.
    GetOrdinal -> Used to get ordinal name id for the number.
*/

int Menu();
void GetInput(Students *std_ptr);
void PrintData(Students std[]);
float CalculateAvg(float marks_[]);
int GetOrdinal(int pos);


/*
    Global String Array's:
        OrdinalText -> store the possible ordinal names.

*/
char OrdinalText[4][3] =
{
	"st","nd","th","rd"
};

int records=0; //This is used to keep track of data for the entered students.

int main()
{
	static Students std[MAX_RECORDS];//Using static so it won't be destroyed when function is called again or ends. 
	switch(Menu())
	{
		case 1:
			GetInput(&std[records]);
			main();
			break;
		case 2:
			PrintData(std);
			main();
			break;
		case 3:
			break;
		default:
			main();
	}
	return 0;
}

int Menu()
{
	char option_c;
	int option;
	printf("\n\n*** Please select an option ***");
    if(records < MAX_RECORDS)
    {
		printf("\n1. Enter student %d%s data.",records+1,OrdinalText[GetOrdinal(records+1)]);
		printf("\n2. Print all data.");
		printf("\n3. End Program.");
    }
    else
    {
		printf("\n1. Print all data.");
		printf("\n2. End Program.");
    }
    for(;;)
	{
		option_c=getch();
		if(option_c == '1') option =1;
		else if(option_c == '2') option =2;
		else if(option_c == '3') option = 3;
		else  option = MAX_RECORDS;
		if(records >= MAX_RECORDS) option++;
		if(option < 4) return option;
	}
}

void GetInput(Students *std_ptr)
{
	int i;
	printf("\n\t*** %d%s STUDENT DATA ***",records+1,OrdinalText[GetOrdinal(records+1)]);
	printf("\n\t\tEnter name: ");
	fflush(stdin);
	gets(std_ptr->Name);
	fflush(stdin);
	printf("\t\tEnter roll number: ");
	scanf("%d",&std_ptr->RollNo);
	for(i=0; i<MAX_SUBJECT; i++)
	{
		printf("\t\tEnter %d%s subject marks: ",i+1,OrdinalText[GetOrdinal(i+1)]);
		scanf("%f",&std_ptr->Marks[i]);
	}
	records++;
}

void PrintData(Students std[])
{
	int i,k;
	printf("\n%-30s%-10s%","Name","Roll No");
	for(i=0; i<MAX_SUBJECT; i++) printf("%2d%s %-10s",i+1,OrdinalText[GetOrdinal(i+1)],"Subject");
	printf("%-10s","Average");
	for(i=0; i<records; i++)
	{
		printf("\n%-30s%-10d%",std[i].Name,std[i].RollNo);
		for(k=0; k<MAX_SUBJECT; k++) printf("%-15.2f",std[i].Marks[k]);
		printf("%-10.2f",CalculateAvg(std[i].Marks));
	}
}

float CalculateAvg(float marks_[])
{
	int i,m=0;
	for(i=0; i<MAX_SUBJECT; i++) m+=marks_[i];
	return m/(float) MAX_SUBJECT;
}

int GetOrdinal(int pos)
{
	if(pos == 11 || pos == 12 || pos == 13) return 2;
	else if(pos - (pos / 10) * 10 == 1) return 0;
	else if(pos - (pos / 10) * 10 == 2) return 1;
    else if(pos - (pos / 10) * 10 == 3) return 3;
    else return 2;
}

