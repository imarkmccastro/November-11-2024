#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Hello User! Please enter your information below." << endl
        << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old." << endl;

    return 0;
}
