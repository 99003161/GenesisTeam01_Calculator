<<<<<<< HEAD:3_Implementation/main.c
#include<stdio.h>
int main()
{
    exit 0;
}
=======
#include <scientific_cal_operations.h>


/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULODIVISION,ISPRIME,EVENODD,FACTORIAL,SQUARE_ROOT,CUBE_ROOT,BMI1,AGE_CALCULATOR,BLOOD_PRESSURE,BLOOD_SUGAR,BPM1,PYTHOGORAS,POWER,SINE,COSINE,TANGENT,SINEH,COSINEH,TANGENTH,RIGHT_SHIFT,LEFT_SHIFT,BIT_AND,BIT_OR,BIT_XOR,BIT_COMPLEMENT,POUND_TO_KG,MILE_TO_KM,CELSIUS_TO_FARANHEIT,INCH_TO_CM,EXIT };
/* Display the menu of operations supported */
void calculator_menu(void);

/* Start of the application */
int main()
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    int calculator_operation;
    int operand1,operand2,operand3,operand4,shift_value,a,b,weight,height, present_date, present_month, present_year,birth_date, birth_month,birth_year,side1,side2,length,distance,temperature,heart_beat;
    float angle,bp_rate,sugar_level;
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulodivision\n6. Power\n7. Square_root\n8. Factorial\n9. Evenodd\n10. isprime\n11. BMI\n12. Age_calculator\n13. blood_pressure\n14. blood_sugar\15. BPM\16. pythogaras\17. pound_to_kg\18. mile_to_km\19. celsius_to_faranheit\20. inch_to_cm\21. pound_to_kg\22. sine\23. cosine\24. tangent\25. sineh\26. cosineh\27. tangenth\28. rightshift\29. leftshift\30. bit_and\31. bit_or\32. bit_xor\33. bit_complement\34. Exit");
    printf("\n\tEnter your choice\n");
    
    scanf("%d", &calculator_operation);
   
    switch(calculator_operation)
    {
        case ADD:
         
            printf("Enter the numbers to be added:\n");
            scanf("%d %d",&a,&b);
            add(a, b);
            
            break;
        case SUBTRACT:
            
            printf("Enter the numbers to be subtracted:\n");
            scanf("%d %d",&a,&b);
            subtract(a, b);
            break;
        case MULTIPLY:
            
            printf("Enter the numbers to be multiplied:\n");
            scanf("%d %d",&a,&b);
            multiply(a,b);
           
            break;
        case DIVIDE:
            
            printf("Enter the numbers to be divided:\n");
            scanf("%d %d",&a,&b);
            divide(a, b);
            
            break;
        case MODULODIVISION:
            printf("Enter the numbers to find modulus:\n");
            scanf("%d %d",&a,&b);
            modulodivision(a, b);
            
            break;
         case POWER:
           
            scanf("%d %d",&a,&b);
            power(a,b);
         
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
        case BMI1:
            
            scanf("%d %d",&weight,&height);
            BMI(weight,height);
            
            break;
      case AGE_CALCULATOR:
            
            scanf("%d %d %d %d %d %d",&present_date, &present_month, &present_year,&birth_date, &birth_month,&birth_year);
            age_calculator(present_date, present_month, present_year,birth_date, birth_month,birth_year);
            
            break;
      case BLOOD_PRESSURE:
            
            scanf("%f",&bp_rate);
           blood_pressure(bp_rate);
           
           break;
       case BLOOD_SUGAR:
            
            scanf("%f",&sugar_level);
           blood_sugar(sugar_level);
          
           break;
       case BPM1:
            
            scanf("%d",&heart_beat);
           BPM(heart_beat);
           break;
       case PYTHOGORAS:
            
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
           tangenth(angle);
          
           break;  
       case RIGHT_SHIFT:
            scanf("%d %d",&operand2,&shift_value);
          right_shift(operand2, shift_value);
           
           break;  
       case LEFT_SHIFT:
            scanf("%d %d",&operand2,&shift_value);
          left_shift(operand2, shift_value);
           
           break;  
       case BIT_AND:
            scanf("%d %d",&operand3,&operand4);
          bit_and(operand3, operand4);
           
           break; 
       case BIT_OR:
            scanf("%d %d",&operand3,&operand4);
         bit_or(operand3, operand4);
         
           break;  
       case BIT_XOR:
            scanf("%d %d",&operand3,&operand4);
          bit_xor(operand3, operand4);
           
           break;
       case BIT_COMPLEMENT:
          bit_complement(operand1);
           break; 
       case POUND_TO_KG:
            scanf("%d",&weight);
          pound_to_kg(weight);
           break; 
       case MILE_TO_KM:
            
            scanf("%d",&distance);
          mile_to_km(distance);
           break; 
       case CELSIUS_TO_FARANHEIT:
            
            scanf("%d",&temperature);
          celsius_to_faranheit(temperature);
           break; 
       case INCH_TO_CM:
            
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

>>>>>>> 718c71f9f0e4c160f21040ebfcf2dbc6b86585ab:implementation/main.c
