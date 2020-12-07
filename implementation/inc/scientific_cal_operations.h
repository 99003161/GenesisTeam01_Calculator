#ifndef SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#define SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
#ifndef __SCIENTIFIC_CAL_OPERATIONS_H__
#define __SCIENTIFIC_CAL_OPERATIONS_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
//#include<conio.h>
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
float BMI(int weight,int height);
int age_calculator(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year);
int blood_pressure(float bp_rate);
int blood_sugar(float sugar_level);
int BPM(int heart_beat);
float pythogoras(int side1,int side2);
float pound_to_kg(int weight);
int mile_to_km(int distance);
int celsius_to_faranheit(int temperature);
int inch_to_cm(int length);
int power(int operand1, int operand2);
float sine(float x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
int right_shift(int num, int i);
int left_shift(int num, int i);
int bit_and(int a, int b);
int bit_or(int a, int b);
int bit_xor(int a, int b);
int bit_complement(int a);
#endif  /* #define __SCIENTIFIC_CAL_OPERATIONS_H__ */
#endif // SCIENTIFIC_CAL_OPERATIONS_H_INCLUDED
