//MATRIX PROGRAM

#include <iostream>
#include <vector>

#include "commandmaker.h"
#include "commandselect.h"
#include "matrix.h"
#include "commandfunctions.h"
#include "displaymenu.h"

using namespace std;

int main()
{
    cout << "> WELCOME TO MATRIX PROGRAM:)" << endl;
    cout << "> ENTER YOUR COMMAND OR EXIT TO END THE PROGRAM:)" << endl;
    commandselect();

    return 0;
}