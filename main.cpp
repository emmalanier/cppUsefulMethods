////////
//MAIN//
////////

////////////
//INCLUDES//
////////////
#include <iostream>
#include <cstdlib>

#include "stringHeader.h"

////////////////
//MAIN PROGRAM//
////////////////

int main()
{
  std::string mstr;
  
  std::cout << "Text?" << std::endl;
  std::getline(std::cin, mstr);

  myString myString1(mstr);
  myString1.setMyStringVar(myString1.lowerToUpper());
  mstr = myString1.getMyStringVar();

//  mstr = myString1.getMyStringVar();

  std::cout << "New string is : "<< mstr << std::endl;
  
  return 0;
}