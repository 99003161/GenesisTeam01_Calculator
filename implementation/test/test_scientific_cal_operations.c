
#include <scientific_cal_operations.h>
#include "unity.h"
#include "unity_internals.h"
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulodivision(void);
void test_isprime(void);
void test_isnotprime(void);
void test_even(void);
void test_odd(void);
void test_factorial(void);
void test_sq(void);
void test_cu(void);
void test_BMI(void);
void test_blood_pressure(void);
void test_blood_sugar(void);
void test_pythogoras(void);
void test_pound_to_kg(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulodivision);
  RUN_TEST(test_isprime);
  RUN_TEST(test_isnotprime);
  RUN_TEST(test_even);
  RUN_TEST(test_odd);
  RUN_TEST(test_factorial);
  RUN_TEST(test_sq);
  RUN_TEST(test_cu);
  RUN_TEST(test_BMI);
  RUN_TEST(test_blood_pressure);
  RUN_TEST(test_blood_sugar);
  RUN_TEST(test_pythogoras);
  RUN_TEST(test_pound_to_kg);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) 
{
  TEST_ASSERT_EQUAL(30, add(10, 20));
}
void test_subtract(void)
{
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
}
void test_multiply(void)
{
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
}

void test_divide(void)
{
  TEST_ASSERT_EQUAL(0, divide(1, 0));
}
void test_modulodivision(void)
{
   TEST_ASSERT_EQUAL(0, modulodivision(1, 0));
}
void test_isprime(void)
{
    TEST_ASSERT_EQUAL(1,isprime(2));
}
void test_isnotprime(void)
{
    TEST_ASSERT_EQUAL(0,isprime(6));
}
void test_even(void)
{
    TEST_ASSERT_EQUAL(1,evenodd(2));
}
void test_odd(void)
{
    TEST_ASSERT_EQUAL(0,evenodd(3));
}
void test_factorial(void)
{
    TEST_ASSERT_EQUAL(120,factorial(5));
}
void test_sq(void)
{
    TEST_ASSERT_EQUAL(5,sq(25));
}
void test_cu(void)
{
    TEST_ASSERT_EQUAL(3,cu(9));
}
void test_BMI(void)
{
    TEST_ASSERT_EQUAL(8,BMI(200,5));
}
//void test_age_calculator(void)
void test_blood_pressure(void)
{
    TEST_ASSERT_EQUAL(1,blood_pressure(80));
}
void test_blood_sugar(void)
{
    TEST_ASSERT_EQUAL(1,blood_sugar(70));
}
void test_BPM(void)
{
    TEST_ASSERT_EQUAL(1,heart_rate(60));
}
void test_pythogoras(void)
{
    TEST_ASSERT_EQUAL(5,pythogoras(3,4));
}
void test_pound_to_kg(void)
{
    TEST_ASSERT_EQUAL_FLOAT(9.07184,test_pound_to_kg(20));
}
