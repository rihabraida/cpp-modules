#ifndef HumanB_H
#define HumanB_H
#include <iostream>
#include <string>

class Harl{

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    public:
        void complain( std::string level );
};

#endif 