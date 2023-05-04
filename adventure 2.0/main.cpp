#include <iostream>
using namespace std;

// Story
//  return type is void
//  AskYesNo
//  One string argument named "question"
//  return type is bool
//  RollDie
//  one int parameter named "sides" with a default value of 6
//  return type is int
//  Ending
//  return type is void
//  Adventure
//  return type is void or bool
//  calls rollDie for attack, block, & treasure
//  tells the player their health after the encounter
//  obviously main
//  calls story,
//  has a loop for adventure,
//  checks for health
//  calls ending

int health = 30;
int money = 0;

int rollDieAttack(int sides = 6) {
  int roll = rand() % sides + 1;
  return roll; // block
}
int first = rand() % 6 + 1;   // attack
int second = rand() % 10 + 1; // money

void welcome() { cout << "Do you want to go on an adventure?\n"; }
void welcome(string story) { cout << story << ".\n"; }

bool askYN(string question) {
  while (true) {

    cout << question << "(Y/N)\n";
    char input;
    cin >> input;

    if (input == 'y' || input == 'Y') {
      return true;
    } else if (input == 'n' || input == 'N') {
      return false;

    }

    else {
      cout << "Invalid answer. Try again\n";
    }
  }
}

int main() {

  cout << "You wake up...\n";
  cout << "Your health is " << health << " .\n";
  cout << "You have " << money << " treature.\n";

  while (askYN("do you want to go on an adventure?") == true) {
    srand(time(0));
    cout << "let's get started! \n";
    if (rollDieAttack() > first) {
      cout << "You win!\n";
      money += second;
      cout << "You have " << health << " health.\n";
      cout << "You have " << money << " treasure.\n";
    }
    if (rollDieAttack() < first) {
      cout << "You lost.\n";
      health -= first;
      cout << "You have " << health << " health.\n";
      cout << "You have " << money << " treasure.\n";
    }
    if (askYN("do you want to go on an adventure?") == false) {
      cout << "Maybe next time.\n";
      cout << "You ended with " << health << " health.\n";
      cout << "You ended with " << money << " treasure.\n";
      return 0;
    }
  }
}