#pragma once
#include <string>
#include "Direction.hpp"
namespace ariel
{
    class Board
    {
    public:
    Board();
    void post(int a,int b,Direction,std::string str);
    std::string read(int a,int b,Direction,int c);
    std::string show();

    };
}