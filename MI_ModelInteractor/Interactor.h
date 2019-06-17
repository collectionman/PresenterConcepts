#ifndef INTERACTOR_H_INCLUDED
#define INTERACTOR_H_INCLUDED

#include <iostream>

#include "IInteractor.h"
#include "IModel.h"

class Interactor: public IInteractor {
public:
    Interactor( IModel* model ) : model( model ) {}

    virtual ~Interactor( void ) {
        delete model ;
    }

    /** The event loop is the interaction with the user **/
    virtual void edit( void ) {
    event_loop:
        std::cout << "New value entered: " ;
        int input = 0 ;
        std::cin >> input ;
        if ( input != 0 ) {
            model -> add( input ) ;
            std::cout << "Value updated: " << model -> value() << std::endl ;
            goto event_loop ;
        }
    }

private:
    IModel* model ;

    Interactor( const Interactor& ) ;
    Interactor& operator = ( const Interactor& ) ;
} ;

#endif // INTERACTOR_H_INCLUDED
