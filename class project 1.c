
#include <stdio.h>

 const char* calculategrade(int mark) {
    if (mark >= 80) return "A+";
    else if (mark >= 75&& mark<=79) return "A";
    else if (mark >= 70&& mark<=74) return "A-";
    else if (mark >= 65&& mark<=69) return "B+";
    else if (mark >= 60&& mark<=64) return "B";
    else if (mark >= 55&& mark<=59) return "B-";
    else if (mark >= 50&& mark<=54) return "C+";
    else if (mark >= 45&& mark<=49) return "C";
    else if (mark >= 40&& mark<=44) return "D";

    else return "F";
}

int main() {

    char studentname[60];
    int marks[6];
    int total = 0;
    float average;
    const char* grade;
    int failed = 0;


printf("Enter student name: ");

fgets(studentname, sizeof(studentname), stdin);

studentname[strcspn(studentname, "\n")] = 0;


      for (int i = 1; i <= 6; i++) {
        printf("Enter marks for subject %d: ", i );
        scanf("%d", &marks[i]);

        if (marks[i] < 40) {
            failed = 1;
        }
        total += marks[i];
    }


    if (failed) {
        printf("\nStudent: %s\n", studentname);
        printf("Result: Fail\n");
    } else {

        average = total / 6.0;


        grade = calculategrade((int)average);


        printf("\nStudent: %s\n", studentname);
        printf("Total Marks: %d\n", total);
        printf("Average Marks: %.2f\n", average);
        printf("Grade: %s\n", grade);
    }
    if(average>=40){
     if (average >= 80) {
            printf("Excellent performance! Keep it up.");
        }
        else if (average >= 60) {
            printf("Good job! Try to improve more.");
        }
         else {
            printf("You passed, but work harder next time.");
        }
    }
    else
    {
        printf("You Failed!! You Must Work Hard.");
    }

    return 0;
}
