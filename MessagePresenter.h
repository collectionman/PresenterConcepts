#ifndef MESSAGEPRESENTER_H_INCLUDED
#define MESSAGEPRESENTER_H_INCLUDED

#include <iostream>
#include <memory>

#include "DisplayerDelegate.h"
#include "Message.h"

/** Presenter **/
class MessagePresenter {
public:
    MessagePresenter( DisplayerDelegate* delegate, Message* message )
        : m_delegate( delegate ), m_message( message ) {
    }
    ~MessagePresenter( void ) {
        delete m_delegate ; // (retain cycle) m_delegate -> m_presenter
        delete m_message ;
    }
    void present( void ) {
        std::cout << m_message -> asCString() << std::endl ;
    }
private:
    DisplayerDelegate* m_delegate ;
    Message* m_message ;
} ;

#endif // MESSAGEPRESENTER_H_INCLUDED
