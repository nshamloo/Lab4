// Niloufar Shamloo
// lab 04
// 10/15/18
/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::qsort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{

	//std::vector<short> RandomNumVec(10); // create a vector that holds 10 numbers
	for (short i = 0; i < 10; i++)
	{
		data.push_back(i); // assigning 10 numbers to the vector
	}
}

// TODO: implement print_even

void print_even(const vector<short>& data)
{
	if (data.empty())
	{
		cout << "<empty>"; // print a message for an empty vector
	}
	else
	{
		cout << "\nEven index vector: <" << data.at(0); // otherwise, print out the list of numbers starting at the beginning. 
		for (int i = 2; i < data.size(); i++) // starting at index 2 (because 0 is already takes care of), goes through all the numbers at even indices.
		{
			if ((i % 2) == 0) // making sure the index is an even number
			{
				cout << ", " << data.at(i); // print the number at that even index
			}
		}
		cout << ">\n"; // print end ">"
	}
}
// TODO: implement is_present
/*
short is_present(const vector<short> &data) {
std::vector<short>::const_iterator iter1 = data.begin(); //creating a new vector iterator, it's pointing to the next element of the list

short element = 0; //new local variable for the element.
while (iter1 != data.end()) {
element += *iter1;
iter1++; //increment the iterator
}

return element;
} */

bool is_present(const vector<short> &data, short value) //implementation of bool is_present:
{
	std::vector<short>::const_iterator iter1 = data.begin(); //create a new vector iterator, it starts at the first number of the data

	short element = 0; //create a new short type variable 
	while (iter1 != data.end()) //while iter is not the last number
	{
		element = *iter1;// element points to the iterator value
		iter1++;// increment the iterator
	}

	
	if (element == value) // if the value entered is in the vector 
	{
		return true; // we return true
	}
	else
	{
		return false; // otherwise, we return false
	}
}