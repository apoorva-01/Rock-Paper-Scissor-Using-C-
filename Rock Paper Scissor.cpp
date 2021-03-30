#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
    
    char ch;
    int win = 0;
    int tie = 0;
    int lose = 0;
    
    do{
    int choice;
    
    cout << "--------------------------------------" << endl;
    cout << "---Rock, Paper, Scissors!---" << endl;
    cout << "--------------------------------------" << endl;
    
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
    cin >> choice;
   
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
   
    if(choice == 1 && ai == 1){
         cout << "Rock meets Rock its a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tie++;
         }
       
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
        
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         system("CLS");
         }while(ch == 'Y' || ch == 'y');

    return 0;
}
