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
  std::vector <std::string> myVecTest = { "Abc", "def", "ghi"};
  
  std::cout << "Text?" << std::endl;
  std::getline(std::cin, mstr);

  myString myString1;
  myString1.setMyStringVar(mstr);
//  mstr = myString1.getMyStringVar();

  if(myString1.isIn(myVecTest) == true)
    std::cout<<"Test is in the vector"<<std::endl;
  else
    std::cerr<<"Test not in the vec" << std::endl;

//  mstr = myString1.getMyStringVar();

//  std::cout << "New string is : "<< mstr << std::endl;
  
  return 0;
}