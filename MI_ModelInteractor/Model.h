#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include "IModel.h"

class Model: public IModel {
public:
    Model( void ) : m_value( 0 ) {}

    virtual ~Model( void ) {}

    virtual int value( void ) {
        return m_value ;
    }
    virtual int add( int value ) {
        m_value += value ;
        return value ;
    }
private:
    Model( const Model& ) ;
    Model& operator = ( const Model& ) ;

    int m_value ;
} ;

#endif // MODEL_H_INCLUDED
