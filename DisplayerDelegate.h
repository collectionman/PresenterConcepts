#ifndef DISPLAYERDELEGATE_H_INCLUDED
#define DISPLAYERDELEGATE_H_INCLUDED

/** Interface to delegate **/
class DisplayerDelegate {
public:
    virtual ~DisplayerDelegate( void ) {}
    virtual void display( void ) = 0 ;
} ;

#endif // DISPLAYERDELEGATE_H_INCLUDED
