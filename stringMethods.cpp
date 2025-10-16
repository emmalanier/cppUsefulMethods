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

//////////////////////////////////////////
//TO CHECK IF A STRING IS IN A CONTAINER//
//////////////////////////////////////////
bool myString::isIn(const std::vector <std::string> & vec)
{
  bool results = false;

  for(int i=0; i<vec.size(); i++)
    {
      if(myStringVar==vec[i])
        {
          results = true;
          break;
        }
    }

  return results ;

}

////////////////////////
//STRING MODIFICATIONS//
////////////////////////
std::string myString::lowerToUpper()
{
  std::string results;
  int chainSize = myStringVar.length();

  for (int i=0; i<chainSize; i ++)
    {
      results += std::toupper(myStringVar[i]);
    }

  return results;
}
