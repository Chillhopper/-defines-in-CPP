#include <iostream>
#define GIGGOM "Tiny Gillus"

void someFunc();
void Gillinator();

int main()
{
/*Gillinator check will fail. Even if GIGGOM is defined in main.cpp, #define GIGGOM is only valid from #define to end of .cpp
  this means that the defines in the func file ends with the file and wont be applied in main.cpp
 */
Gillinator();


 #ifdef GIGGOM
    std::cout<<"GIGGOM has been defined"<<'\n'<<std::endl;
    someFunc();
 #endif // GIGGOM

 //if GOOGLY IS NOT DEFINED:
 #ifndef GOOGLY
    std::cout<<"GOOGLY IS NOT DEFINED YAY"<<'\n'<<std::endl;
 #endif // GOOGLY

 //no print block #if 0
 #if 0
 std::cout<<"none of these getting printed";
 #endif // 0


    return 0;
}
