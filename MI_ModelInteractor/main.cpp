#include <iostream>

#include "Model.h"
#include "Interactor.h"

/**
    Basic example of (MI) Model-Interactor Architecture:

    Event loop is encapsulated inside Interactor class

    Main Steps:
        1- Create model
        2- Create interactor with the model has parameter
        3- Edit model (interactor's role)
 **/

int main()
{
    IModel* model = new Model();
    IInteractor* interactor = new Interactor( model ) ;

    interactor -> edit() ; /** Event loop **/

    delete interactor ;
    /** model is already deleted inside Interactor's destructor **/

    return 0;
}
