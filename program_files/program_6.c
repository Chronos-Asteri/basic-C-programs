// Write a program to find smallest number

# include <stdio.h>

int main(){
    
    int num1, num2, num3;
    
    printf("Enter Number: ");
    scanf("%d", &num1);
    
    printf("Enter Number: ");
    scanf("%d", &num2);
    
    printf("Enter Number: ");
    scanf("%d", &num3);

    if (num1>num2 && num1>num3)

    {   
        printf("%d ", num1);
        printf("This Is The Greatest Number \n");
    }

    else if (num2>num3 && num2>num1)
    {
        printf("%d ", num2);
        printf("Is The Greatest Number \n");
    }

    else if (num3>num2 && num3>num1)
    {
        printf("%d ", num3);
        printf("Is The Greatest Number \n");
    }

    else{

    }
    

    return 0;

}



