#pragma once
#include <iostream>
#include <cstring>
class MyString {
private:
    char* str;
    int length;
    static int countObject;
    int getLengthStr(const char* str) const; 
public:
    static int getCount();
    MyString();
    MyString(int length);
    MyString(const char* Str);
    ~MyString();
    void input();
    void output() const;
    void setStr(const char* Str);
    const char* getStr() const;
    int getLength() const;
    void myStrCpy(const MyString& obj);
    bool myStrStr(const char* substr) const;
    int myChr(char c) const;
    int myStrLen() const;
    void myStrCat(const MyString& other);
    void myDelChr(char c);
    int myStrCmp(const MyString& other) const;
};


