#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED

/** Model **/
class Message {
public:
    Message( const char* content ) {
        int contentLength = sizeof( content ) / sizeof( char ) ;
        for ( int index = 0 ; index < contentLength ; index++ ) {
            m_content[ index ] = content[ index ] ;
        }
    }

    ~Message( void ) {}

    const char* asCString( void ) {
        return m_content ;
    }
private:
    enum { MAX_STRING_SIZE = 254 } ;

    char m_content[ MAX_STRING_SIZE + 1 ] ;
} ;

#endif // MESSAGE_H_INCLUDED
