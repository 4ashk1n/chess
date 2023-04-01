//
// Created by Дмитрий on 01.04.2023.
//

#include <windows.h>
#include <string>

#pragma execution_character_set( "utf-8" )

#ifndef CHESS_FIGURE_H
#define CHESS_FIGURE_H

#define RESET   "\033[0m"
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */


class Figure {
public:
    enum colors {BLACK, WHITE};
protected:
    const std::string liter;
    colors color;
public:
    Figure() = delete;
    Figure(const std::string& liter_, const Figure::colors& color_): liter(liter_), color(color_){};

    std::string get_out() const{
        if(color == colors::BLACK)
            return BOLDRED + liter + RESET;
        return BOLDWHITE + liter + RESET;
    }


};

class King final:  public  Figure {
public:
    explicit King(const Figure::colors& color_): Figure("♚", color_){}
};

class Queen final: public Figure{
public:
    explicit Queen(const Figure::colors& color_): Figure("♛", color_){}
};

class Rook final: public Figure{
public:
    explicit Rook(const Figure::colors& color_): Figure("♜", color_){}
};

class Bishop final: public Figure{
public:
    explicit Bishop(const Figure::colors& color_): Figure("♝", color_){}
};

class Knight final: public Figure{
public:
    explicit Knight(const Figure::colors& color_): Figure("♞", color_){}
};

class Pawn final: public Figure{
public:
    explicit Pawn(const Figure::colors& color_): Figure("♟︎", color_){}
};

#endif //CHESS_FIGURE_H
