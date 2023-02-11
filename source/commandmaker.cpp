
#include <iostream>
#include <string>
#include <vector>

#include "commandmaker.h"

using namespace std;

vector< string > commandmaker( string com )
{
    vector< string > tc; // token command
    string t = "" ;
    for( unsigned int i = 0 ; i < com.size() ; i++ )
    {
        if( com[i] == ' ' )
        {
            tc.push_back( t );
            t = "";
            continue;
        }
        t += com[i];
    }
    if( t != "" )
        tc.push_back( t );
    if( tc.size() > 6 )
        throw invalid_argument( "> #err: maximum command size = 6" );
    if( tc.size() < 2 )
        throw invalid_argument( "> #err: minumum command size = 2" );
    return tc;
}