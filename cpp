#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string fullName;
    
    cout<<"Enter full name: ";
    getline(cin, fullName);
    
    istringstream iss(fullName);
    string firstName, lastName;

    iss>>firstName;

    string temp;
    while(iss >> temp){
        lastName=temp;
    }

    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;

    return 0;
}
