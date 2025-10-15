////////////////////////////////
//DEFINITION OF STRING METHODS//
////////////////////////////////

//LINK//
#include "stringHeader.h"

////////////////////////////////
//CONSTRUCTORS, GETTER, SETTER//
////////////////////////////////
myString::myString()
{
  myStringVar = " ";
}

myString::myString(const std::string & str)
{
  myStringVar = str ;
}

std::string myString::getMyStringVar()
{
  return myStringVar ;
}

void myString::setMyStringVar(const std::string & str)
{
  myStringVar = str ;
}
