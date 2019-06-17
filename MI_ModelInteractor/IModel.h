#ifndef IMODEL_H_INCLUDED
#define IMODEL_H_INCLUDED

class IModel {
public:
    virtual ~IModel( void ) {}
    virtual int add( int value ) = 0 ;
    virtual int value( void ) = 0 ;
} ;

#endif // IMODEL_H_INCLUDED
