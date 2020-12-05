#ifndef SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#define SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#ifndef __SCIENTIFIC_CAL_OPERATIONS_H__
#define __SCIENTIFIC_CAL_OPERATIONS_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<math.h>

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int modulodivision(int operand1,int operand2);
int prime(int operand1);
int power(int base,int exponent);
int pos(int operand1);
int neg(int operand1);
int iszero(int operand1);
int even/odd(int operand1);
int perc(int operand1, int operand2);
int pmsq(int operand1, int operand2);
int pmrq(int operand1);
int pmrq(int operand1);
int pmcr(int operand1);
int pmtr(int operand1, int operand2);
int arrq(int operand1, int operand2);
int arsq(int operand1);
int arci(int operand1);
int factorial(int operand1);
int ams(int operand1);
int sq(int operand1);
int cu(int operand1);
int rev(int operand1);
int volcube(int operand1);
int volsp(int operand1);

float BMI(float weight,float height);

int age_calculator(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year);

#endif  /* #define __SCIENTIFIC_CAL_OPERATIONS_H__ */
#endif // SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED