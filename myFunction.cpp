// Name:Shafkat Alam
// Student Number:200443237
// Date:06/September/2021

#include "myFunction.h"

// Function:  readArray
// Purpose:   To read values into an array.
// Parameters: Base address of an array.
// Returns:   void
// --------------------------------------------------------
void readArray(int twoDArray[][C_SIZE], string inFile)
{

  ifstream inF;
  int i, j;

  inF.open(inFile);

  for (i = 0; i < R_SIZE; i++)    
  {
    for (j = 0; j < C_SIZE; j++) 
    {
	    inF >> twoDArray[i][j];    
    }
  }  

  inF.close();

} // end readArray function

// Function:  printArray
// Purpose:   To print values into an array.
// Parameters: Base address of an array.
// Returns:   void
// --------------------------------------------------------

void printArray(int twoDArray[][C_SIZE])
{
   cout << "The sum is:\n";
   for (int i = 0; i < R_SIZE; i++)    
  {
    for (int j = 0; j < C_SIZE; j++) 
    {
	    cout << twoDArray[i][j] << " ";    
    }
    cout << endl;
  }  
} // end printArray function


// Function:  sumArray
// Purpose:   To sum values of two arrays in a another array
// Parameters: Base address of an array.
// Returns:   void
// --------------------------------------------------------

void sumArray(int twoDArray[][C_SIZE], int twoDArray1[][C_SIZE], int twoDArray2[][C_SIZE])
{
   for (int i = 0; i < R_SIZE; i++)    
  {
    for (int j = 0; j < C_SIZE; j++) 
    {
	    twoDArray2[i][j] = twoDArray[i][j] + twoDArray1[i][j];
    }
    
  }  
} // end sumArray function
