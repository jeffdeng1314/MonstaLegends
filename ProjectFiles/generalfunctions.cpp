#include "../HeaderFiles/header.h"
#include "../HeaderFiles/generalfunctions.h"

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