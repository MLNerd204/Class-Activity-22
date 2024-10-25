#include <iostream>
#include <string>
#include <sstream>
#include "nameprocessor.hpp"

using namespace std;

int main() {
    string fullName;
    
    cout<<"Enter full name: ";
    getline(cin, fullName);
    
    nameProcessor np;
    np.processFullname(fullName);
    
    return 0;
}
