#include "header.h"
#include "character.h"



void greetings(string *name, string *gender, int *age){
    cout<<"Please enter your name: ";
    getline(cin,*name);
    cout<<endl;
    cout<<"How old are you: ";
    cin>>*age;
    cout<<endl;
    cout<<"What is your gender: ";
    getline(cin, *gender);
    system("clear");

}


int main(){

    int x = 1;
    string name, gender;
    int age;

    greetings(&name,&gender,&age);
    
    character c1(name,age,gender);

    cout<<"Hello "<<c1.getname()<<"! Welcome to Monsta Legends!"<<endl;

    return 0;
}
