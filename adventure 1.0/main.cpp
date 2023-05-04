#include <iostream>
using namespace std;
#include <cstdlib>;
#include <ctime>;


// welcome the player
// set up the game
//     int health = 10, attack, block, turns = 0
//     seed the random number generator
// start the loop
//     add 1 to turns
//     start the encounter
//         randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
//         if block is greater or equal to attack, successful block
//         otherwise, subtract attack value from health.
// keep looping while health is greater than zero and fewer than 4 turns have happened

// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.

int main() {

  int input;
  cout << "Hello player!Are you ready to play?\n";
  cin >> input;
  cout << "At the start of your adventure, you encounter...A SLIME!\n";
  cout << "You aren't strong enough to fight back just yet,\n";
  cout << "But it's okay! You can still block the attacks!\n.";
  cout << "Good Luck\n";
  cout << "[Battle Start]\n";
  int health = 10;
  int attacks = 0;
  int block = 0;
  int turns = 0;
  int loopcount = 0;
  while (turns < 4 && health > 0){
 srand(time(0));
  int first = rand() % 4 + 1;
  int second = rand() % 4 + 1;
  if(first > second){
    cout << "You Successfully blocked the hit!\n";
    block += 1;
    loopcount += 1;
    turns += 1;
  }
  if (first < second){
    health -= second;
    cout << "Your health is " << health << " .\n";
  loopcount += 1;
    turns += 1;
  }
  
  }
 if(health < 0){
   cout << "You died, L+Ratio.\n";
 }
  if(health > 0){
    cout << "You survived the encounter.\n";
    cout << "You're final stats are Health - " << health << " , Block - " << block << " , and turns " << turns << " and that is all!\n";
    cout << "Congratulations, luck was on your side!\n";
      }
  
}