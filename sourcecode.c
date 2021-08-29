/*
Author:     Ayushi
Task 1:     Report Card Generator App
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    printf("********************Welcome to Jawahar Navodaya Vidhyalya********************\n\n");

    usleep(2000000);

    char student_name[15];
    int class;
    char section;


    int mathematics, english, hindi, science, social_Science;
    char Grade;



    //Taking input rom user

    printf("Enter Your Name: \n");
    scanf("%[^\n]%*c",student_name);

    printf("Enter Your Standard: \n");
    scanf("%d", &class);

    while ((getchar()) != '\n');

    printf("Enter your class Section: \n");
    scanf("%c",&section);

    usleep(1000000);

    printf("\nPlease Enter marks out of 100 \n\n");

    while ((getchar()) != '\n');

    printf("Enter Mathematics Marks:\n");
    scanf("%d", &mathematics);

    printf("Enter English Marks:\n");
    scanf("%d", &english);

    printf("Enter Hindi Marks:\n");
    scanf("%d", &hindi);

    printf("Enter Science Marks:\n");
    scanf("%d", &science);

    printf("Enter Social Science Marks:\n"); 
    scanf("%d", &social_Science);


    // calculating total marks

    int totalMarks = mathematics + english + hindi + science + social_Science;

    // for generating grade based on marks we use if-else coditional statement

    if (totalMarks >= 450 && totalMarks <= 500)
    {
        Grade = 'A';
    }
    else if (totalMarks >= 400 && totalMarks <= 449)
    {
        Grade = 'B';
    }
    else if (totalMarks >= 350 && totalMarks <= 399)
    {
        Grade = 'C';
    }
    else if (totalMarks >= 300 && totalMarks <= 349)
    {
        Grade = 'D';
    }
    else if (totalMarks >= 200 && totalMarks <= 299)
    {
        Grade = 'E';
    }
    else if (totalMarks >= 0 && totalMarks <= 200) 
    {
        Grade = 'F';
    }
    else
    {
        exit(0);   // terminate the program
    }



    // for generating Report Card   

    printf("\nReport Card Generating.................\n\n\n");

    usleep(5000000);


    printf("---------------------------------------------------------\n\n");

    printf("\t  Jawahar Navodaya Vidhyalya\n");

    printf("\t     Annual Report Card\n\n\n");

    printf("\t  Name: %s\n",student_name);

    printf("\t  Standard: %d\n", class);

    printf("\t  Section:  %c\n\n", section);

    printf("\t  Marks Secured Out of 100\n");

    printf("\t  Mathematics: %d\n", mathematics);

    printf("\t  English: %d\n", english);

    printf("\t  Hindi: %d\n", hindi);

    printf("\t  Science: %d\n", science);

    printf("\t  Social Science: %d\n", social_Science);

    printf("\n\t  Total marks secured: %d \n", totalMarks);

    printf("\t  Grade: %c",Grade);


    printf("\n---------------------------------------------------------\n\n");


    return 0;

}
