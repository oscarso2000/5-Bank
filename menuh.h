//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019

#include <iostream>
using namespace std;

enum MenuItemCode{cUnknownItem = 0, cNewAccount, cListAccounts, cQuitItem};


class Menu{
	public:
		void showMenu();
		MenuItemCode promptUser();
};
