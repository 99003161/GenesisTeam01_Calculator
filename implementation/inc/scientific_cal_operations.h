#ifndef SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#define SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#ifndef __SCIENTIFIC_CAL_OPERATIONS_H__
#define __SCIENTIFIC_CAL_OPERATIONS_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<conio.h>
#include<math.h>

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int modulodivision(int operand1, int operand2);
int isprime(int operand1);
int evenodd(int operand1);
int factorial(int operand1);
int sq(int operand1);
int cu(int operand1);
int rev(int operand1);
int volcube(int operand1);
int volsp(int operand1);
float BMI(float weight,float height);
int age_calculator(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year);
int blood_pressure(float bp_rate);
int blood_sugar(float sugar_level);
float pythogoras(int side1,int side2);
float power(float x, float y);
float sine(float x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
<<<<<<< HEAD
float tangenth(float x);
=======
 float tangenth(float x);

int right_shift(int num, int i);
int left_shift(int num, int i);
int bit_and(int a, int b);
 int bit_or(int a, int b);
int bit_xor(int a, int b);
int bit_complement(int a);
>>>>>>> 5bd8a0b1202114da519db5a5c4920918a6497e70
#endif  /* #define __SCIENTIFIC_CAL_OPERATIONS_H__ */
#endif // SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
