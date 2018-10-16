// Niloufar Shamloo
// Lab 04 : Vector Driver
// 10/15/2018
//

#include "VectorDriver.h"
#include <algorithm>
int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	//NS
	vector <short> testVec; //new vector for testing
	cout << "10 Random numbers added to the vector: "; // printing the title of the task
	add_numbers(testVec); // testing add_numbers function
	print(testVec); // testing print function 
	print_even(testVec); // testing print even function

	// NS
	// Testing the sort function
	int i[5] = { 1,2,3,4,5 };
	vector <short> vec{ 3,4,9,7,1 }; // create a new vector containing 5 random numbers.
	std::sort(vec.begin(), vec.end()); // sorting these 5 numbers from beginning to end.

	cout << "Sorted Vector of the 5 random numbers: <"; //print a title for task
	for (short c = 0; c < vec.size(); c++)
	{
		cout << vec[c] << " "; //print out the numbers one by one
	}
	cout << ">";

	cout << "\nsum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}
