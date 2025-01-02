#ifndef CHESS_H
#define CHESS_H

#include "enums.h"
#include "board.h"

class Chess {
private:
  Board board;
  Color currTurn = Color::WHITE; // default: white to move
  bool gameOver = false; // default: game is not over

public:
  Chess();

};

#endif
