#include <stdio.h>

int GetNumber();
int Add();
int Sub();

int main(int argc, char const *argv[]) {
  int input = 0;

  switch (input) {
    case 1:
     int answer = Add();
     printf("%d\n",answer);
    break;
    case 2:
     int answer = Sub();
     printf("%d\n",answer);
  }
  return 0;
}
int GetNumber(){
  int* number = 0;
  printf("Zahl eingeben: \n");
  scanf("%d\n",number);
  return number;
}
int Add(){
  int number1 = GetNumber;
  int number2 = GetNumber;
  int answer = 0;

  answer = number1 + number2;
  return answer;
}
int Sub(){
  int number1 = GetNumber;
  int number2 = GetNumber;
  int answer = 0;

  answer = number1 - number2;
  return answer;
}
