/* bookstore.h
   Flourish Blotts Accounting Software
   Moyinoluwa Ojo
   This program is used to calculate and evaluate profit values
*/   
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getProfit(float[], int);
void getQuarterly(float[], float[]);
float getTotal(float profit[]);  
float getMax(float profit[], string monthNames[], int SIZE, string &);
float getMin(float profit[], string monthNames[], int SIZE, string &);