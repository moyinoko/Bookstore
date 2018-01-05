/* bookstore.cpp
   Flourish Blotts Accounting Software
   Moyinoluwa Ojo
   This program is used to calculate and evaluate profit values
*/   

#include "bookstore.h"
const int SIZE=12;
const int SIZEQ=4;

int main()
{
   
     float profit[SIZE];
     float quarterlyProfit[SIZEQ];
	 string monthNames[SIZE] = {"January", "February", "March", "April", "May",
	                              "June", "July", "August", "Septemnber", "October",
	                              "November", "December"};
	 float totalProfits1;
	 string lowmonth;
	 string highmonth;
	 float highest;
	 float lowest;
	 char choice;
	 
	do
	{	
	
		 getProfit(profit, SIZE);
		 
		 getQuarterly(profit, quarterlyProfit);
		   
		 highest = getMax(profit, monthNames, SIZE, highmonth); 
		 lowest = getMin(profit, monthNames, SIZE, lowmonth); 
		
	 cout << setprecision(2) << fixed;
     cout << left << "---------------------------------------------" 
	 << "-----------------------------------"<< endl <<endl;
     cout << left << "---------------------------------------------" 
	 << "-----------------------------------"<< endl << endl;
	 
	 cout << left << setw(10) << "TOTAL PROFITS FOR YEAR: " << setw(10) << "$"  << getTotal(profit) << endl;
	 cout << left << setw(10) << "YEARLY AVERAGE PROFIT: " << setw(10) << "$"  << getTotal(profit)/12 << endl;
     getMax(profit, monthNames, SIZE, highmonth); 	 
     cout << left << setw(10) << "MONTH WITH LARGEST PROFIT: " << setw(10) << highmonth <<" totaling " << "$"  << highest << endl;
     cout << left << setw(10) << "MONTH WITH SMALLEST PROFIT: " << setw(10) << lowmonth << " totaling "<< "$"  << lowest << endl;   

    cout << left << "---------------------------------------------" 
	 << "-----------------------------------"<< endl << endl;
	 
	 cout << left << "Quarterly Profits" << endl;
	 
	 cout << left << setw(10) << "January - March " << setw(10) << "$"  << quarterlyProfit[0] <<endl;
	 cout << left << setw(10) << "April - June " << setw(10) << "$"  << quarterlyProfit[1]  <<endl;
     cout << left << setw(10) << "July - September" << setw(10) << "$"  << quarterlyProfit[2] <<endl;
     cout << left << setw(10) << "October - December" << setw(10) << "$"  << quarterlyProfit[3] <<endl <<endl;  
    
	cout << "Would you like to run the program again? (Y/N)";
	cin >> choice;
}
   while(choice == 'Y' || choice == 'y');
   //Ending Statement
		 
		 return 0;
	 
}