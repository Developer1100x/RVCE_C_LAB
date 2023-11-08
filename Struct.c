#include <stdio.h>
struct student {
    char name[50];
    int roll_number;
    float marks1;
    float marks2;
    float marks3;
    float avg;
} s[100];
int main() {
    int x,i,sum,a;
    printf("Enter the number of students: ");
    scanf("%d", &x);
    printf("\nEnter the students's informations:\n");
    for (i = 1; i <=x; i++) {
        s[i].roll_number = i ;
        printf("\nInformation for Roll Number:\t%d\n", s[i].roll_number);
        printf("Enter the first name: ");
        scanf("%s", s[i].name);
        printf("Enter the marks1: ");
        scanf("%f", &s[i].marks1);
        printf("Enter the marks2: ");
        scanf("%f", &s[i].marks2);
        printf("Enter the marks3: ");
        scanf("%f", &s[i].marks3);
        sum=(((s[i].marks3)+(s[i].marks2)+(s[i].marks1))/3);
        s[i].avg = sum;
    }
    printf("\n\nDisplay the student's information:\n");
    for (i = 1; i <=x; i++)
    {
        printf("\nThe Roll Number:%d\n", i );
        printf(" \n Name: \n");
        puts(s[i].name);
        printf("\nThe Marks1: %.1f\n", s[i].marks1);
        printf("\nThe Marks2: %.1f\n", s[i].marks2);
        printf("\nThe Marks3: %.1f\n", s[i].marks3);
        printf("\n The Avg: %.1f\n", s[i].avg);
        printf("\n");
    }
    printf("enter roll number o which details you want\n");
    scanf("%d",&a);
    printf("\nThe Roll Number:\t%d\n", a);
    printf("%d",a);
    printf(" \n Name: \n");
    puts(s[a].name);
    printf("\nThe Marks1: %.1f\n", s[a].marks1);
    printf("\nThe Marks2: %.1f\n", s[a].marks2);
    printf("\nThe Marks3: %.1f\n", s[a].marks3);
    printf("\n The Avg: %.1f\n", s[a].avg);
    printf("\n");
    return 0;
}

