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
