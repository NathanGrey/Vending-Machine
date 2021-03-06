#include <iostream>		// Starts the preprocessor command including the contents of iostream
/*#include <stdlib.h>		// Generates random numbers/ Not needed for this program
#include <time.h>		// Uses seed srand with time/ Not needed for this program*/
using namespace std;    // This eliminates the need to write std::cout so it can just be cout

// Functions to handle printing the menus

void showMainMenu()
{
	cout << "\n**********************************************************************\n"
		"\t Welcome to the Wall Market \n"
		"********************************************************************** \n"
		"___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__\n"
		"_|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|\n"
		"___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__\n \n"
		"\t Menu: \n"
		"\t 1. Beverages \n"
		"\t 2. Baked Goods \n"
		"\t 3. Fruits \n "
		"\t 4. Candy \n"
		"\t 5. Exit \n \n";
}

void showBeveragesMenu()
{
	cout << "\n\t Beverages: \n"
		"\t 1. Water 				\t $1.99\n"
		"\t 2. Joint Juice 			\t $2.75\n"
		"\t 3. Protein Shake 		\t \t $3.00\n\n";
}
void showBakedGoodsMenu()
{
	cout << "\n\t Baked Goods: \n"
		"\t 1. Blueberry Muffin 			\t $1.25\n"
		"\t 2. Peanut Butter Cookie 		\t $2.00\n"
		"\t 3. Oatmeal Cookie		\t \t $2.25\n\n";
}
void showFruitssMenu()
{
	cout << "\n\t Fruits: \n"
		"\t 1. Apple 				\t $1.00\n"
		"\t 2. Orange 				\t $1.00\n"
		"\t 3. Banana 			    \t\t $1.00\n\n";
}
void showCandysMenu()
{
	cout << "\n\t Candy: \n"
		"\t 1. Blueberry Larabar 			\t $0.75\n"
		"\t 2. Cookiedough Larabar			\t $0.75\n"
		"\t 3. Cliff Builder's Bar 		    \t $1.25\n\n";
}
// Functions to handle exiting/printing googdbye
void showExitMenu()
{
	cout << "\n\tThanks for stopping by!\n\n\t";
	system("pause");
}

// Functions to handle printing total price
void getTotals(double& WaterPrice, double& JointJuicePrice, double& ProteinShakePrice,
	double& BlueberryMuffinPrice, double& PeanutButterCookePrice, double& OatmealCookiePrice,
	double& ApplePrice, double& OrangePrice, double& BananaPrice,
	double& BlueberryLarabarPrice, double& CookiedoughLarabarPrice, double& CliffBuilderBarPrice)
{

	WaterPrice = 1.99;
	JointJuicePrice = 2.75;
	ProteinShakePrice = 3.00;

	BlueberryMuffinPrice = 1.25;
	PeanutButterCookePrice = 2.00;
	OatmealCookiePrice = 2.25;

	ApplePrice = 1.00;
	OrangePrice = 1.00;
	BananaPrice = 1.00;

	BlueberryLarabarPrice = 0.75;
	CookiedoughLarabarPrice = 0.75;
	CliffBuilderBarPrice = 1.25;
	return;

}

