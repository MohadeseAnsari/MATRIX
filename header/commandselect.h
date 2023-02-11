
#include <iostream>
#include <string>
#include <vector>

#include "commandmaker.h"
#include "matrix.h"
#include "commandfunctions.h"
#include "displaymenu.h"

void commandselect()
{
    string command;
    vector< string > commandline;

    while( true )
    {
        cout << "> ";

        getline( cin , command );

        if( command == "" )
            continue;

        if( command == "exit" )
            break;

        try
        {
            commandline = commandmaker( command );
        }
        catch( const exception &e )
        {
            display_menu( e.what() );
            continue;
        }
        
        if( commandline[0] == "add" )
            add( commandline );
        else if( commandline[0] == "is_diagonal" )
        {
            int temp = is_diagonal( commandline[1] );

            if( temp == 1 )
                cout << "YES" << endl;
            else if( temp == 0 )
                cout << "No" << endl;
        }
        else if( commandline[0] == "is_upper_triangular" )
        {
            int temp = is_upper_triangular( commandline[1] );

            if( temp == 1 )
                cout << "YES" << endl;
            else if( temp == 0 )
                cout << "No" << endl;
        }
        else if( commandline[0] == "is_lower_triangular" )
        {
            int temp = is_lower_triangular( commandline[1] );

            if( temp == 1 )
                cout << "YES" << endl;
            else if( temp == 0 )
                cout << "No" << endl;
        }
        else if( commandline[0] == "is_triangular" )
            is_triangular( commandline[1] );
        else if( commandline[0] == "is_identity" )
            is_identity( commandline[1] );
        else if( commandline[0] == "is_normal_symmetric" )
        {
            int temp = is_normal_symmetric( commandline[1] );

            if( temp == 1 )
                cout << "YES" << endl;
            else if( temp == 0 )
                cout << "No" << endl;
        }
        else if( commandline[0] == "is_skew_symmetric" )
        {
            int temp = is_skew_symmetric( commandline[1] );

            if( temp == 1 )
                cout << "YES" << endl;
            else if( temp == 0 )
                cout << "No" << endl;
        }
        else if( commandline[0] == "is_symmetric" )
            is_symmetric( commandline[1] );
        else if( commandline[0] == "inverse" )
            if( commandline.size() == 2 )
                inverse( commandline[1] );
            else
                inverse( commandline[1] , commandline[2] );
        else if( commandline[0] == "show" )
            show( commandline[1] );
        else if( commandline[0] == "remove" )
            remove( commandline[1] );
        else if( commandline[0] == "change" )
            change( commandline[1] , stoi(commandline[2]) , stoi(commandline[3]) , stof(commandline[4] ) );
        else
        {
            display_menu( commandline[0] );
            continue;
        }

        cin.ignore();

        cout << "> PLEASE ENTER...";
        getchar();
        system("clear || cls"); // clear screen page
    }
}