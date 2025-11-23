#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name)
        {
            this->name = name;
        };
        ~Zombie()
        {
            std::cout<<this->name<<": destoryed"<<std::endl;
        };

        std::string get_()
        {
            return (this->name);
        };
        void announce(void)
        {
            std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
        };
};

Zombie *newZombie(std::string name)
{
    Zombie *z = new Zombie(name);
    return z;
}

void randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}

int main(int argc, char const *argv[])
{
    Zombie *z1 = newZombie("nizar");
    z1->announce();
    delete(z1);
    Zombie *z2 = newZombie("nizarr");
    z2->announce();
    delete(z2);  
    Zombie *z3 = newZombie("nizarrr");
    z3->announce();
    delete(z3);


    std::cout<<std::endl;


    randomChump("mizar");
    randomChump("mizarr");
    randomChump("mizarrr");
    return 0;
}