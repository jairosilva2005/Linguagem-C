#include <iostream>
using namespace std;

class Person {

    private : string name;
    private : string cityLive;
    private : int age;
    
    public : void showDetails() {
        cout << "Name: " << this -> name << endl;
        cout << "Live in: " << this -> cityLive << endl;
        cout << "Age: " << this -> age << endl;
    }
    
    // Setters
    public : void setName(string Name) {
        this -> name = Name;
    }
    
    public : void setCity(string City) {
	this -> cityLive = City;
    }

    public : void setAge(int Age) {
	this -> age = Age;
    }

};


int main() {

	// First Person
	Person firstPerson;
	firstPerson.setName("Max");
	firstPerson.setCity("New York");
	firstPerson.setAge(23);

	// Second Person
	Person secondPerson;
	secondPerson.setName("Mohamed");
	secondPerson.setCity("Cairo");
	secondPerson.setAge(30);

	// Show Details
	firstPerson.showDetails();
	secondPerson.showDetails();

    return 0;
}
