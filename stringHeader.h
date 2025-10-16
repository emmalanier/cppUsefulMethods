/////////////////////////
//STRING METHODS HEADER//
/////////////////////////

//DEF//
#ifndef STRINGHEADER_H
#define STRINGHEADER_H

//INCLUDES//
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>

//CLASS DEFINITION//

class myString
{
  private :
    std::string myStringVar;

  public :
    myString();
    myString(const std::string &);

    std::string getMyStringVar();
    void setMyStringVar(const std::string &);

    bool isIn(const std::vector <std::string> &);
    std::string lowerToUpper();
    std::string upperToLower();

};

    
#endif//STRINGHEADER_H
  