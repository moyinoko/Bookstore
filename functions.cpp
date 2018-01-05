/* functions.cpp
   Flourish Blotts Accounting Software
   Moyinoluwa Ojo
   This program is used to calculate and evaluate profit values
*/   
  #include "bookstore.h"
  /*  getProfit
      Gets the user to input profit values and stores them in profit array.
	*/  
  void getProfit(float profit[], int size)    
{
	
	 for (int count = 0; count < size; count++)
	  { 
         int monthNumber = count +1;
         cout << "\nEnter the profit for month" << monthNumber <<": $";
		 cin >> profit[count];
		     while (profit[count] <= 0)
		 
		{        
		  cout << "I'm sorry you must enter a profit greater than zero.";
		  cout << "\nEnter the profit for month" << monthNumber <<": $";
		  cin >> profit[count];
		 }
		  
	   }
	 
}
/* "getQuartley"
	This function adds profits and separates them into values in the quartley profit array
*/	

void getQuarterly(float profit[], float quarterlyProfit[])    
{
	quarterlyProfit[0] = profit[0]+profit[1]+profit[2];
	quarterlyProfit[1] = profit[3]+profit[4]+profit[5];
	quarterlyProfit[2] = profit[6]+profit[7]+profit[8];
	quarterlyProfit[3] = profit[9]+profit[10]+profit[11];
	 
		  
}
	 /*  getTotal
       Adds all the profit arrays and returns the total profit.
	*/  
	float getTotal(float profit[])    
{
	float total;
    total = profit[0]+profit[1]+profit[2]+
	        profit[3]+profit[4]+profit[5]+
	        profit[6]+profit[7]+profit[8]+
	        profit[9]+profit[10]+profit[11];
	 return total;
	 
		  
}
    /*  getMax
      Analyzes profit arrays for highest value then matches it to it's month. Sends high value in return and string in ref.
	*/   
    float getMax(float profit[], string monthNames[], int SIZE, string &month )
	
{
     int count;
     int highest;
     highest = profit[0];
     for (count = 0; count < SIZE; count++)
     {
       if (profit[count] > highest)
	     highest = profit[count]; 
	 }
	 
	 for (count = 0; count < SIZE; count++)
     {
       if (profit[count] == highest)
	        month = monthNames[count]; 
	 }
	 
	 
       
     return highest;
	 
		
}
 /*  getMin
      Analyzes profit arrays for lowest value then matches it to it's month. Sends high value in return and string in ref.
	*/   
    float getMin(float profit[], string monthNames[], int SIZE, string &month1 )
	
{
     int count;
     int lowest;
     lowest = profit[0];
     for (count = 0; count < SIZE; count++)
     {
       if (profit[count] < lowest)
	     lowest = profit[count]; 
	 }
	 
	 for (count = 0; count < SIZE; count++)
     {
       if (profit[count] == lowest)
	        month1 = monthNames[count]; 
	 }
	 
	 
       
     return lowest;
	 
		
}