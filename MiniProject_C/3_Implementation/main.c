#include "advcalculator.h"

int main()
{
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int c;
    printf("\n####### Press 0 to quit the program ########\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for logarithmic \n");
    printf("Enter 7 for trignometric \n");
    printf("Enter 8  for exponetial \n");
    printf("Enter 9  for power \n");
    printf("Enter 10 for square\n");
    printf("Enter 11 for cube\n");
    printf("Enter 12 for squareroot\n");
    

    while (1)
    {
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &c);

        switch (c)
        {


    case 1:
        printf("Enter the numbers you want to add: ");
        int a, b;
        scanf("%d%d", &a, &b);
        int result= addition (a,b);
        printf("The sum of %d and %d is %d\n", a, b, result);
            break;
    case 2:
        printf("Enter the numbers you want to subtract: ");
        int a1, b1;
        scanf("%d%d", &a1, &b1);
        int result1 =subtraction (a1,b1);
        printf("The difference of %d and %d is %d\n", a1, b1,result1);
            break;
    case 3:
        printf("Enter the numbers you want to multiply: ");
        int a2, b2;
        scanf("%d%d", &a2, &b2);
         int result3= multiplication (a2,b2);
         printf("The product of %d and %d is %d\n", a2, b2,result3);
        
            break;
    case 4:
         printf("Enter the numbers you want to divide: ");
         int a3, b3;
          scanf("%d%d", &a3, &b3);
            float result4=division(a3,b3);
          printf("The division of %d and %d is %f\n", a3, b3,result4);
          
            break;
    case 5:
     printf("Enter the numbers you want to find modulus of: ");
    int a4, b4;
    scanf("%d%d", &a4, &b4);
     int result5=modulus(a4,b4);
    printf("The modulus of %d and %d is %d\n", a4, b4,result5);
    break;
            
    float a5 = 0.0;
    case 6:
	printf("Enter the value to calculate the log(e): ");
	scanf("%f",&a5);
           float result6=logarithmic(a5);
            printf("%f\n",result6);

        	break;
       int op = 0;
	float val = 0.0;
    case 7:

	printf("Select\n");
	printf("[1] Sine\n");
	printf("[2] Cosine\n");
	printf("Op: ");
	scanf("%d",&op);
	printf("Enter value: ");
	scanf(" %f",&val);
        	float result7= trignometric(op,val);
        	printf(" Result is %f",result7);
        	break;
    float base = 0.0;
	float eee = 0.0;
    case 8:

	printf("Enter base:");
	scanf("%f",&base);
	printf("Enter expnent: ");
	scanf("%f",&eee);
        	float result8=exponential (base,eee);
            printf("%f\n",result8); 
        	break;	
    int a9;
    int b9;
    case 9:
    printf("Enter the base and the power: ");
    scanf("%d%d", &a9, &b9);
    int ans = p(a9, b9);
    printf("The power is %d", ans);
    break;
    
     int a10;
    case 10:
    printf("Enter the number you want the square of: ");
    scanf("%d", &a10);
    int ans10 = p1(a10, 2);
    printf("The square of %d is %d", a10, ans10);
    break;
    
    int a11;
    case 11:
    printf("Enter the number you want the cube of: ");
    scanf("%d", &a11);
    int ans11 = p2(a11, 3);
    printf("The cube of %d is %d", a11, ans11);
    break;
    
	float a12;
    case 12:
    printf("Enter the number you want the square root of : ");
    scanf("%f", &a12);
    float ans12=squareroot(a12);
    printf("The square root of %f is %f", a12,ans12);
    break;
    
    case 0:
            exit(0);
    default:
            printf("\nInvalid operation!!!!\n");
        }
    }
   
    return 0;
}