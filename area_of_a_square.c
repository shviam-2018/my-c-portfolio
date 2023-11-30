#include <stdio.h> // The preprocessor directive

// This code calculates the area of a square
int main() {
  // Variables that store the values of the two sides
  int side;
  int base;

  // This takes the input of the side and base
  printf("Enter the side value:\n");
  scanf("%d", &side);
  printf("Enter the value of the base:\n");
  scanf("%d", &base);

  // This calculates the area and prints it out
  int area = side * base;
  printf("The area is: %d", area);

  // End of code
  return 0;
}
