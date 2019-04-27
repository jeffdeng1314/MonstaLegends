// #include "../HeaderFiles/header.h"
// #include "../HeaderFiles/character.h"
// #include "../HeaderFiles/generalfunctions.h"
// #include "../HeaderFiles/account.h"
#include "../HeaderFiles/allHeaders.h"


int main(){

    srand(time(NULL));
    string name, gender;
    uint32_t age;

    character c1("N/A",0,"N/A");
    print_headline("Monsta Legends");
    if(!new_or_load_game()){
        load_game(&c1);
    }
    else{
        greetings(&name,&gender,&age);
        c1.setage(age);
        c1.setgender(gender);
        c1.setname(name);
    }
    
    screen_clear();
    cout<<"Hello "<<c1.getname()<<"! Welcome to Monsta Legends!"<<endl;

    while (1){

       
        switch(main_menu()){
            case 1:
                // adventure_menu(c1);
                break;
            case 2:
                screen_clear();
                while(1){
                    int choice = account_menu();
                    if(!user_account(choice,c1)){
                        screen_clear();
                        break;

                    }

                }
                break;
            case 3:
                save_game(&c1);
                break;
            case 4:
                load_game(&c1);
                break;
            
            case 5:
                cout<<"Exiting Monsta Legends...."<<endl;
                cout<<"Good Bye "<<c1.getname()<<"!"<<endl;
                return 0;
            default:
                continue;
                
        }

    }

    return 0;
}
