#include "linkedList.h"
#include <iostream>
using namespace std;

//this program is a basic implementation of a linked list, other projects will focus on how to manipulate this list in depth

int main() {
	//print out the list while it's empty
	linkedList mainList;
	mainList.print();

	//now push some data into the list and print that out
	mainList.push(10);
	mainList.print();

	//now push ten more bits of data and print that out
	for (int i=0;i<10;i++){
		mainList.push(i);
	}
	mainList.print();

	//print out some information such as length, and information at different positions
	cout << "The length of the list is: " << mainList.length() << endl;
	cout << "The position at 0 is " << mainList.get(0) << endl;
	cout << "The position at 5 is " << mainList.get(5) << endl;
	cout << "The position at 500 is " << mainList.get(500) << endl;

	//now remove some data and print out the list
	mainList.pop(5);
	mainList.print();

	//now clear out the list entirely and print that out
	mainList.clear();
	cout << "The length of the list is: " << mainList.length() << endl;
	mainList.print();

	cout << "End of program" << endl;
	return 0;
}
