// topic 2 task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /////////////////steps 1 - 4//////////////////
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;
    cout << "your number was: " << n << endl;
    if (n < 7)
    {
        cout << "It was lower than 7" << endl;
    }
    else if (n == 7) 
    {
        cout << " it is 7" << endl;
    }
    else if (n > 7) 
    {
        cout << "more than 7" << endl;
    }
    ////////////////////Step 5///////////////////
    int num1;
    cout << "enter a number" << endl;
    cin >> num1;

    switch (num1)
    {
    case(1):
        cout << "one" << endl;
        break;
    case(2):
        cout << "two" << endl;
        break;
    case(3):
        cout << "three" << endl;
        break;
    case(4):
        cout << "four" << endl;
        break;
    case(5):
        cout << "five" << endl;
        break;
    case(6):
        cout << "six" << endl;
        break;
    case(7):
        cout << "seven" << endl;
        break;
    case(8):
        cout << "eight" << endl;
        break;
    default:
        cout << "something else" << endl;
    }
    /////////////////////////steps 7 - 9////////////////
    int player1_x = 0;
    int player1_y = 0;

    cout << "player 1: enter the x-coordinate of your spawn location" << endl;
    cin >> player1_x;
    cout << "player 1: enter the y-coordinate of your spawn location" << endl;
    cin >> player1_y;

    if (player1_x > 20)
    {
        cout << "you have gone to far to the right" << endl;
        player1_x = 20;
    }
    else if (player1_x < 10)
    {
        cout << "you have gone too far to the left" << endl;
        player1_x = 10;
    }


    if (player1_y > 25)
    {
        cout << "you have gone to far to up" << endl;
        player1_y = 25;
    }
    else if (player1_y < 5)
    {
        cout << "you have gone too far to down" << endl;
        player1_y = 5;
    }
    cout << "you have been spawned at " << player1_x << "," << player1_y << endl;

    int player2_x = 0;
    int player2_y = 0;

    cout << "player 2: enter the x-coordinate of your spawn location" << endl;
    cin >> player2_x;
    cout << "player 2: enter the y-coordinate of your spawn location" << endl;
    cin >> player2_y;

    if (player2_x > 20)
    {
        cout << "you have gone to far to the right" << endl;
        player2_x = 20;
    }
    else if (player2_x < 10)
    {
        cout << "you have gone too far to the left" << endl;
        player2_x = 10;
    }


    if (player2_y > 25)
    {
        cout << "you have gone to far to up" << endl;
        player2_y = 25;
    }
    else if (player2_y < 5)
    {
        cout << "you have gone too far to down" << endl;
        player2_y = 5;
    }
    cout << "you have been spawned at " << player2_x << "," << player2_y << endl;

    int distance_x = player1_x - player2_x;
    int distance_y = player1_y - player2_y;
    
    if (distance_x < 0) 
    {
        distance_x * -1;
        //since you cannot square root negative numbers, this part of the code checks
        //if the result is negative and if so it will times it by -1 to make it positive
        //this should not affect the rest of the code as we are only looking for the distance 
        //between the players 
    }

    if (distance_y < 0)
    {
        distance_y * -1;
    }

    int distance1 = sqrt((distance_x * distance_x) + (distance_y * distance_y));

    if (distance1 < 2) 
    {
        cout << "too close" << endl;
    }
    cout << "player 1 is about " << distance1 << " units from player 2" << endl;
    ///////////////////////////step 10/////////////////////////////////
    bool okay = false;
    int answer = 0;
    while (okay == false)
    {
        cout << "enter a number between 1 and 9" << endl;
        cin >> answer;
        if (answer < 10 and answer > 0)
        {
            okay = true;
        }
        else
        {
            cout << "you have entered an invalid number" << endl;

        }
    }
    /////////////////////////////step 11///////////////////////////////
    int player_x = 5;
    int player_y = 5;
    char player_input = '#';
    bool inside = true; 

    while (inside) 
    {
        cout << "your co-ordinates are " << player_x << "," << player_y << endl;
        if (player_x == 1 or player_x == 10 or player_y == 1 or player_y == 10) 
        {
            cout << "you are at the edge of the permitted space, turn back" << endl;
        }
        cout << "which direction would you like to move (enter the letter of the direction), choose from north, east, south or west" << endl;
        cin >> player_input;
        switch (player_input) 
        {
        case('n'):
            player_y - 1;
            break;
        case('e'):
            player_y - 1;
            break;
        case('s'):
            player_y - 1;
            break;
        case('w'):
            player_y - 1;
            break;
        default:
            cout << "invalid input try again" << endl;

        }

    }
    cout << "you have left the permitted area, you fail" << endl;
}

