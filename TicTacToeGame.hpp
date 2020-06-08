//
//  TicTacToeGame.hpp
//  TicTacToe
//
//  Created by Yuliia Ivanechko on 08.06.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

#ifndef TicTacToeGame_hpp
#define TicTacToeGame_hpp

#include <stdio.h>
#include <iostream>
#include <string>


class TicTacToeGame {
public:
    void signs();
    
    TicTacToeGame();
    
    void display_board();
    
    void game() {
        int column, row;
        std::cout<<"Player 1: "; player1.go(column, row);
        board[row][column] = player1.sign;
        std::cout<<"Player 2: "; player2.go(column, row);
        board[row][column] = player2.sign;
    }
    
    bool end();
        

    ~TicTacToeGame() {
        for (std::size_t i = 0; i!= 3; ++i)
            delete [] board[i];
        delete []board;
    }
  
    
private:
    class Players{
    public:
        std::string dog = "🐶", cat = "🐱";
        std::string sign;
        int position;
        std::string choose_sign();
        void go(int& col, int& row);
        Players() {}
    };
    
    Players player1, player2;
    std::string** board;
};

#endif /* TicTacToeGame_hpp */
