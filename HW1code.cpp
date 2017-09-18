//Omar Sanchez
//HW1 Part1

#include <iostream>
using namespace std;


struct Dog {
	int age;
	Dog(int age = 1) : age(age){}
	Dog(const Dog& obj) : age(obj.age){}
	void displayAge(void) {
		cout << "This dog is " << age << " years old" << endl;
	}


};

int main() {
	Dog Max(13);
	Dog Bud(Max);
	Dog Dude(25);
	Max.displayAge();
	Bud.displayAge();
	Dude.displayAge();
}