#include "menu.h"

#include <iostream>
//view: console
using namespace std;
int menu()
{
    cout<<"You can: "<<endl;
    cout<<"1. Input data from file"<<endl;
    cout<<"2. Input data from keyboard"<<endl;
    cout<<"3. Show points "<<endl;
    cout<<"4. Find points which separate set into 2 equals parts"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"Your choice: ";
    int choice;
    cin>>choice;
    if((choice<0)||(choice>4))
        return menu();
    return choice;
}

