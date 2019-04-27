#pragma once
// #include "header.h"
// #include "monsters.h"
#include "allHeaders.h"

class character{

    private:
        string name;
        uint32_t age;
        uint32_t money;
        string gender;
        list<monster> monsters;
    
    public:
        //constructor
        character(string name, uint32_t age, string gender){
            this->name = name;
            this->age = age;
            money = 0;
            this->gender = gender;
        }

        const list<monster>* getmonsters();

        void setmonsters(monster x);

        void setname(string name);
        string getname();

        void setage(uint32_t age);
        uint32_t getage();

        void setmoney(uint32_t money);
        uint32_t getmoney();

        void setgender(string gender);
        string getgender();

};
