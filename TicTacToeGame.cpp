//
//  TicTacToeGame.cpp
//  TicTacToe
//
//  Created by Yuliia Ivanechko on 08.06.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

#include "TicTacToeGame.hpp"


std::string TicTacToeGame::Players::choose_sign() {
    {
        int choise;
        std::cout<<"Enter 1 or 2 to choose your character\n1: "<<dog<<" or 2: "<<cat<<"\t";
        std::cin>>choise;
        if(choise == 1)
            return sign = dog;
        
        else return sign = cat;
    }
}

void TicTacToeGame::Players::go(int &col, int &row) {
    bool not_entered = true;
    while (not_entered) {
        std::cout<<"Please select the position: ";
        std::cin>>position;
        col = position % 10 - 1;
        row = (position - position % 10) / 10 - 1 ;
        if(col > 2 || row > 2) {
            std::cout<<"Wrong number, please look at the board=)\n";
            not_entered = true;
        } else not_entered = false;
    }
}

void TicTacToeGame::signs() {
    if (player1.choose_sign() == player1.dog)
        player2.sign = player2.cat;
    else player2.sign = player2.dog;
    std::cout<<"Player1: "<<player1.sign<<" and Player2: "<<player2.sign<<std::endl;
}

TicTacToeGame::TicTacToeGame() {
    board = new std::string* [3];
    for (std::size_t i = 0; i!= 3; ++i)
        board[i] = new std::string [3];
    for (std::size_t w = 0; w!= 3; ++w)
        for (std::size_t h = 0; h!=3; ++h)
            board[w][h] = std::to_string(w + 1) + std::to_string(h + 1);
}

bool TicTacToeGame::end() {
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
        std::cout<<"Player "<<board[0][0]<<" wins\n";
        return true;
    } else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) {
        std::cout<<"Player "<<board[1][0]<<" wins\n";
        return true;
    } else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
        std::cout<<"Player "<<board[2][0]<<" wins\n";
        return true;
    } else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
        std::cout<<"Player "<<board[0][0]<<" wins\n";
        return true;
    } else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
        std::cout<<"Player "<<board[0][1]<<" wins\n";
        return true;
    } else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
        std::cout<<"Player "<<board[0][2]<<" wins\n";
        return true;
    } else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        std::cout<<"Player "<<board[0][0]<<" wins\n";
        return true;
    } else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        std::cout<<"Player "<<board[0][2]<<" wins\n";
        return true;
    } else return false;
}

void TicTacToeGame::display_board() {
    std::cout<<"|----|----|----|\n";
    std::cout<<"| "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" |\n";
    std::cout<<"|----|----|----|\n";
    std::cout<<"| "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" |\n";
    std::cout<<"|----|----|----|\n";
    std::cout<<"| "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" |\n";
    std::cout<<"|----|----|----|\n";
    
  }

