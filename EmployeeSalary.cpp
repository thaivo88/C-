#include <iostream>
using namespace std;

int main()
{
  int paycode = 0;
	double weeklySalary;	//setting data type for weeklySalary as a double because money has cents which are decimals
	double hourlySalary;	//setting data type for hourlySalary as a double because salary pay has cents which are decimals
	int hours;				//setting data type for hours as an integer because we want whole numbers
	double grossSales;		//setting data type for grossSales as a double because sales has because pay per item are money interaction and has cents which are decimals
	int items;				//setting data type for items as an integer because items can only be whole numbers
	double totalPay;		//setting data type for totalpay as double because money involes cents which are decimals

	cout << "Enter paycode for next employee (-1 for exit): ";  //this line ask the user to input a number code by printing the information as console output (cout)

	double payPerItem;		//setting data type for payPerItem as a double 	cin >> paycode;  //cin is an input variable that the user input by the above command line 15 and that input value is stored into paycode



	/* the while loop command; when the input value from above is inputted the while command will find the matching value using the cases below: 1-4 but if the input is not in the range of -1 to 4 the loop will default to the default clause because no case are matched and the console will print to the screen the error message. But if the input is -1 the while loop will not start but exit the whole system. this is because paycode varable, which holds the value the user inputted above should not equal -1, if it does it doesn't start the while command*/

	while (paycode != -1)
	{
		switch (paycode)
		{
			case 1:
				cout << "Enter weekly salary for this manager: ";		//console output message
				cin >> weeklySalary;		//user input amount
				totalPay = weeklySalary;			//does the calculation
				break;

			case 2:
				cout << "Enter hourly salary for this hourly worker: ";		//console output message
				cin >> hourlySalary;		//user input amount
				cout << "Enter number of hours worked: ";		//console output message
				cin >> hours;		//user input hours

				/* Using the if else statment, for normal 40 work hour they get paid 4.5 and hour.
				But after 40 hour they get paid (1.5 * Overtime hours) + 4.5 * regular hours (hr <= 40)*/

				if (hours <= 40)
					totalPay = hours * hourlySalary;
				else
					totalPay = 40 * hourlySalary + (hours - 40) * hourlySalary * 1.5;		//does the calculation
				break;

			case 3:
				cout << "Enter gross sales for this comission worker: ";
				cin >> grossSales;
				totalPay = 250 + grossSales * 0.057;		//does the calculation
				break;

			case 4:
				cout << "Enter number of produced items for this pieceworker: ";
				cin >> items;		//user input the amount of item produced by pieceworker
				cout << "Enter pay for each item: ";		//console output message
				cin >> payPerItem;		//user input the amount per item cost
				totalPay = items * payPerItem;		//does the calculation
				break;

			default:
				cout << "Wrong input!" << endl;		//console output message
				totalPay = 0;
				break;
		}
		cout << "Total weekly pay is: " << totalPay << endl << endl;		//console output message
		cout << "Enter paycode for next employee (-1 for exit): ";		//console output message
		cin >> paycode;		//user input 1 to 4 to repeat the code again or -1 to exit
	}

}
