#include "MyString.h"
using namespace std;
int MyString::countObject = 0;
int MyString::getLengthStr(const char* str) const {
    return str ? strlen(str) : 0;
}
int MyString::getCount() {
    return countObject;
}
MyString::MyString() {
    length = 80;
    str = new char[length + 1] {};
    countObject++;
}
MyString::MyString(int length) {
    this->length = length;
    str = new char[length + 1] {};
    countObject++;
}
MyString::MyString(const char* Str) {
    length = getLengthStr(Str);
    str = new char[length + 1];
    strcpy(str, Str);
    countObject++;
}
MyString::~MyString() {
    delete[] str;
}
void MyString::setStr(const char* Str) {
    delete[] str;
    length = getLengthStr(Str);
    str = new char[length + 1];
    strcpy(str, Str);
}
const char* MyString::getStr() const {
    return str;
}
int MyString::getLength() const {
    return length;
}
void MyString::input() {
    cout << "Enter string: ";
    char buffer[256];
    cin.getline(buffer, 256);
    setStr(buffer);
}
void MyString::output() const {
    cout << "Your string: " << str << endl;
    cout << "Length: " << length << endl;
}
void MyString::myStrCpy(const MyString& obj) {
    setStr(obj.getStr());
}
bool MyString::myStrStr(const char* substr) const {
    return strstr(str, substr) != nullptr;
}
int MyString::myChr(char c) const {
    char* pos = strchr(str, c);
    return pos ? (pos - str) : -1;
}
int MyString::myStrLen() const {
    return length;
}
void MyString::myStrCat(const MyString& other) {
    int newLength = length + other.length;
    char* newStr = new char[newLength + 1];
    strcpy(newStr, str);
    strcat(newStr, other.str);

    delete[] str;
    str = newStr;
    length = newLength;
}
void MyString::myDelChr(char c) {
    int newSize = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != c) newSize++;
    }
    char* newStr = new char[newSize + 1];
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != c) {
            newStr[j++] = str[i];
        }
    }
    newStr[newSize] = '\0';
    delete[] str;
    str = newStr;
    length = newSize;
}
int MyString::myStrCmp(const MyString& other) const {
    return strcmp(str, other.str);
}