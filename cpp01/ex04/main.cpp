#include<iostream>
#include <fstream>
std::string check_line(std::string str,std::string sub)
{
    std::string tmp;
    int i = 0;
    int start = str.find(sub);
    int lenght = str.length();
    if(start != 0)
    {
            tmp = substr();
    }
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
        getline(file1,data);
        while(file1.eof())
        {   
            getline(file1,data);

            std::cout <<data;
            
        }


    }
}