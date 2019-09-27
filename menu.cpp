//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019


#include <iostream>
#include "menuh.h"
using namespace std;

void Menu::showMenu(){
	cout << "---- MENU ----" << endl;
	cout << "(" << MenuItemCode::cNewAccount << ") New Account" << endl;
	cout << "(" << MenuItemCode::cListAccounts << ") List Accounts" << endl;	
	cout << "(" << MenuItemCode::cQuitItem << ") Quit" << endl;			
}

MenuItemCode Menu::promptUser(){
	cout << "Enter Choice> ";
	int choice;
	cin >> choice;
	return (MenuItemCode) choice;
}

