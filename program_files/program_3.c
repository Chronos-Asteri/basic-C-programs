// Write a program to find simple interest

# include <stdio.h>

int main(){
    
    float prn, rate, time, si;

    printf("Enter Principal: ");
    scanf("%f", &prn);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = prn * rate * time / 100;

    printf("Calculated Simple Interest is %f \n", si);

    return 0;

}



