#include <iostream>
//#define GIGGOM

void someFunc(){

    std::cout << "some random string for some random function" << '\n' << std::endl;
}

void Gillinator(){
#ifdef GIGGOM
    std::cout << "Gillinator1 is working!!!" << '\n' << std::endl;
#endif //GIGGOM

#ifndef GIGGOM
    std::cout << "Gillinator is NOT working (GIGGOM isnt defined)" << '\n' << std::endl;
#endif // GIGGOM is not defined
}
