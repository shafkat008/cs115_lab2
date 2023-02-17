// Name:Shafkat Alam
// Student Number:200443237
// Date:06/September/2021

// Filename: main.cpp
// Purpose: Implement a C++ program to add two 4 * 5 matrices 
//          and then output the results to the screen
//          as outlined in the exercise description.

#include "myFunction.h"

int main()
{
  int i, j;
  int array1[R_SIZE][C_SIZE]; // first array
  int array2[R_SIZE][C_SIZE]; // second array
  int sumOfArray[R_SIZE][C_SIZE]; // sum of arrays
  string fileName;
  string fileName2;

  // prompt user for input
  cout << "Please enter the name of the file containing data for Array 1: ";
  cin >> fileName;

  cout << "Please enter the name of the file containing data for Array 2: ";
  cin >> fileName2;
  
  //function call
  readArray(array1,fileName);
  readArray(array2,fileName2);
  sumArray(array1, array2, sumOfArray);
  printArray(sumOfArray);
 

  return 0;

}


