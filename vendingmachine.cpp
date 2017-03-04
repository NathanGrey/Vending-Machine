#include <iostream>		// Starts the preprocessor command including the contents of iostream
#include <stdlib.h>		// Generates random numbers
#include <time.h>		// Uses seed srand with time
using namespace std;    // This eliminates the need to write std::cout so it can just be cout

//double Water = 1.99, JointJuice = 2.75, ProteinShake = 3.00;
//double BlueberryMuffin = 1.25, PeanutButterCooke = 2.00, PeanutButterChocolateChipCookie = 2.25;
//double Apple = 1.00, Orange = 1.00, Banana = 1.00;
//double BlueberryLarabar = 0.75, CookiedoughLarabar = 0.75, CliffBuildersBar = 1.25;

// Functions to handle printing the menus
void showMainMenu ()
{
	cout << "**************************************************\n"
    		"\t Welcome to the Wall Market \n"
    		"************************************************** \n"
    		"___|___|___|___|___|___|___|___|___|___|___|___|___\n"
			"_|___|___|___|___|___|___|___|___|___|___|___|___|_\n"
			"___|___|___|___|___|___|___|___|___|___|___|___|___\n"
   			"\t Menu: \n"
    		"\t 1. Beverages \n"
   		    "\t 2. Baked Goods \n"
    		"\t 3. Fruits \n "
    		"\t 4. Candy \n"
    		"\t 5. Exit \n \n";
}

void showBeveragesMenu()
{
  cout << "\t Beverages: \n"
	    "\t 1. Water 											\t -1.99\n"
	    "\t 2. Joint Juice 										\t -2.75\n"
	    "\t 3. Protein Shake 									\t -3.00\n \n";
}
void showBakedGoodsMenu()
{
 cout << "\t Baked Goods: \n"
	    "\t 1. Blueberry Muffin 								\t -1.25\n"
	    "\t 2. Peanut Butter Cookie 							\t -2.00\n" 
	    "\t 3. Peanut Butter Chocolate Chip Cookie 				\t -2.25\n";
}
void showFruitssMenu()
{
 cout << "\t Fruits: \n"
	    "\t 1. Apple 											\t -1.00\n" 
	    "\t 2. Orange 											\t -1.00\n" 
	    "\t 3. Banana 											\t -1.00\n";
}
void showCandysMenu()
{
cout << "\t Candy: \n" 
	    "\t 1. Blueberry Larabar 								\t -0.75\n" 
	    "\t 2. Cookiedough Larabar								\t -0.75\n" 
	    "\t 3. Cliff Builder's Bar 								\t -1.25\n";
}
// Functions exiting/printing googdbye
void showExitMenu()
{
cout << "Thanks for stopping by!";
	    system ("pause");
}
// Functions to handle user input
int GetMainMenuInput()
{
    int input;
    cout << "\tChoose a category: ";
    cin >> input;
    switch (input)
    {
    	case 1 : showBeveragesMenu();
    			 int beveragesInput;
	    		 cout << "\tChoose a beverage: ";
	    		 cin >> beveragesInput;
	     		 switch (beveragesInput)
	     		 {
			     case 1: cout << "\tYou paid" << "Water"<< " " << "for the Water. Have a great day!";
			    		 system ("pause");
			    		 break;
			  	 case 2: cout << "\tYou paid 2.75 for the Joint Juice. Have a great day!";
			    		 system ("pause");
			    		 break;
				 case 3: cout << "\tYou paid 3.00 for the Protein Shake. Have a great day!";
			    		 system ("pause");
			    		 break;
			     default: cout << "\tInvalid choice. Money returned.";
			    		  system ("pause");
			    		  break;
	    		 }
	 		break;

    	case 2 : showBakedGoodsMenu();
    			 int bakedgoodsInput;
	    		 cout << "\tChoose a bakedgood: ";
	    		 cin >> bakedgoodsInput;
	     		 switch (bakedgoodsInput)
	     		 {
			     case 1: cout << "\tYou paid 1.25 for the Blueberry Muffin. Have a great day!";
		    			 system ("pause");
			    		 break;
			  	 case 2: cout << "\tYou paid 2.00 for the Peanut Butter Cookie. Have a great day!";
		    			 system ("pause");
			    		 break;
				 case 3: cout << "\tYou paid 2.25 for the Peanut Butter Chocolate Chip Cookie. Have a great day!";
		    			 system ("pause");
			    		 break;
			     default: cout << "\tInvalid choice. Money returned.";
			    		  system ("pause");
			    		  break;
	    		 }
    			 break;
    	case 3 : showFruitssMenu();
    			 int fruitsInput;
	    		 cout << "\tChoose a fruit: ";
	    		 cin >> fruitsInput;
	     		 switch (fruitsInput)
	     		 {
			     case 1: cout << "\tYou paid 1.00 for the Apple. Have a great day!";
		    			 system ("pause");
			    		 break;
			  	 case 2: cout << "\tYou paid 1.00 for the Orange. Have a great day!";
		    			 system ("pause");
			    		 break;
				 case 3: cout << "\tYou paid 1.00 for the Banana. Have a great day!";
		    			 system ("pause");
			    		 break;
			     default: cout << "\tInvalid choice. Money returned.";
			    		  system ("pause");
			    		  break;
	    		 }
    			 break;
    	case 4 : showCandysMenu();
    			 int candyInput;
	    		 cout << "\tChoose a candy: ";
	    		 cin >> candyInput;
	     		 switch (candyInput)
	     		 {
			     case 1: cout << "\t You paid 0.75 for the Blueberry Larabar. Have a great day!";
		    			 system ("pause");
			    		 break;
			  	 case 2: cout << "\t You paid 0.75 for the Cookiedough Larabar. Have a great day!";
		    			 system ("pause");
			    		 break;
				 case 3: cout << "\t You paid 1.25 for the Cliff Builder's Bar. Have a great day!";
		    			 system ("pause");
			    		 break;
			     default: cout << "\tInvalid choice. Money returned.";
			    		  system ("pause");
			    		  break;
	    		 }
    			 break;
    	case 5 : showExitMenu();
    			 break;
    	default: cout << "Invalid choice. Money returned.";
    			 system ("pause");
    			 break;
    }
}

//Functions to handle printing total price



// Start of Program
int main()
{
	showMainMenu();
    GetMainMenuInput();
}
