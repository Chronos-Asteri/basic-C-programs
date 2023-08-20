// WAP to allocate grades to students

#include <stdio.h>

int main() {

    float sub_1;

    printf("Enter Marks Of Subject (x/100) : ");
    scanf("%f", &sub_1);

    if (sub_1 >= 91 && sub_1 <= 100) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: A+");
    }
    else if (sub_1 >= 81 && sub_1 <= 90) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: A");
    }
    else if (sub_1 >= 71 && sub_1 <= 80) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: B+");
    }
    else if (sub_1 >= 61 && sub_1 <= 70) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: B");
    }
    else if (sub_1 >= 51 && sub_1 <= 60) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: C+");
    }
    else if (sub_1 >= 41 && sub_1 <= 50) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: A");
    } 
    else if (sub_1 >= 34 && sub_1 <= 40) {
        printf("Scored : %f \n", sub_1);
        printf("Grade Allocated: F \n"); 
        printf("FAILED \n");
    }
    else {
    }   

    return 0;
}

