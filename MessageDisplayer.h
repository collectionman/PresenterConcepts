#ifndef MESSAGEDISPLAYER_H_INCLUDED
#define MESSAGEDISPLAYER_H_INCLUDED

#include "MessagePresenter.h"

/** View Controller **/
class MessageDisplayer : public DisplayerDelegate {
public:
    MessageDisplayer( void ) {
        m_presenter = new MessagePresenter( this, new Message( "Hello" ) ) ;
    }

    ~MessageDisplayer( void ) {
        if ( m_presenter ) {
            delete m_presenter ; // (retain cycle) m_presenter -> m_delegate
        }
    }

    virtual void display( void ) {
        m_presenter -> present() ;
    }
private:
    MessagePresenter* m_presenter ;
} ;

#endif // MESSAGEDISPLAYER_H_INCLUDED
