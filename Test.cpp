#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
#include <vector>
#include <string>
using namespace ariel;

Board b;//set a 10X10 board with '_' as initial values

TEST_CASE("Check board dimensions")
{
    CHECK(b.rows_number()==10);
    CHECK(b.col_number()==10);
    CHECK_FALSE(b.rows_number()==9);
    CHECK_FALSE(b.col_number()==9);
    CHECK_FALSE(b.rows_number()==12);
    CHECK_FALSE(b.col_number()==13);
    CHECK_FALSE(b.rows_number()==17);
    CHECK_FALSE(b.col_number()==15);
    CHECK_FALSE(b.rows_number()==19);
    CHECK_FALSE(b.col_number()==121);
}
TEST_CASE("check board dimensions are not negative")
{
   CHECK_FALSE(b.rows_number()==-192); 
   CHECK_FALSE(b.rows_number()==-22); 
   CHECK_FALSE(b.rows_number()==-31); 
   CHECK_FALSE(b.rows_number()==-22); 
   CHECK_FALSE(b.rows_number()==-1312); 
   CHECK_FALSE(b.rows_number()==-122); 
   CHECK_FALSE(b.rows_number()==-2); 
   CHECK_FALSE(b.rows_number()==-13); 
   CHECK_FALSE(b.rows_number()==-99); 
   CHECK_FALSE(b.rows_number()==-11); 
   CHECK(b.rows_number()==-98);
   CHECK(b.rows_number()==-89);
   CHECK(b.rows_number()==-18);
}
