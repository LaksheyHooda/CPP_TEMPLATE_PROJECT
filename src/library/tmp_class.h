#ifndef TMP_CLASS_H
#define TMP_CLASS_H

class TmpClass {
public:
    TmpClass(int = 0);
    TmpClass(const TmpClass&);
    ~TmpClass();
    void addToNumber(const int);
    int readNumber() const;
private:
 int someNumber;

};

#endif