#include <bits/stdc++.h>
using namespace std;
class Person {
public:
    string Name;
    int Age;
    Person(string name, int age){
        Name = name;
        Age = age;
    }
};
int main() {
    vector<Person> people;
    people.push_back(Person("Ashank", 28)); // We need to give the data type
    people.emplace_back("Anup", 26); // In Place Object
    for (auto p : people){
        cout << p.Name << " is " << p.Age << " years old." << endl;
    }
    return 0;
}
