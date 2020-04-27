#include "auto_ui.h"
#include <iostream>

using namespace std;


void AutoUI::menu() {
    cout << "Welcome!\n"
            "Please select a mode\n"
            "1 - Add a new client \n"
            "2 - Update a client \n"
            "3 - Delete a client\n"
            "4  - Add a new car\n"
            "5 - Update a car\n"
            "6 - Delete a car\n"
            "7 - Find a car by ID\n"
            "8 - Find all cars\n"
            "9 - Save a car\n"
            "0 - Exit\n";


}

void AutoUI::console() {
    int choice;
    while (true) {
        this->menu();
        do {
            cin >> choice;

            // cazul in care userul introduce un sir de caractere, in mod normal programul s-ar termina
            if (cin.fail()) {
                cout << "Please enter a valid option!\n";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> choice;
            }
            // cazul in care userul introduce un intreg, insa diferit de 0, 1 sau 2
            if (choice != 0 && choice != 1 && choice != 2)
                cout << "Please enter a valid option!\n";
        } while ((choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 &&
                  choice != 6 && choice != 7 && choice != 8 && choice != 9) ||
                 cin.fail());  // bucla se repeta pana cand userul introduce un input corect

        if (choice == 0)
            exit(0);
        else if(choice == 1)
        {
            int id;
            string name;
            cout << "ID:  \n"; cin>> id;
            cout << " Name : \n"; cin >> name;
            this ->clients.addClient( Client(id, name));
        } else if (choice == 2){
            int id;
            string name, new_name;
            cout << "ID:  \n"; cin>> id;
            cout << " Name : \n"; cin >> name;
            cout << "New Name: \n"; cin>>new_name;
            this ->clients.updateClient(Client(id, name), new_name);
        } else if (choice == 3){
            int id;
            string name;
            cout << "ID:  \n"; cin>> id;
            cout << " Name : \n"; cin >> name;
            this->clients.deleteClient(Client(id, name));
        } else if(choice == 4){
            int id;
            string mark, model;
            cout << "ID: \n "; cin>>id;
            cout<<"Mark: \n"; cin>>mark;
            cout<<"Model: \n"; cin>>model;
            this->clients.addAuto(Auto(id, mark, model));
        } else if(choice == 5){
            int id;
            string mark, model;
            cout << "ID: \n "; cin>>id;
            cout<<" New Mark: \n"; cin>>mark;
            cout<<"New Model: \n"; cin>>model;
            this ->ctrl.updateAuto(Auto(id, mark, model));
        } else if(choice == 6){
            int id;
            string mark, model;
            cout << "ID: \n "; cin>>id;
            cout<<" New Mark: \n"; cin>>mark;
            cout<<"New Model: \n"; cin>>model;
            this ->clients.deleteAuto(Auto(id, mark, model));
        } else if(choice == 7)
        {
            int id;
            cout <<"ID: \n"; cin>> id;
            this->ctrl.findAutoById(id);
        } else if(choice == 8){
            this ->ctrl.findAll();
        } else if(choice == 9)
        {
            int id;
            string mark, model;
            cout << "ID: \n "; cin>>id;
            cout<<" New Mark: \n"; cin>>mark;
            cout<<"New Model: \n"; cin>>model;
            this->ctrl.saveAuto(Auto(id, mark, model));
        }


    }
}
