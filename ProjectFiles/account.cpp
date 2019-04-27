// #include "../HeaderFiles/account.h"
#include "../HeaderFiles/allHeaders.h"

int account_menu(){
    int choice;
    print_headline("Account");
    cout<<"[1] Character Information"<<endl;
    cout<<"[2] Check Monsta"<<endl;
    cout<<"[3] Check Items"<<endl;
    cout<<"[4] Exit"<<endl;
    cin>>choice;

    if(choice >= 1 && choice <= 4)
        return choice;
    else if(cin.fail() || !(choice >= 1 && choice <= 4)){
        cout<<"Invalid input"<<endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n' );
        return 100;
    }
    else{return 100;}
}



bool user_account(int choice, character c1){
    switch(choice){
        case 1:
            character_info(c1);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            return false;
        default:
            return true;
    }

    return true;
}



void character_info(character c1){
    print_headline("Character Information");
    cout<<"Name: "<<c1.getname()<<endl;
    cout<<"Age: "<<c1.getage()<<endl;
    cout<<"Gender: "<<c1.getgender()<<endl;
    cout<<"Money: $"<<c1.getmoney()<<endl;
    cout<<endl;
}