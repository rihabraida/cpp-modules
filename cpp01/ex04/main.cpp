#include<iostream>
#include <fstream>
std::string check_line(std::string str,std::string old,std::string newstr)
{
    size_t pos  = 0;
    while (pos < str.length() )
    {
        pos = str.find(old);
        if(pos > str.length())
            break;
        str.erase(pos,old.length());
        str.insert(pos,newstr);
        pos += newstr.length();

    }
    return(str);
}
int main(int ac, char **av)
{

    std::string data,str,tmp;
    tmp = ".replace";
    if(ac == 4)
    {
        if (std::string(av[2]).empty() || std::string(av[3]).empty()) 
        {
            std::cerr << "the strings can't be empty" << std::endl;
            return 1;
        }
        std::string filename = std::string(av[1])  + ".replace" ;

        std::ifstream file1(av[1]);
        if(!file1)
        {    
            std::cerr << "Failed to open the file" << std::endl;
            return(1);
        }
        std::ofstream file2(filename.c_str());
        if(!file2)
        {    
            std::cerr << "Failed to open the file" << std::endl;
            return(1);
        }
        while(getline(file1,data))
        {   
            str = check_line(data,av[2],av[3]);
            file2 << str << std::endl; ;
        }
    }
    else 
    {
        std::cerr << "invalid number of parameters" << std::endl;
        return 1;
    }
    return(0);
}