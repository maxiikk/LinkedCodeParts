#include <iostream>
#include "PersonClass.cpp"
using namespace std;

int main (){
	person mhtsos;
	mhtsos.setage(50);
	cout << mhtsos.getage() << endl;
	return 0;
}

// Output: 50
