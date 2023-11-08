#include <stdio.h>

long int hcf(long int, long int);

int main()
{
  long int number1, number2, gcd, lcm;
  printf("Enter two  numbers:\n");
  scanf("%ld%ld", &number1, &number2);

  gcd = hcf(number1, number2);
  lcm = (number1*number2)/gcd;

  printf("HCF of %ld and %ld = %ld\n", number1, number2, gcd);
  printf("LCM of %ld and %ld = %ld\n", number1, number2, lcm);

  return 0;
}

long int hcf(long int a, long int b) {
  if (b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b, a % b);
  }
}

