  
#include <scientific_cal_operations.h>

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
int evenodd(int operand1)
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
    int fact = 1;
    // shows error if the user enters a negative integer
    if (operand1 < 0)
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
float sin_op(float operand)
float sin(float operand)
{
 return sin(operand);
}
float cos_op(float operand)
{
	return cos(operand);
}
float tan_op(float operand)
{
    return tan(operand);
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
float pythogoras(int side1,int side2)
{
    return sqrt((side1*side1)+(side2*side2));
}
float power(float x, float y)
{
    return (pow(x,y));
}
float sine(float  x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);
