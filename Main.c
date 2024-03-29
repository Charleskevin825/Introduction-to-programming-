#include <stdio.h>

int main() {
    int maths, english, biology, average;
    printf("Enter marks for maths, English, biology: ");
    scanf("%d %d %d", &maths, &english, &biology);
    average = (maths + english + biology) / 3;
    
    if (average >= 70 && average <= 100) 
        printf("Grade is A\n");
    else if (average >= 60 && average <= 69)
        printf("Grade is B\n");
    else if (average >= 50 && average <= 59)
        printf("Grade is C\n");
    else if (average >= 40 && average <= 49)
        printf("Grade is D\n");
    else if (average >= 30 && average <= 39)
        printf("Grade is E\n");
    else
        printf("Fail\n");

    return 0;
}