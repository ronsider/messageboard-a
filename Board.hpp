#pragma once
#include <string>
#include<vector>
#include "Direction.hpp"
namespace ariel
{
    class Board
    {
    private:
    std::vector<std::vector<char>> vec;
    
    public:
    Board()//set to default size 10x10
    {
        std::vector<std::vector<char>>temp(10,std::vector<char>(10,'_'));
        vec=temp;
        
    }
    void post(int a,int b,Direction,std::string str);//
    std::string read(int a,int b,Direction,int c);//
    std::string show();//

    int rows_number();//get number of rows of the board
    int col_number();//get number of columns of the board

    };
}