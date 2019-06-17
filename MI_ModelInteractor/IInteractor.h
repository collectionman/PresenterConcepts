#ifndef IINTERACTOR_H_INCLUDED
#define IINTERACTOR_H_INCLUDED

class IInteractor {
public:
    virtual ~IInteractor( void ) {}
    virtual void edit( void ) = 0 ;
} ;

#endif // IINTERACTOR_H_INCLUDED
