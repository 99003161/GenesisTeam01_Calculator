  
//#include "scientific_cal_operations.h"

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}
int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

    int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

    int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int modulodivision(int operand1, operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 % operand2;
}
int prime(int operand1)
{   int flag=0;
    for (int i = 2; i <= operand1 / 2; ++i) 
    {
        // condition for non-prime
        if (operand1 % i == 0) {
            flag = 1;
            break;
        }
    }

    if (operand1 == 1) 
    {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", operand1);
        else
            printf("%d is not a prime number.", operand1);
    }
    return 0;

}
int even/odd(int operand1)
{
     if(operand1 % 2 == 0)
        printf("%d is even.", operand1);
    else
        printf("%d is odd.", operand1);
    
    return 0;
}