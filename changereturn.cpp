
#include <iostream>
using namespace std;

// FIXME: Add parameters for dimes, nickels, and pennies. 
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies  ) {

   cout << "FIXME: Finish writing ComputeChange" << endl;

   numQuarters = totCents / 25;
   totCents = totCents - numQuarters * 25;
   
   numDimes = totCents / 10;
   totCents = totCents - numDimes * 10;
   
   numNickels = totCents / 5;
   totCents = totCents - numNickels * 5;
   
   numPennies = totCents;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;
   // FIXME add variables for dimes, nickels, pennies

   cout << "Enter total cents: " << endl;
   cin >> userCents;


   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;


   return 0;
}
