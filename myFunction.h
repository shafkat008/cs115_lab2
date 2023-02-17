// Name:Shafkat Alam
// Student Number:200443237
// Date:06/September/2021

#ifndef MYFUNCTION_H
#define MYFUNCTION_H
#include <iostream>
#include <fstream>
using namespace std;

const unsigned int R_SIZE = 4;
const unsigned int C_SIZE = 5;

void readArray(int twoDArray[][C_SIZE], string inFile);  // function prototype
void printArray(int twoDArray[][C_SIZE]); // function prototype
void sumArray(int twoDArray[][C_SIZE], int twoDArray1[][C_SIZE], int twoDArray2[][C_SIZE]); // function prototype

#endif