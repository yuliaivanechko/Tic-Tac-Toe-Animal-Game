//
//  main.cpp
//  TicTacToe
//
//  Created by Yuliia Ivanechko on 08.06.2020.
//  Copyright © 2020 Yuliia Ivanechko. All rights reserved.
//

#include "TicTacToeGame.hpp"

int main(int argc, const char * argv[]) {
    
    TicTacToeGame t;
    t.display_board();
    t.signs();
    while(!t.end()) {
        t.game();
        t.display_board();
    }
    
    return 0;
}
