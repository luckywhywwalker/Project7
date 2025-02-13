#include "MyString.h"
#include <iostream>
using namespace std;
int main() {
    MyString str1;
    str1.input();
    str1.output();
    MyString str2("Hello, world!");
    str2.output();
    MyString str3(50);
    str3.setStr("C++ is cool!");
    str3.output();
    cout << "Concatenation: " << endl;
    str1.myStrCat(str2);
    str1.output();
    cout << "Comparison: " << str1.myStrCmp(str2) << endl;
    cout << "Find 'o': " << str1.myChr('o') << endl;
    cout << "Deleting 'o': " << endl;
    str1.myDelChr('o');
    str1.output();
    cout << "Substring 'cool': " << str3.myStrStr("cool") << endl;
    cout << "Count of objects: " << MyString::getCount() << endl;
    return 0;
}
