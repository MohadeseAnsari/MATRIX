
#include <string>
#include <iostream>

void display_menu( std::string ex )
{
    std::cerr << ex << std::endl
         << "********************************************" << std::endl
         << "> ***-Command list :" << std::endl
         << "> ***-add" << std::endl
         << "> ***-is_diagonal" << std::endl
         << "> ***-is_upper_triangular" << std::endl
         << "> ***-is_lower_triangular" << std::endl
         << "> ***-is_triangular" << std::endl
         << "> ***-is_identity" << std::endl
         << "> ***-is_normal_symmetric" << std::endl
         << "> ***-is_skew_symmetric" << std::endl
         << "> ***-is_symmetric" << std::endl
         << "> ***-inverse" << std::endl
         << "> ***-show" << std::endl
         << "> ***-remove" << std::endl
         << "> ***-change" << std::endl
         << "> ***-exit" << std::endl
         << "********************************************" << std::endl;
}
