
#include <iostream>
#include <cctype>

void    to_UpperCase(char *str)
{
    int i ;

    i = 0;
    while(str[i])
    {
        std::cout << (char)toupper(str[i]);
        i++;
    }
    
}
int main(int ac, char **av)
{
    int i;

    i = 1;
    if(ac >= 2)
    {
        while(i < ac)
        {    
            to_UpperCase(av[i]);
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";

}


