#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;     


int main()
{
	int userInput, beverageChoice, bakedgoodsChoice, fruitsChoice, candyChoice;

    cout << "**************************************************  \n"
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
    		"\t 5. Exit \n \n"
     		"\t Choose a category:";
    cin >> userInput;

    if ((userInput = 1))
    {
	    cout << "\t Beverages: \n"
	    "\t 1. Water 											\t -1.99\n"
	    "\t 2. Joint Juice 										\t -2.75\n"
	    "\t 3. Protein Shake 									\t -3.00\n \n"
	    "\t Choose a beverage:";
	    cin >> beverageChoice;

		    if ((beverageChoice = 1))
		    {
		    	cout << "You paid 1.99 for the Water. Have a great day!";
		    	system ("pause");
		    }
		    else if ((beverageChoice = 2))
		    {
		    	cout << "You paid 2.75 for the Joint Juice. Have a great day!";
		    	system ("pause");
		    }
		    else if ((beverageChoice = 3))
		    {
		    	cout << "You paid 3.00 for the Protein Shake. Have a great day!";
		    	system ("pause");
		    }
			else
	    	{
		    	cout << "Invalid choice. Money returned.";
		    	system ("pause");
	    	}
	 }
    
    else if ((userInput = 2))
    {
	    cout << "\t Baked goods: \n"
	    "\t 1. Blueberry Muffin 								\t -1.25\n"
	    "\t 2. Peanut Butter Cookie 							\t -2.00\n" 
	    "\t 3. Peanut Butter Chocolate Chip Cookie 				\t -2.25\n"
	    "\n Choose a baked good: \n";
	    cin >> bakedgoodsChoice;

	       if ((bakedgoodsChoice = 1))
		    {
		    	cout << "You paid 1.25 for the Blueberry Muffin. Have a great day!";
		    	system ("pause");
		    }
		    else if ((bakedgoodsChoice = 2))
		    {
		    	cout << "You paid 2.00 for the Peanut Butter Cookie. Have a great day!";
		    	system ("pause");
		    }
		    else if ((bakedgoodsChoice = 3))
		    {
		    	cout << "You paid 2.25 for the Peanut Butter Chocolate Chip Cookie. Have a great day!";
		    	system ("pause");
		    }
			else
	    	{
		    	cout << "Invalid choice. Money returned.";
		    	system ("pause");
	    	}
    }
    else if ((userInput = 3))
    {
	    cout << "\t Fruits: \n"
	    "\t 1. Apple 											\t -1.00\n" 
	    "\t 2. Orange 											\t -1.00\n" 
	    "\t 3. Banana 											\t -1.00\n" 
	    "\t Choose a fruit: \n";
	    cin >> fruitsChoice;

	    	if ((fruitsChoice = 1))
		    {
		    	cout << "You paid 1.00 for the Apple. Have a great day!";
		    	system ("pause");
		    }
		    else if ((fruitsChoice = 2))
		    {
		    	cout << "You paid 1.00 for the Orange. Have a great day!";
		    	system ("pause");
		    }
		    else if ((fruitsChoice = 3))
		    {
		    	cout << "You paid 1.00 for the Banana. Have a great day!";
		    	system ("pause");
		    }
			else
	    	{
		    	cout << "Invalid choice. Money returned.";
		    	system ("pause");
	    	}
    }
    else if ((userInput = 4))
    {
	    cout << "\t Candy: \n" 
	    "\t 1. Blueberry Larabar 								\t -0.75\n" 
	    "\t 2. Cookiedough Larabar								\t -0.75\n" 
	    "\t 3. Cliff Builder's Bar 								\t -1.25\n"  
	    "\t Choose a candy: \n";
	    cin >> candyChoice;

	    	if ((candyChoice = 1))
		    {
		    	cout << "\t You paid 0.75 for the Blueberry Larabar. Have a great day!";
		    	system ("pause");
		    }
		    else if ((candyChoice = 2))
		    {
		    	cout << "\t You paid 0.75 for the Cookiedough Larabar. Have a great day!";
		    	system ("pause");
		    }
		    else if ((candyChoice = 3))
		    {
		    	cout << "\t You paid 1.25 for the Cliff Builder's Bar. Have a great day!";
		    	system ("pause");
		    }
			else
	    	{
		    	cout << "\t Invalid choice. Money returned.";
		    	system ("pause");
	    	}
    }
    else if ((userInput = 5))
    {
	    cout << "Thanks for stopping by!";
	    system ("pause");
    }
    else
    {
    	cout << "Invalid choice. Money returned.";
    	system ("pause");
    }
    
}
/* Bug Notes
-Void main caused it not to run
-Forgot to add a system pause
-Learned to add double parenthensis for regular =
*/
