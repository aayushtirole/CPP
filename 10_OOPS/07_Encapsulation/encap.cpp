#include <iostream>
using namespace std;

class Student {
private:
    // Data is hidden (encapsulation + data hiding)
    string name;
    int age;

public:
    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if(a > 0)  // validation example
            age = a;
        else
            cout << "Invalid Age!" << endl;
    }

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    // Access data only via setters and getters
    s1.setName("Aayush");
    s1.setAge(21);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}
