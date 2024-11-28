#include "Harl.hpp"


void Harl::debug(void)
{
    std::cout  << "Debug...\n";
}
void Harl::info(void)
{
    std::cout << "Info...\n"; 
}
void Harl::warning(void)
{
    std::cout << "Warning...\n"; 
}
void Harl::error(void)
{
    std::cout << "Error...\n";
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

    void(Harl::*tmp)() = NULL;
   
    
    if (level == "DEBUG")
        tmp = &Harl::debug;
    else if (level == "INFO")
        tmp = &Harl::info;
    else if (level == "WARNING")
        tmp = &Harl::warning;
    else if (level == "ERROR")
        tmp = &Harl::error;

    if(tmp)
        (this->*tmp)(); 

}