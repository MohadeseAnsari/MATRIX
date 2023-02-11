#include "matrix.h"

matrix::matrix( std::string n , int r , int c )
{
    name = n;
    row = r;
    coloumn = c;
    u = new float *[row];
    for( unsigned int i = 0 ; i < row ; i++ )
        u[i] = new float[coloumn];
}

matrix::~matrix()
{
    for( unsigned int i = 0 ; i < row ; ++i )
        delete[] u[i];
    delete[] u;
}