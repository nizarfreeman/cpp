#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie()
        {
        };
        ~Zombie()
        {
            std::cout<<this->name<<": destroyed"<<std::endl;
        }
        void set_(std::string name)
        {
            this->name = name;
        }
        std::string get_(void)
        {
            return (this->name);
        };

        void announce(void)
        {
            std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
        };
};

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 1)
    {
        std::cout<<"Zombie horde cannot contain less that 1 zombie."<<std::endl;
        return (NULL);
    }
    Zombie *hord = new Zombie[N];
    if (!hord)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        hord[i].set_(name);
    }
    return (hord);
}

int main(int argc, char const *argv[])
{
    Zombie *hord = zombieHorde(10, "waaa");
    if (!hord)
        return (1);
    for (int i = 0; i < 10; i++)
    {
        hord[i].announce();
    }
    delete[] hord;
    return 0;
}
