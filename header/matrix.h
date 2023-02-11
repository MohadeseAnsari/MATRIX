#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class matrix
{
    public:
    matrix( std::string , int , int );
    ~matrix();
    std::string name;
    float **u;
    int row, coloumn;
};
#endif