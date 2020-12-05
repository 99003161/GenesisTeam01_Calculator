 #include <calculator_operations.h>
int isprime(int operand1);

int add(int operand1, int operand2)
{
    return operand1 + operand2;
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
