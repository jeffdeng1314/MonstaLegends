#include "../HeaderFiles/header.h"
#include "../HeaderFiles/character.h"
#include "../HeaderFiles/generalfunctions.h"
#include "../HeaderFiles/account.h"

int main(){

    srand(time(NULL));
    string name, gender;
    int age;

    character c1("N/A",0,"N/A");
    if(!new_or_load_game()){
        ifstream load("game.ros", ios::binary);
        load.read((char *)&c1, sizeof(c1));
    }
    else{
        cin.ignore();
        greetings(&name,&gender,&age);
        c1.setage(age);
        c1.setgender(gender);
        c1.setname(name);
    }
    

    cout<<"Hello "<<c1.getname()<<"! Welcome to Monsta Legends!"<<endl;

    while (1){

       
        switch(main_menu()){
            case 1:
                // adventure_menu(c1);
                break;
            case 2:
            
                system("clear");
                while(1){
                    int choice = account_menu();
                    if(!user_account(choice,c1))
                        break;
                }
                break;
            case 3:
                save_game(c1);
                break;
            case 4:
                load_game(c1);
                break;
            
            case 5:
                cout<<"Exiting Monsta Legends...."<<endl;
                usleep(1);
                cout<<"Good Bye "<<c1.getname()<<"!"<<endl;
                return 0;
            default:
                continue;
                
        }

    }

    return 0;
}
