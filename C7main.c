/* 
 * File:   main.c
 * Author: user
 *
 * Created on November 21, 2018, 11:01 PM
 * Presentation C7
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
struct student {
    char name[50];
    char lname[50];
    int course;
    int groupid;
    int stud;
} s[10];

int main() {
    int i;
    int n;
    printf("Enter number of students:\n");
    scanf("%d", &n);
    //printf("Your number is %d\n",n);

    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < n; ++i) {
        s[i].stud = i + 1;

        printf("\nFor student number %d,\n", s[i].stud);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter last name: ");
        scanf("%s", &s[i].lname);

        printf("Enter course number: ");
        scanf("%d", &s[i].course);

        printf("Enter group id: ");
        scanf("%d", &s[i].groupid);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    printf("Student number\tName\t\tLast name\tCourse number\t  Group id\n");
    // displaying information
    for (i = 0; i < n; ++i) {
        printf("-----------------------------------------------------------------------------------------\n");
        printf("%d\t\t%s\t%s\t\t%d\t\t%d\n", i + 1, s[i].name, s[i].lname, s[i].course, s[i].groupid);

        //puts(s[i].name);
        //puts(s[i].lname);
        //printf("%d\t%d\n",s[i].course,s[i].groupid);
        //printf("%d\n",s[i].groupid);
        /*printf("\nStudent number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Last name: ");
        puts(s[i].lname);
        printf("Course number: %d",s[i].course);
        printf("Group id: %d",s[i].groupid);*/
        //printf("\n");
    }
    return 0;
}
