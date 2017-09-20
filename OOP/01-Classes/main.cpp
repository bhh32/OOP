#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;


int main()
{
	/** WALKTHROUGH ACTIVITY - EXTENDED TO INCLUDE ENCAPSULATION BY ME **/

	// Two Person Objects to populate the attributes
	Person persA;
	Person persB;

	// Set the Attributes
	persA.SetAttributes(persA, 32, 70, 180, "Bryan", "brown", "blue");
	persB.SetAttributes(persB, 5, 43.5, 42, "Zoe", "brown", "brown");

	// Calls the greeting for persA
	persA.Greeting(persA);
	cout << endl;
	
	// Calls the greeting for persB
	persB.Greeting(persB);
	cout << endl;

	system("pause");

	return 0;
}