<<<<<<< HEAD
  
//#include "scientific_cal_operations.h"
=======
 #include <calculator_operations.h>
>>>>>>> 455dc37421b38ecc5bf390be322f84290c1b373d

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
        return 2;
        //printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
             return 1;
            //printf("%d is a prime number.", operand1);
        else
             return 0;
            //printf("%d is not a prime number.", operand1);
    }
}
int even/odd(int operand1)
{
     if(operand1 % 2 == 0)
        return 1;
        //printf("%d is even.", operand1);
    else
        return 0;
        //printf("%d is odd.", operand1);
}
int factorial(int operand1)
{
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        return 0;
       // printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= operand1; ++i) {
            fact *= i;
        }
        return fact;
       // printf("Factorial of %d = %llu", operand1, fact);
    }
}
int sq(int operand1)
{
    int result;
  result = sqrt(operand1);
  return result;
  //printf("Square root of %.2lf = %.2lf\n", operand1, result);
}
int cu(int operand1)
{
   int result;
  result = cbrt(operand1);
  return result; 
}
int power(int base, int component)
{
    int result=1;
    for(exponent;exponent>0;exponent--)
    {
        result=result*base;
    }
    return result;
}
float BMI(float weight,float height)
{
	return (weight/(height*height))
}

int age_calculator(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {
   if (birth_date > present_date) {
      present_month = present_month - 1;
   }
   if (birth_month > present_month) {
      present_year = present_year - 1;
   }
   int final_year = present_year - birth_year;
   return final_year; 
}
<<<<<<< HEAD
=======
<<<<<<< HEAD
float sin_op(float operand)
=======
<<<<<<< HEAD
=======
>>>>>>> c8663133c0f93e6bdfb6b75b67e6f454dc32dc35
float sin(float operand)
>>>>>>> dc8ef4f4c8d41226f168f801220bed7f74f85ac0
{
 return sin(operand);
}
float cos_op(float operand)
{
	return cos(operand);
}

<<<<<<< HEAD
=======
>>>>>>> 455dc37421b38ecc5bf390be322f84290c1b373d
<<<<<<< HEAD
float tan_op(float operand)
{
    return tan(operand);

}
int blood_pressure(float bp_rate)
{
    if((bp_rate>=80)&&(bp_rate<=120))
    {
        return 1;
    }
    return 0;
}
int blood_sugar(float sugar_level)
{
    if((sugar_level>=70)&&(sugar_level<=130))
    {
        return 1;
    }
    return 0;
}
float pythogoras(int side1,side2)
{
    return sqrt((side1*side1)+(side2*side2));
}

=======
>>>>>>> c8663133c0f93e6bdfb6b75b67e6f454dc32dc35
>>>>>>> 0637bd22cd5a4be5549feccfb90def3487ba4e8d
>>>>>>> dc8ef4f4c8d41226f168f801220bed7f74f85ac0
