#include <iostream>
#include <iomanip>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  color::hsv<double>  hv;

  // Do some initialization
  color::make::red( hv );

  // First check has to be OK
  std::cout << "true == color::check::integrity( hv ) == " << color::check::integrity( hv ) << std::endl;

  hv.set<0>( 5000 );

  // This one has to fail
  std::cout << "false color::check::integrity( hv ) == " << color::check::integrity( hv ) << std::endl;
 }