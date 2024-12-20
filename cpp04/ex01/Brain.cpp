 #include "Brain.h"

 Brain::Brain()
 {
    std::cout << " Brain default constructor\n";
 }

 Brain::Brain(const Brain& other)
 {
    *this = other;
    std::cout << "Brain copy constructor called" << std::endl;
 }
Brain& Brain::operator=(const Brain& other)
{
    int i ;
    if(this != &other)
    {
        for(i = 0 ; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
    std::cout << "Brain Copy assignment operator called.\n";
    return(*this);
}

Brain ::~Brain()
{
     std::cout << " Brain destructor called\n";
}


