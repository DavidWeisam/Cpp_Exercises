#include <iostream>
using namespace std;

class Person {
    public:
        Person(string name, int age, string country) :
            _name(name),
            _age(age),
            _country(country)
        {};

        string GetName() {
            return _name;
        }

        string GetCountry() {
            return _country;
        }

        int GetAge() {
            return _age;
        }

        void SetName(string name) {
            _name = name;
        }
        void SetCountry(string country) {
            _country = country;
        }
        void SetAge(int age) {
            _age = age;
        }
     
    private:    
        string _name;
        int _age;
        string _country;
};




int main() {
    Person prson("David", 18, "Israel");
    cout << prson.GetName() << endl;
    cout << prson.GetAge() << endl;
    cout << prson.GetCountry() << endl;

    prson.SetName("David the king");
    prson.SetAge(20);
    prson.SetCountry("USA");

    cout << prson.GetName() << endl;
    cout << prson.GetAge() << endl;
    cout << prson.GetCountry() << endl;


}

