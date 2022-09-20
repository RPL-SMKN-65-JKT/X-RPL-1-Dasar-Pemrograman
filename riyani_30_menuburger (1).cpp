#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double total = 0;

int main() {

string choice1;
string choice2;
string choice3;
string choice4;
string choice5;
string choice6;
double price;
double total_cost;

cout << "Hello and welcome to Burger King!";
cout << "\n";
cout << "Here is the Menu. Please place your order.";
cout << "\n";
cout << "BURGERS" << endl;
cout << "1. Burger - $2.00" << endl;
cout << "2. Bacon Burger - $2.50" << endl;
cout << "3. Cheese Burger - $2.50" << endl;
cout << "Please input the choice number of the burger you desire (number) .";
cin >> choice1;

if(choice1 == "1" || choice1 == "1.")
{
price = 2.00;
}
else if(choice1 == "2" || choice1 == "2.")
{
price = 2.50;
}
else if(choice1 == "3" || choice1 == "3.")
{
price = 2.50;
}


cout << "DRINKS" << endl;
cout << "4. Diet Coke - $1.00" << endl;
cout << "5. Mountain Dew - $1.00" << endl;
cout << "6. Beer - $2.00" << endl;

cout << "Okay, would you like anything to drink with that? (y/n): ";

char response;
cin >> response;
if (response == 'y')
{
cout << "Please input the choice number of the drink you desire (number) .";
}
else if (response = 'n')
cout << "Okay, your total price is ." << endl;

cin >> choice4;

if(choice4 == "4" || choice4 == "4.")
{
total == 1.00;
}
else if (choice5 == "5" || choice5 == "5.")
{
total == 1.00;
}
else (choice6 == "6" || choice6 == "6.");
{
total == 2.00;
}

if (response = 'n')
cout << "Okay, your total price is ." << endl;
system ("pause");
return 0;
}