// Start of program that handles input and output
int main()
{
	showMainMenu(); // Prints the main menu

					// Defines the prices as whole numbers
	double WaterPrice = 0, JointJuicePrice = 0, ProteinShakePrice = 0;
	double BlueberryMuffinPrice = 0, PeanutButterCookePrice = 0, OatmealCookiePrice = 0;
	double ApplePrice = 0, OrangePrice = 0, BananaPrice = 0;
	double BlueberryLarabarPrice = 0, CookiedoughLarabarPrice = 0, CliffBuilderBarPrice = 0;

	// Calls to the Totals functions and calculates the price
	getTotals(WaterPrice, JointJuicePrice, ProteinShakePrice,
		BlueberryMuffinPrice, PeanutButterCookePrice, OatmealCookiePrice,
		ApplePrice, OrangePrice, BananaPrice,
		BlueberryLarabarPrice, CookiedoughLarabarPrice, CliffBuilderBarPrice);

	// Looked up how to set the decimal to output the price as dollars
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// Input and output begins here
	int input;
	cout << "\tChoose a category: ";
	cin >> input;
	switch (input)
	{
	case 1: showBeveragesMenu();
		int beveragesInput;
		cout << "\tChoose a beverage: ";
		cin >> beveragesInput;
		switch (beveragesInput)
		{
		case 1: cout << "\n\tYou paid" << " " << "$" << WaterPrice << " " << "for the Water. Have a great day!\n\n\t";
			system("pause");
			break;
		case 2: cout << "\n\tYou paid" << " " << "$" << JointJuicePrice << " " << "for the Joint Juice. Have a great day!\n\n\t";
			system("pause");
			break;
		case 3: cout << "\n\tYou paid" << " " << "$" << ProteinShakePrice << " " << "for the Protein Shake. Have a great day!\n\n\t";
			system("pause");
			break;
		default: cout << "\n\tInvalid choice. Money returned.\n\n\t";
			system("pause");
			break;
		}
		break;

	case 2: showBakedGoodsMenu();
		int bakedgoodsInput;
		cout << "\tChoose a bakedgood: ";
		cin >> bakedgoodsInput;
		switch (bakedgoodsInput)
		{
		case 1: cout << "\n\tYou paid" << " " << "$" << BlueberryMuffinPrice << " " << "for the Blueberry Muffin. Have a great day!\n\n\t";
			system("pause");
			break;
		case 2: cout << "\n\tYou paid" << " " << "$" << PeanutButterCookePrice << " " << "for the Peanut Butter Cookie. Have a great day!\n\n\t";
			system("pause");
			break;
		case 3: cout << "\n\tYou paid" << " " << "$" << OatmealCookiePrice << " " << "for the Oatmeal Cookie. Have a great day!\n\n\t";
			system("pause");
			break;
		default: cout << "\n\tInvalid choice. Money returned.\n\n\t";
			system("pause");
			break;
		}
		break;
	case 3: showFruitssMenu();
		int fruitsInput;
		cout << "\tChoose a fruit: ";
		cin >> fruitsInput;
		switch (fruitsInput)
		{
		case 1: cout << "\n\tYou paid" << " " << "$" << ApplePrice << " " << "for the Apple. Have a great day!\n\n\t";
			system("pause");
			break;
		case 2: cout << "\n\tYou paid" << " " << "$" << OrangePrice << " " << "for the Orange. Have a great day!\n\n\t";
			system("pause");
			break;
		case 3: cout << "\n\tYou paid" << " " << "$" << BananaPrice << " " << "for the Banana. Have a great day!\n\n\t";
			system("pause");
			break;
		default: cout << "\n\tInvalid choice. Money returned.\n\n\t";
			system("pause");
			break;
		}
		break;
	case 4: showCandysMenu();
		int candyInput;
		cout << "\tChoose a candy: ";
		cin >> candyInput;
		switch (candyInput)
		{
		case 1: cout << "\n\tYou paid" << " " << "$" << BlueberryLarabarPrice << " " << "for the Blueberry Larabar. Have a great day!\n\n\t";
			system("pause");
			break;
		case 2: cout << "\n\tYou paid" << " " << "$" << CookiedoughLarabarPrice << " " << "for the Cookiedough Larabar. Have a great day!\n\n\t";
			system("pause");
			break;
		case 3: cout << "\n\tYou paid" << " " << "$" << CliffBuilderBarPrice << " " << "for the Cliff Builder's Bar. Have a great day!\n\n\t";
			system("pause");
			break;
		default: cout << "\n\tInvalid choice. Money returned.\n\n\t";
			system("pause");
			break;
		}
		break;
	case 5: showExitMenu();
		break;
	default: cout << "\n\tInvalid choice. Money returned.\n\n\t";
		system("pause");
		break;
	}
}
/* 	====================================[ BUG NOTES ]=========================================

1. Had main as a function that simply showed the menu and then pointed to another function
that all other functions were being processed from. /Changed main to contain them.
2. Had issuing knowing weather to use a switch or if statement. /Realized the difference.
3. Switch statement kept running. /Added breaks.
4. Had A LOT of issues getting the program to handle the totals. Eventually learned how
to make it return the multiple totals all in one function.
5. Prices kept being output as rounded numbers. /Changed them from int to doubles.

=========================================================================================== */

