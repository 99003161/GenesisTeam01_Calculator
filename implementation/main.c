#include <scientific_cal_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;



/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULODIVISION,ISPRIME,EVENODD,FACTORIAL,SQUARE_ROOT,CUBE_ROOT,BMI,AGE_CALCULATOR,BLOOD_PRESSURE,BLOOD_SUGAR,BPM,PYTHOGORAS,POWER,SINE,COSINE,TANGENT,SINEH,COSINEH,TANGENTH,RIGHT_SHIFT,LEFT_SHIFT,BIT_AND,BIT_OR,BIT_XOR,BIT_COMPLEMENT,POUND_TO_KG,MILLE_TO_KM,CELSIUS_TO_FARANHEIT,INCH_TO_CM,EXIT };
/* Display the menu of operations supported */
void calculator_menu(void);

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
    int operand1,operand2,operand3,operand4,shift_value;
    float angle;
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulodivision\n6. Power\n7. Square_root\n8. Factorial\n9. Evenodd\n10. isprime\n11. BMI\n12. Age_calculator\n13. blood_pressure\n14. blood_sugar\15. BPM\16. pythogaras\17. pound_to_kg\18. mile_to_km\19. celsius_to_faranheit\20. inch_to_cm\21. pound_to_kg\22. sine\23. cosine\24. tangent\25. sineh\26. cosineh\27. tangenth\28. rightshift\29. leftshift\30. bit_and\31. bit_or\32. bit_xor\33. bit_complement\34. Exit");
    printf("\n\tEnter your choice\n");
     __fpurge(stdin);
    scanf("%d", &calculator_operation);
   
    switch(calculator_operation)
    {
        case ADD:
            int a,b;
            printf("Enter the numbers to be added:\n")
            scanf("%d %d",&a,&b);
            add(a, b);
            
            break;
        case SUBTRACT:
            int c,d;
            printf("Enter the numbers to be subtracted:\n")
            scanf("%d %d",&c,&d);
            subtract(c, d);
            break;
        case MULTIPLY:
            int e,f;
            printf("Enter the numbers to be multiplied:\n")
            scanf("%d %d",&e,&f);
            multiply(e, f);
           
            break;
        case DIVIDE:
            int g,h;
            printf("Enter the numbers to be divided:\n")
            scanf("%d %d",&g,&h);
            divide(g, h);
            
            break;
        case MODULODIVISION:
            printf("Enter the numbers to find modulus:\n")
            scanf("%d %d",&i,&j);
            modulodivision(i, j);
            
            break;
         case POWER:
            int k,l;
            scanf("%d %d",&k,&l);
            power(k,l);
          
            break;
         case SQUARE_ROOT:
            scanf("%d",&operand1);
            sq(operand1);
            
            break; 
         case FACTORIAL:
             scanf("%d",&operand1);
            factorial(operand1);
            
            break;
          case ISPRIME:
             scanf("%d",&operand1);
            isprime(operand1);
            
            break;
        case EVENODD:
             scanf("%d",&operand1);
            evenodd(operand1);
            
            break;
        case CUBE_ROOT:
             scanf("%d",&operand1);
            cu(operand1);
            
            break;
        case BMI:
            int weight,height;
            scanf("%d %d",&weight,&height);
            BMI(weight,height);
            
            break;
      case AGE_CALCULATOR:
            int present_date, present_month, present_year,birth_date, birth_month,birth_year;
            scanf("%d %d %d %d %d %d",&present_date, &present_month, &present_year,&birth_date, &birth_month,&birth_year);
            age_calculator(present_date, present_month, present_year,birth_date, birth_month,birth_year);
            
            break;
      case BLOOD_PRESSURE:
            float bp_rate;
            scanf("%f",&bp_rate);
           blood_pressure(bp_rate);
           
           break;
       case BLOOD_SUGAR:
            float sugar_level;
            scanf("%f",&sugar_level);
           blood_sugar(sugar_level);
          
           break;
       case BPM:
             int heart_beat;
            scanf("%d",&heart_beat);
           BPM(heart_beat);
           break;
       case PYTHOGORAS:
            int side1,side2;
            scanf("%d %d",&side1,&side2);
            
           pythogoras(side1,side2);
           
           break;
       case SINE:
            
            scanf("%f",&angle);
           sine(angle);
          
           break; 
       case COSINE:
            scanf("%f",&angle);
           cosine(angle);
           
           break;  
       case TANGENT:
            scanf("%f",&angle);
           tangent(angle);
           
           break;   
       case SINEH:
            scanf("%f",&angle);
           sineh(angle);
          
           break;  
       case COSINEH:
            scanf("%f",&angle);
           cosineh(angle);
           
           break;  
       case TANGENTH:
            scanf("%f",&angle);
           tangenth(angle)
          
           break;  
       case RIGHT_SHIFT:
            scanf("%d %d",&operand2,&shift_value);
          right_shift(operand2, shift_value)
           
           break;  
       case LEFT_SHIFT:
            scanf("%d %d",&operand2,&shift_value);
          left_shift(operand2, shift_value);
           
           break;  
       case BIT_AND:
            scanf("%d %d",&operand3,&operand4);
          bit_and(operand3, operand4)
           
           break; 
       case BIT_OR:
            scanf("%d %d",&operand3,&operand4);
         bit_or(operand3, operand4)
         
           break;  
       case BIT_XOR:
            scanf("%d %d",&operand3,&operand4);
          bit_xor(operand3, operand4)
           
           break;
       case BIT_COMPLEMENT:
          bit_complement(operand1)
           break; 
       case POUND_TO_KG:
            int weight;
            scanf("%d",&weight);
          pound_to_kg(weight);
           break; 
       case MILE_TO_KM:
            int distance;
            scanf("%d",&distance);
          mile_to_km(distance);
           break; 
       case CELSIUS_TO_FARANHEIT:
            int temperature;
            scanf("%d",&temperature);
          celsius_to_faranheit(temperature);
           break; 
       case INCH_TO_CM:
            int length;
            scanf("%d",&length);
          inch_to_cm(length);
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
