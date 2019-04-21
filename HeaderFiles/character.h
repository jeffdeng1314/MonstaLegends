#pragma once
#include "header.h"

class character{

    private:
        string name;
        int age;
        int money;
        string gender;
    
    public:
        //constructor
        character(string name, int age, string gender){
            this->name = name;
            this->age = age;
            money = 0;
            this->gender = gender;
        }

        void setname(string name);
        string getname();

        void setage(int age);
        int getage();

        void setmoney(int money);
        int getmoney();

        void setgender(string gender);
        string getgender();

};
