#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>


string Names[] = {"Slime", "Griffen", "Pheonix", "Dragon", "Boar"};

class Monster {
public:
  string name;
  int health;
  int energy;
  int x;
  int y;

  Monster ( string givenName = "Monster", int givenHealth = 20, int givenEnergy = 25){
    cout << "A new monster spawned!\n";
    name = givenName;
    health = givenHealth;
    energy = givenEnergy;
    x = (rand() % 5) - 2;        
    y = (rand() % 5) - 2; 
  }
void status(){
  cout << name << " health = " <<  health << "!\n";
}
void move(){
  if( energy >= 0){
    
  }
  else{
    cout << name << " passed out.\n";
  }
  while(true){

          int direction = rand() % 4;

          if(direction == 0) {

              if(y < 2) {

                  y++;
                  cout << name << " moves north.\n";
                break;
              }
          }
          else if(direction == 1 && y > -2) {y--; break;}
          else if(direction == 2 && x < 2) {x++; break;}
          else if(direction == 3 && x > -2) {x--; break;}
        
}
  energy -= 1;
  void energy(){
    cout << name << " 's energy level is " << energy << ".\n";
  }
};


int main() {
  
}