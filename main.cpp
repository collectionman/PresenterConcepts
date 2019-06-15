#include <iostream>

#include "MessageDisplayer.h"

int main()
{
    MessageDisplayer* displayer = new MessageDisplayer() ;

    displayer -> display() ;

    delete displayer ;

    return 0 ;
}
