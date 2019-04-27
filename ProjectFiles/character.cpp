// #include "../HeaderFiles/character.h"
#include "../HeaderFiles/allHeaders.h"

void character::setname(string name){
    this->name = name;
}

string character::getname(){
    return name;
}

void character::setage(uint32_t age){
    this->age = age;
}

uint32_t character::getage(){
    return age;
}

void character::setmoney(uint32_t money){
    this->money = money;
}

uint32_t character::getmoney(){
    return money;
}

void character::setgender(string gender){
    this->gender = gender;
}
string character::getgender(){
    return gender;
}

const list<monster> *character:: getmonsters(){
    return &monsters;
}

void character::setmonsters(monster x){
    monsters.push_back(x);
}