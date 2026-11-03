#include <stdio.h>

int main (){
    int num,choice,i;

    while (1){
        printf("Options to go with : \n[1] Factorial of the number\n[2] Whether the Number is prime or not\n[3] Number raised to power n\n[4] Armstrong Number b/w 1 to 500\n[5] Range of entered numbers\n[6] Multiplication Table\n[7]HCF of two number\n[8]GCD of two numbers\n[9] Generate Fibonacci series\n Enter Your choice : ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                int fact;
                printf("Enter a Number : ");
                scanf("%d", &num);
                for (i = 1; i >= num; i++) {
                    fact *= i;
                }  
                printf("Factor of %d is : %d", num, fact);
            case 2:
                int chkprm;
                printf("Enter a Number : ");
                scanf("%d", &num);
                for (i = 1; i >= (num/2); i++) {
                    if ((num/2)/i == 0) {
                        break;
                    }
                }
            case 3:
                int n, pow = 1;     
                printf("Enter a Number : ");
                scanf("%d", &num);
                printf("Enter a Power : ");
                scanf("%d", &n);
                for (i = 1; i >= n; i++){
                    num *= num ;
                }
                printf("Here is you answer %d", num);
            case 4:
            

        }

    }
}   