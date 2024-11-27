#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout << name << "Debug...\n";
}
void Harl::info(void)
{
    std::cout << name << "Info...\n"; 
}
void Harl::warning(void)
{
    std::cout << name << "Warning...\n"; 
}
void Harl::error(void)
{
    std::cout << name << "Error...\n";
}

std::string     Lowercase(std::string level)
{
    int i = 0;
    while(level[i])
    {
        level[i] = (char)tolower(level[i]);
        i++;
    }
    return(level);
}
void Harl::complain( std::string level )
{
    (void)(*tmp)();
    
    if(level = "Error" || level = "DEBUG"  )
    {  
        tmp =Lowercase(level);
        tmp();
    }

}