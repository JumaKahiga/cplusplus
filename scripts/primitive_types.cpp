#include <iostream>

using namespace std;

int main() {
	/********************************
	* Character type
	********************************/

	char middle_initial ('M'); // Putting "J" would make it a string and throw an error
	cout << "My middle name is " << middle_initial << endl;

	/********************************
	* Integer types
	********************************/

	unsigned short int exam_score (55); // Same as unsigned short exam_score (55);
	cout << "My exam score was " << exam_score << endl;

	int countries_represented (65);
	cout << "There were " << countries_represented << " countries in the 2010 World Cup" << endl;

	long people_in_kenya (51390000);
	cout << "Kenya has an estimated population of " << people_in_kenya << " people." << endl;

	long long pluto_distance (7500000000);
	cout << "The distance from planet Earth to Pluto is around " << pluto_distance << " kilometres." << endl;

	/********************************
	* Floating point types
	*********************************/

	float car_payment (401.23);
	cout << "My car payment is " << car_payment << endl;

	double pi (3.14159);
	cout << "PI is " << pi << endl;

	long double large_amount (2.7e120);
	cout << large_amount << " is a very big number" << endl;

	/********************************
	* Boolean type
	*********************************/

	bool happy_wife (true);
	cout << "It is " << happy_wife << " happy wife = happy life" << endl; // prints out 1 if true, 0 if false

	/********************************
	* Overflow example
	*********************************/

	short value1 (30000);
	short value2 (1000);
	short product (value1 * value2);

	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;

	return 0;
}