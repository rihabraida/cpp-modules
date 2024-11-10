
#include <iostream>

void    to_UpperCase(char *str)
{
    int i ;
    char tmp;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 122)
        {    
            tmp = str[i] - 32;
            std::cout << tmp;
        }
        else
            std::cout << str[i];
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
        std::cout << "PLEASE ENTER A PARAMETER TO THE PROGRAM!!!\n";

}


