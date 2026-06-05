// RestaurantBill.cpp 
//

#include <iostream>  //Allows to use cout and endl
#include <iomanip>  //Allows to use setprecision and fixed and format numbers to 2 decimal places
using namespace std;

int main()
{  // Declare constants
	const double MEAL_COST = 88.67; // The cost of the meal before tax and tip
	const double TAX_RATE = 0.0675; // The tax rate as a decimal (6.75%)
	const double TIP_RATE = 0.20; // The tip rate as a decimal (20%)


	// Declare variables to hold the calculated values
	double tax;  // The amount of tax on the meal
	double subtotal;  // The cost of the meal including tax but before tip
	double tip;  // The amount of tip based on the subtotal
	double total;  // The total bill including meal cost, tax, and tip


	// Perform calculations
	tax = MEAL_COST * TAX_RATE; // Calculate the tax amount by multiplying the meal cost by the tax rate
	subtotal = MEAL_COST + tax;  // Calculate the subtotal by adding the meal cost and the tax
	tip = subtotal * TIP_RATE;  // Calculate the tip amount by multiplying the subtotal by the tip rate
	total = subtotal + tip;  // Calculate the total bill by adding the subtotal and the tip


	// Set the output to fixed-point notation and format numbers to 2 decimal places
	cout << fixed << setprecision(2);

	//Displays the results to the user

	cout << "Meal Cost: $" << MEAL_COST << endl;  // Output the meal cost
    cout << "Tax Amount: $" << tax << endl;  //	
	cout << "Tip Amount: $" << tip << endl;  // Output the tip amount
	cout << "Total Bill: $" << total << endl;  // Output the total bill


	//Ends the program
    return 0;


}
