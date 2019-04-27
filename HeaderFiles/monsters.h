#pragma once
// #include "header.h"
// #include "generalfunctions.h"
#include "allHeaders.h"

class monster{

    protected:
        string name;
        uint32_t hp;
        uint32_t damage;
        uint32_t defense;

    public:
        void setname(string name);
        string getname();

        void sethp(uint32_t hp);
        uint32_t gethp();

        void setdamage(uint32_t damage);
        uint32_t getdamage();

        void setdefense(uint32_t defense);
        uint32_t getdefense();

};