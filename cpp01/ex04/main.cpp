#include<iostream>
#include <fstream>
std::string check_line(std::string str,std::string old,std::string newstr)
{
    size_t pos  = 0;
    while (pos < str.length() )
    {
         std::cout << pos << " before\n";
        pos = str.find(old);
         if(pos > str.length())
            break;
            std::cout << pos << "after \n";
           str.erase(pos,old.length());
           str.insert(pos,newstr);
           pos += newstr.length();

    }
    return(str);
}
int main(int ac, char **av)
{
    std::fstream file1,file2;
    std::string data,str;
    std::string filename ,ext = ".replace";
    if(ac == 4)
    {
        filename = av[1] + ext ;
        file1.open(av[1], std::ios::in);
        file2.open(filename,std::ios::out| std::ios::trunc);
        while(getline(file1,data))
        {   
            str = check_line(data,av[2],av[3]);
            file2 << str << "\n";
        }


    }
}