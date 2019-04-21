#include "../HeaderFiles/generalfunctions.h"


int main_menu(){

    int choice;
    print_headline("User Menu");
    cout<<"[1] Adventure"<<endl;
    cout<<"[2] Account"<<endl;
    cout<<"[3] Save Game"<<endl;
    cout<<"[4] Load Game"<<endl;
    cout<<"[5] Quit"<<endl;
    cin >> choice;

    if(choice >= 1 && choice <= 5)
        return choice;
    else if(cin.fail() || !(choice >= 1 && choice <= 5)){
        cout<<"Invalid input"<<endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n' );
        return 100;
    }
    else{return 100;}


}
void greetings(string *name, string *gender, int *age){
    cout<<"Please enter your name: ";
    getline(cin,*name);
    cout<<endl;
    cout<<"How old are you: ";
    cin>>*age;
    cout<<endl;
    cout<<"What is your gender: ";
    cin.ignore();
    getline(cin, *gender);
    system("clear");
}

void print_headline(string x){
    cout<<"----------"<<x<<"----------"<<endl;
}

//Binary Serialization
void load_game(character c1){
    cout<<"Loading progress....."<<endl;
    usleep(2000);

    ifstream load("game.ros", ios::binary);
    load.read((char *)&c1, sizeof(c1));
}

//Binary Serialization
void save_game(character c1){
    cout<<"Saving progress....."<<endl;
    usleep(2000);
    ofstream save("game.ros", ios::binary);
    save.write((char *)&c1, sizeof(c1));
    cout<<"Done!"<<endl;
}

bool new_or_load_game(){
    int x;    
    cout<<"[1] New game"<<endl;
    cout<<"[2] Load game"<<endl;
    cin>>x;

    if(x == 2)
        return false;
    else if(x == 1)
        return true;
    else{
        cout<<"Invalid input"<<endl;
        exit(1);
    }


}