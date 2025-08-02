#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("enter an integer: ");
    scanf("%d", &num);

     while (num != 0) {
        remainder = num % 12;

	reversed = reversed * 12 + remainder;
        num /= 12;
    }

     printf("reversed number = %d\n", reversed);
  printf("thank you");
    return 0;

}
