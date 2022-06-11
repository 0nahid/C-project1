#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            if(marks >90){
                printf("A+\n");
            }
            else if (marks >=87){
                printf("B+\n");
            }
            else if (marks >=84){
                printf("B\n");
            }
            else if (marks >=80){
                printf("B-\n");
            }
        }
        else if (marks >=77){
            printf("C+\n");
        }
        else if (marks >= 74){
            printf("C\n");
        }
        else if(marks >= 70){
            printf("C-\n");
        }
        else if(marks >= 65){
            printf("D+\n");
        }
        else if(marks >= 60){
            printf("D\n");
        }
        else
        {
            printf("F\n");
        }
    }
    else
    {
        printf("Invalid marks\n");
    }
}