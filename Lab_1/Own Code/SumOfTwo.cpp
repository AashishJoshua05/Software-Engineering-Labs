/**
 * @file SumOfTwo.cpp
 * @author Aashish Joshua James
 * @brief This is a simple example file to demonstrate the usage of doxygen comments for generating multiple pages.
 *
 * @page page1 Page 1
 * This is the first page of the documentation. It contains information about the first topic.
 *
 * @page page2 Page 2
 * This is the second page of the documentation. It contains information about the second topic.
 */

#include <iostream>

/**
 * @brief Computes the sum of two integers
 * @param a First integer
 * @param b Second integer
 * @return The sum of the two integers
 *
 * @page page1
 * This function takes two integers as input and returns their sum.
 */
int add(int a, int b) {
  return a + b;
}

/**
 * @brief Main function
 * @return 0 if the program terminates successfully
 *
 * @page page2
 * This is the entry point of the program. It calls the "add" function and prints its result.
 */
int main() {
  int x = 10, y = 20;
  std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
  return 0;
}
