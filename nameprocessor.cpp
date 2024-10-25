#include "nameprocessor.hpp"

void nameProcessor::processFullname(const string& fullName){
    istringstream iss(fullName);
    string firstName, lastName;

    iss>>firstName;

    string temp;
    while(iss >> temp){
        lastName=temp;
    }

    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;

}
