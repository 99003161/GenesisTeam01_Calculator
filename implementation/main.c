#include <scientific_cal_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int operand1 = 0;
int operand2 = 0;
int operand=0;
int weight=0;
int heart_beat=0;
int height=0;
int distance=0;
int temperature=0;
int length;
int present_date=0;
int present_month=0;
int present_year=0;
int birth_date=0;
int birth_month=0;
int birth_year=0;
float bp_rate=0;
float sugar_level=0;
int side1=0;
int side2=0;
float angle=0;
int shift_value=0;
int operand3=0; 
int operand4=0;
/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULODIVISION,ISPRIME,EVENODD,FACTORIAL,SQUARE_ROOT,CUBE_ROOT,BMI,AGE_CALCULATOR,BLOOD_PRESSURE,BLOOD_SUGAR,BPM,PYTHOGORAS,POWER,SINE,COSINE,TANGENT,SINEH,COSINEH,TANGENTH,RIGHT_SHIFT,LEFT_SHIFT,BIT_AND,BIT_OR,BIT_XOR,BIT_COMPLEMENT,POUND_TO_KG,MILLE_TO_KM,CELSIUS_TO_FARANHEIT,INCH_TO_CM,EXIT };
/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);

/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulodivision\n6. Power\n7. Square_root\n8. Factorial\n9. Evenodd\n10. isprime\n11. BMI\n12. Age_calculator\n13. blood_pressure\n14. blood_sugar\15. BPM\16. pythogaras\17. pound_to_kg\18. mile_to_km\19. celsius_to_faranheit\20. inch_to_cm\21. pound_to_kg\22. sine\23. cosine\24. tangent\25. sineh\26. cosineh\27. tangenth\28. rightshift\29. leftshift\30. bit_and\31. bit_or\32. bit_xor\33. bit_complement\34. Exit");
    printf("\n\tEnter your choice\n");
     __fpurge(stdin);
    scanf("%d", &calculator_operation);
    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            add(operand1, operand2);
            __fpurge(stdin);
            break;
        case SUBTRACT:
            subtract(operand1, operand2);
            __fpurge(stdin);
            break;
        case MULTIPLY:
            multiply(operand1, operand2);
            __fpurge(stdin);
            break;
        case DIVIDE:
            divide(operand1, operand2);
            __fpurge(stdin);
            break;
        case MODULODIVISION:
            modulodivision(operand1, operand2);
            __fpurge(stdin);
            break;
         case POWER:
            power(operand1, operand2);
            __fpurge(stdin);
            break;
         case SQUARE_ROOT:
            sq(operand1);
            __fpurge(stdin);
            break; 
         case FACTORIAL:
            factorial(operand1);
            __fpurge(stdin);
            break;
          case ISPRIME:
            printf("\n\t1 / %d = %d\nEnter to continue", 
            operand1, 
            isprime(operand1);
            __fpurge(stdin);
            break;
        case EVENODD:
            printf("\n\t%d US Dolars = %d Indian Rupees\nEnter to continue", 
            operand1, 
            evenodd(operand1);
            __fpurge(stdin);
            break;
        case CUBE_ROOT:
            cu(operand1);
            __fpurge(stdin);
            break;
        case BMI:
            BMI(weight,height);
            __fpurge(stdin);
            break;
      case AGE_CALCULATOR:
            age_calculator(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year)
            __fpurge(stdin);
            break;
      case BLOOD_PRESSURE:
           blood_pressure(float bp_rate);
           __fpurge(stdin);
           break;
       case BLOOD_SUGAR:
           blood_sugar(float sugar_level);
           __fpurge(stdin);
           break;
       case BPM:
           BPM(int heart_beat);
           __fpurge(stdin);
           break;
       case PYTHOGORAS:
           pythogoras(int side1,int side2);
           __fpurge(stdin);
           break;
       case SINE:
           sine(float angle);
           __fpurge(stdin);
           break; 
       case COSINE:
           cosine(float angle);
           __fpurge(stdin);
           break;  
       case TANGENT:
           tangent(float angle);
           __fpurge(stdin);
           break;   
       case SINEH:
           sineh(float angle);
           __fpurge(stdin);
           break;  
       case COSINEH:
           cosineh(float angle);
           __fpurge(stdin);
           break;  
       case TANGENTH:
           tangenth(float angle)
           __fpurge(stdin);
           break;  
       case RIGHT_SHIFT:
          right_shift(int operand, int shift_value)
           __fpurge(stdin);
           break;  
       case LEFT_SHIFT:
          left_shift(int opearnd, int shift_value);
           __fpurge(stdin);
           break;  
       case BIT_AND:
          bit_and(int operand3, int operand4)
           __fpurge(stdin);
           break; 
       case BIT_OR:
         bit_or(int operand3, int operand4)
           __fpurge(stdin);
           break;  
       case BIT_XOR:
          bit_xor(int operand3, int operand4)
           __fpurge(stdin);
           break;
       case BIT_COMPLEMENT:
          bit_complement(int operand3)
           break; 
       case POUND_TO_KG:
          pound_to_kg(int weight);
           break; 
       case MILE_TO_KM:
          mile_to_km(int distance);
           break; 
       case CELSIUS_TO_FARANHEIT:
          celsius_to_faranheit(int temperature);
           break; 
       case INCH_TO_CM:
          inch_to_cm(int length);
           break; 
       case 35:
            exit(0);
            break; 
        default:
            printf("\n\t---It should never come here---\n");
    }
}
int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
