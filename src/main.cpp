#include <iostream>
#include "library/tmp_class.h"

using namespace std;

int main() {
    TmpClass myTmpClass(5);

    cout << "The number currently is: ";

    cout << myTmpClass.readNumber() << endl;

    cout << "numbers you want to add: ";

    int x = -1; //read numbers in until 0
    while(x != 0)
    {
        cin >> x; 
        myTmpClass.addToNumber(x);
    }

    int newNumber = myTmpClass.readNumber();

    cout << "The number now is: " << newNumber << endl;

    return 1; //exit
}