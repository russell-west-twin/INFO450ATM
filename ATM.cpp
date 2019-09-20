#include <iostream>
using namespace std;

int main()
{
    //Will need to get an answer from the user if he or she wants to continue with the program.
    char userchoice;

    // Declaring all of my dollar bills (1,5,10,20,50)
	int OneDollars, FiveDollars, TenDollars, TwentyDollars, FiftyDollars;

	// The amount the user wants to withdraw, starting with a zero. 
	int UserWithdraw = 0;

	// Performing a do/while loop to execute the program while it satisfies a condition.
	do {
		// Message from Joshua's Navy Federal Credit Union.
		cout << "Welcome to Joshua's Navy Federal Credit Union. Since you are here, how much do you want to withdraw????" << "Kindly enter a dollar amount." << endl;

		// Allowing the user to input he or she dollar amount.
		cin >> UserWithdraw;

		// We are using If and Else statement to make sure the user's input is greater than 0 and less than 301 per the requirements.
		if (UserWithdraw > 0 && UserWithdraw < 301) {

			// Display to the console what amount the user has inputted.
			cout << endl << "You have entered" << " $ " << UserWithdraw << ".00" << endl;

        // Section is for 50 dollars or more.
			if (UserWithdraw >= 50) {
				//Divide by 50.
				FiftyDollars = (UserWithdraw / 50);
                //Output the dollar amount.
				cout << "Outputting - " << FiftyDollars << " $50 dollar bills." << endl;
				//Finding the remainder.
				UserWithdraw %= 50;
			}
			// Section is for 20 dollars or more.
			if (UserWithdraw >= 20) {
				//Divide by 20.
				TwentyDollars = (UserWithdraw / 20);
                //Output the dollar amount.
				cout << "Outputting - " << TwentyDollars << " $20 dollar bills." << endl;
				//Finding the remainder.
				UserWithdraw %= 20;
			}
			// Section is for 10 dollars or more.
			if (UserWithdraw >= 10) {
				//Divide by 10.
				TenDollars = (UserWithdraw / 10);
                //Output the dollar amount.
				cout << "Outputting - " << TenDollars << " $10 dollar bills." << endl;
				//Finding out the remainder.
				UserWithdraw %= 10;
			}
			// Section is for 5 or more dollar bills.
			if (UserWithdraw >= 5) {
				//Divide by 5.
				FiveDollars = (UserWithdraw / 5);
                //Output the dollar amount.
				cout << "Outputting - " << FiveDollars << " $5 dollar bills." << endl;
				//Remainder.
				UserWithdraw %= 5;
			}
            // This section is for 1 or more dollar bills.
			if (UserWithdraw >= 1) {

				// Since it is a dollar bill, it will equal whatever the user has inputted.
				OneDollars = UserWithdraw;
                //Output the dollar amount.
				cout << "Outputting - " << OneDollars << " $1 dollar bills." << endl;
				UserWithdraw %= UserWithdraw;
			}
            //Giving user an option to opt out if he or she inputs 0.
			if (UserWithdraw == 0) {
				// Giving user option to quit program.
				cout << "Would you like to make another withdrawal?" << endl;
				cout << "Enter Y or y to continue..." << endl;
				cin >> userchoice;
			}
			else {
				cout << "You have entered a different value." << endl;
			}
		}
		else {
			//I am giving the user another chance to redeem herself or himself. Please follow accordingly.
			cout << "You have made an error. Please enter a dollar amount between $0 and 301." << endl;
			cout << "Try again?" << endl;
			cout << "Please enter y or Y to enter again." << endl;
			cin >> userchoice;
		}
	} while ((userchoice == 'Y') || (userchoice == 'y'));
	return 0;
}
