#include<stdio.h>

int main() {
   int s, y, temp;
   printf("Enter the value of x and y: ");
   scanf("%d %d", &s, &y);
   printf("Before swapping x=%d, y=%d ", s, y);
   temp = s;
   s= y;
   y = temp;
   printf("After swapping x=%d, b=%d", s, y);
   return 0; 
}
