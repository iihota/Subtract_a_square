/*

  Subtract a square : This is a two-player mathematical game of strategy. It is played by two
  people with a pile of coins (or other tokens) between them. The players take turns removing
  coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, ...).
  The player who removes the last coin wins.
  3- problem-3 or game number-3

  5- created in : 2023\10\24


*/
#include <iostream>
#include <cmath>

using namespace std;


//  this function to look to the number if sqaur or not.
float if_sqaur(float the_number)
{

    float y = pow(the_number,0.5);
    int c = y;
    float z = y - c;
    return z;

}

//   main function.
int main()
{


//  this part for input the number of coins.
    int coins , first_round;
    do {
        cout << "enter the number of coins : "; cin >> coins;
        if (coins < 1 )
        {
            cout << "please enter a valid number for coins !" << endl;
        }
//   also i need a constant for the coins numbers >> first_round.
    first_round = coins;        
    }while(coins < 1);


int player_1, player_2; float gamer_1, gamer_2;
//   infinity loop. but it will break.
    while (true)
    {




//                                      ================================================================ 



//   --------------------------  player 1  -------------------------------


    if (coins == 0)
    {
        break;
    }

    if(!(coins == 0)){                     
        do {

        //  get the number from player 1 and look if it's a valid number and if sqaur.. if not get the new value.
            cout << "player_1 enter your number : "; cin >> player_1;
            gamer_1 = if_sqaur(player_1);
            if (player_1 < 1 || player_1 > (first_round - 1) || (gamer_1 != 0.0) || (coins - player_1) < 0)
            {
                cout << endl << "player_1 please sellect a vaild squar number : ";
            }

        //  if the number is valid coins = coins - player_1.
            if (gamer_1 == 0.0 && !(player_1 < 1 || player_1 > (first_round - 1) || (gamer_1 != 0.0) || (coins - player_1) < 0))
            {
                coins = coins - player_1;
            }

            cout << "\nnow the number of coins is : " << coins << endl << endl;
        // if coins == 0 player1 will win and break the loop.
            if (coins == 0)
            {
                cout << "##############  player_1  wins  ################";
                break;
            }

            } while(player_1 < 1 || player_1 > (first_round - 1) || (gamer_1 != 0.0) || (coins - player_1) < 0);
            
    }




    
//                                      =================================================================== 



//   --------------------------  player_2  -------------------------------

    if (coins == 0)
    {
        break;
    }

    if(!(coins == 0)){
        do {

        //  get the number from player_2 and look if it's a valid number and if sqaur.. if not get the new value.
            cout << "player_2 enter your number : "; cin >> player_2;
            gamer_2 = if_sqaur(player_2);
            if (player_2 < 1 || player_2 > (first_round - 1) || (gamer_2 != 0.0) || (coins - player_2) < 0)
            {
                cout << endl << "player_2 please sellect a vaild squar number : ";
            }

        //  if the number is valid coins = coins - player_2.
            if (gamer_2 == 0.0 && !(player_2 < 1 || player_2 > (first_round - 1) || (gamer_2 != 0.0) || (coins - player_2) < 0))
            {
                coins = coins - player_2;
            }
            cout << "\nnow the number of coins is : " << coins << endl << endl;


        // if coins == 0 player_2 will win and break the loop.
            if (coins == 0)
            {
                cout << "##############  player_2  wins  ################";
                break;
            }

            } while(player_2 < 1 || player_2 > (first_round - 1) || (gamer_2 != 0.0) || (coins - player_2) < 0);
            
    }
    }

    return 0;
}