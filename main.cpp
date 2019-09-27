//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019

#include <iostream>
#include "menuh.h"
#include "bankaccounth.h"
#include "bankh.h"
using namespace std;

int main(int argc, char *argv[]){
	Menu menu;
	Bank bank;
	bool cont = true;
	while (cont  == true){
		menu.showMenu();
		bool check = false;		
		switch(menu.promptUser()){
			case cNewAccount:
				bank.newAccount();
				check = true;
				break;
			case cListAccounts:
				bank.listAccounts();
				check = true;
				break;
			case cQuitItem:
				cout << "Quitting!" << endl;
				check = true;
				cont = false;
				break;
		}
		if (check == false){
			cout << "ERROR, unknown item selected" << endl;
		}			
	}
}
