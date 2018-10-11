/*
  David Ignjatovic 2AHIF
  Pocket Calculator
  Grund der verspätenden abgabe: konnte leider nicht pushen
*/

#include <stdio.h>
#include <float.h>


int Menu(int* input);
void OutputResult(double result);
void GetOperands(double* x,double* y);
void Add(double x,double y,double* result);
void Subtract(double x, double y, double* result);
void Multiply(double x, double y,double* result);
void Divide(double x, double y, double* result);
int main(int argc, char const *argv[]);

int Menu(int* input)
{
  double n1;
  double n2;
  double result;

  printf("Choose one of the following operations:\n");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Stop program (-1)\n");
  scanf("%d",input);

switch (*input)
{
  case 1:
  GetOperands(&n1,&n2);
  Add(n1,n2,&result);
  OutputResult(result);
  printf("\n");
  break;
  case 2:
  GetOperands(&n1,&n2);
  Subtract(n1,n2,&result);
  OutputResult(result);
  printf("\n");
  break;
  case 3:
  GetOperands(&n1,&n2);
  Multiply(n1,n2,&result);
  OutputResult(result);
  printf("\n");
  break;
  case 4:
  GetOperands(&n1,&n2);
  if(n2!=0)
  {
    Divide(n1,n2,&result);
    OutputResult(result);
    printf(" \n");
  }
  else
  {
    printf("Division by Zero!\n");
    printf(" \n");
  }
  break;
  default:
  printf("Input not allowed, please try again\n");
  printf(" \n");
}
return *input;

}
void OutputResult(double result)
{
  if(result>DBL_MAX)
  {
    printf("Number overflow! \n");
  }
  else if(result<-DBL_MAX)
  {
    printf("Number underflow! \n");
  }
  else
  {
  printf("The result is: %lf\n", result);
  }
}
void GetOperands(double* x,double* y)
{
    printf("Please enter the first operand: \n");
    scanf("%lf",x );
    printf("Please enter the second operand: \n");
    scanf("%lf",y );
}
void Add(double x,double y,double* result)
{

  *result=x+y;
}
void Subtract(double x, double y, double* result)
{
  *result=x-y;
}
void Multiply(double x, double y,double* result)
{
  *result=x*y;
}
void Divide(double x, double y, double* result)
{
  *result= x/y;
}
int main(int argc, char const *argv[])
{
  int choice;

  while(choice!=-1)
  {
     Menu(&choice);
  }
  return 0;
}
