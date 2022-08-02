// to find - Square root , permutation,LCM,HCF,pow(),ceil(),floor(),absolute value
#include<stdio.h>
#include <math.h> 
#include <stdlib.h>

int factorial(int number){
    int i,fact=1;       
    for(i=1;i<=number;i++){    
        fact=fact*i;    
    } 
    return fact;
}


int Hcf(int num1,int num2){

    int a,b,r,gcd;
    if (num1>num2){
        a = num1, b = num2;
    }
    else{
        a = num2, b = num1;
    }

  while (b>0){
    r = a%b;
    a = b;
    b = r;
  }
  gcd = a;
  return gcd;

}


int Lcm(int num1,int num2){
   int lcm,gcd;
   gcd = Hcf(num1,num2);
   lcm = (num1*num2)/ gcd;
   return lcm;

}



int main()
{   
    int choice=0,number1,a,b,num1,num2,num3,num4,num,power;
    double result,n1,n2,numb;
    printf("\nPlease enter which of the following values you wish to calculate:\n");
    printf("1. Square root\n2. Permutation\n3. LCM\n4. HCF\n5. Power *pow()*\n6. ceil()\n7. floor()\n8. Absolute value()\n9. Exit program");
   
    while (choice!=9){
        printf("\n Enter your Choice :");
        scanf("%d",&choice);
    switch (choice)
    {
        
    case 1:
   
        printf("\nEnter the number you wnat to find squar root of:");
        scanf("%d",&number1);
        result = sqrt(number1);
        break;
    case 2:
   
        printf("\nEnter the values to complete the permutation function P(?,?) :");
        scanf("%d %d",&a,&b);
        result = factorial(a)/factorial(a-b) ;
        break;
    case 3:
  
        printf("\nEnter the values to complete the function LCM(?,?) :");
        scanf("%d %d",&num1,&num2);
        result = Lcm(num1,num2);
        break;
    case 4:

        printf("\nEnter the values to complete the function HCF(?,?) :");
        scanf("%d %d",&num3,&num4);
        result = Hcf(num3,num4);
        break;
    case 5:

        printf("\nEnter the values to complete the function Pow(?,?) :");
        scanf("%d %d",&num,&power);
        result = pow(num,power);
        break;
    case 6:

        printf("\nEnter the number you want ceil value for:");
        scanf("%lf",&n1);
        result = ceil(n1);
        break;
    case 7:
 
        printf("\nEnter the number you want floor value for:");
        scanf("%lf",&n2);
        result = floor(n2);
        break;
    case 8:

    printf("\nEnter the number you want absolute value for:");
    scanf("%lf",&numb);
    result=abs(numb);
    break;

    case 9:
    printf("Thanks for using the program ~ Ananya");
    exit(0);

    default:
        printf("\nInvalid choice try again!\n");
    }
    printf("\nThe answer is %lf",result);

    }
    }