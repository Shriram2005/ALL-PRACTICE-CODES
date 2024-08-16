#include <stdio.h>

int main() {
  long int n, sum = 0, r;
  printf("enter the number=");
  scanf("%ld", &n);
  int length = 0;

  while (n > 0) {
    length++;
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
  }
  n = sum;
  while (n > 0) {
    r = n % 10;
    switch (r) {
    case 0:
      printf("zero ");
      break;
    case 1:
      printf("one ");
      break;
    case 2:
      printf("two ");
      break;
    case 3:
      printf("three ");
      break;
    case 4:
      printf("four ");
      break;
    case 5:
      printf("five ");
      break;
    case 6:
      printf("six ");
      break;
    case 7:
      printf("seven ");
      break;
    case 8:
      printf("eight ");
      break;
    case 9:
      printf("nine ");
      break;

    default:
      printf("not vaild");
      break;
    }

    if (length == 5)
      printf("lakh ");
    else if (length == 4)
      printf("thousand ");
    else if (length == 3)
      printf("hundred and ");

    length--;

    n = n / 10;
  }

  return 0;
}
