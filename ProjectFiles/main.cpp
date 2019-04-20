#include "../HeaderFiles/header.h"
#include "../HeaderFiles/character.h"
#include "../HeaderFiles/generalfunctions.h"



int main(){

    int x = 1;
    string name, gender;
    int age;

    greetings(&name,&gender,&age);
    
    character c1(name,age,gender);

    cout<<"Hello "<<c1.getname()<<"! Welcome to Monsta Legends!"<<endl;

    return 0;
}
