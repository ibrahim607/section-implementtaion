#include "employee.h"
#include <iostream>
using namespace std;


void employee:: data() {
		cout << "enter your name: " << endl;
		cin >> name;
		cout << "enter the number " << endl;
		cin >> number;

	}
	
void employee::putdata() {
	cout << "the name is :" << name << "\n the nubmer is :" << number << endl;
}
