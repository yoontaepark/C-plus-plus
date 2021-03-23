//inheritance(상속)

#include <iostream>
#include <string>
using namespace std;

class Pet { // base class
	string name;
	int petID;
public:
	Pet(int newID = 0) { petID = newID; }
	string getName()const { return name; }
	void setName(string newName) { name = newName; }
	void speak() const{}
};

// 다른거보다 class간 상속이 가능하다. 상속할 class를 :찍으면 됨
class Cat :public Pet { //Cat IS-A Pet // Derived Class
	double whiskerLength = 0.0;
public:
	Cat() :Pet(10000) {} // explicit call to Base constructor
	void speak() const { cout << "Meow!" << endl; }
	void setLength(double newLength);
	double getLength() const { return whiskerLength; }
	void setName(string newName);
	Cat& operator=(const Pet&);

};

// Private menbers: can be accessed only from the class that it is a part of, or those that are marked as "friend"
// Public menbers: can be accessed from anywhere inside or outside the class
// Protected Members: can be accessed only from the base class, or derived classes

//Pet을 정의하고, Cat이라는 걸로 상속을 받았다는 가정하에
int main() {
	Pet p;
	Pet* pptr;
	Cat c;
	Cat* cptr;

	p = c; // Always allowed, Slicing, p값을 c로 대체
	c = p; // Allowed if operator=(const Pet&) is overloaded, Overloading, c값을 p로 대체, 이경우 c에 설정이 되어있어야 함
	pptr = &c; // Always allowed, Polymorphism, p 포인터가 가르키는 주소를 c로 바꿈
	cptr = &p; // newer allowed
}