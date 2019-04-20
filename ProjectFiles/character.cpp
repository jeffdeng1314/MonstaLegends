#include "../HeaderFiles/character.h"

void character::setname(string name){
    this->name = name;
}

string character::getname(){
    return name;
}

void character::setage(int age){
    this->age = age;
}

int character::getage(){
    return age;
}

void character::setmoney(int money){
    this->money = money;
}

int character::getmoney(){
    return money;
}

void character::setgender(string gender){
    this->gender = gender;
}
string character::getgender(){
    return gender;
}