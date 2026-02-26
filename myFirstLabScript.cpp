#include <iostream>
using namespace std;

int main() {
    string name;
    string student_id;

    cout << "What is your name? ";
    cin >> name;

    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID? ";
    cin >> student_id;

    cout << "Your ID is " << student_id << "." << endl;

    return 0;
}