/*
*filename: user.h
* version: 0.1
*/

#ifndef USER_H
#define USER_H

#define IN_PARM
#define OUT_PRAM

const int MAX_USERNAME_LENGTH = 21;
const int MAX_PASSWORD_LENGTH = 33;
//#include<string>

//using namespace std;

typedef char

class User{
protected:
    char szUsername[MAX_USERNAME_LENGTH];
    char szPassword[MAX_PASSWORD_LENGTH];
    User(char*, char*);
public:
    virtual ~User()=0;
};

class Manager:public User{
public:

};

class NormalUser:public User{
protected:
    int iRemainCount;
public:
    NormalUser(char*, char*, int);
};

class SystemManager:public Manager{

};

class LibraryManager:public Manager{

};

class Student:public NormalUser{

};

class Teacher:public NormalUser{

};

#endif
