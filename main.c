#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
  if (n > 1){
    return digit_sum(n / 10) + n%10;
  }
  else{
    return 0;
  }
}

int main(void){
  int N = atoi(readline("Enter an in: "));
  printf("sum of digits of %i is %i.\n",N ,digit_sum(N));
}