#include "tmp_class.h"

TmpClass::TmpClass(int a) {
    someNumber = a;
}

TmpClass::TmpClass(const TmpClass& other) {
    someNumber = other.readNumber();
}

TmpClass::~TmpClass() {
    //destroy any allocated memory
}

void TmpClass::addToNumber(const int n) {
    someNumber += n;
}
int TmpClass::readNumber() const {
    return someNumber;
}