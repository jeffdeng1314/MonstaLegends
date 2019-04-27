// #include "../HeaderFiles/monsters.h"
#include "../HeaderFiles/allHeaders.h"

void monster::setname(string name){
    this->name = name;
}

string monster::getname(){
    return name;
}

void monster::setdamage(uint32_t damage){
    this->damage = damage;
}

uint32_t monster::getdamage(){
    return damage;
}

void monster::setdefense(uint32_t defense){
    this->defense = defense;
}

uint32_t monster::getdefense(){
    return defense;
}

void monster::sethp(uint32_t hp){
    this->hp = hp;
}
uint32_t monster::gethp(){
    return hp;
}