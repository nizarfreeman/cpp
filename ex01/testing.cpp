#include <iostream>
using namespace std;

class base
{
    int x;
    public:
        base(int i){cout<<"Default base constructor called\n"; x = i;}
};

class derived: public base
{
    int y;
    public:
        derived(int i): base(i) {cout<<"Default derived constructor called\n"; y = i;}
};

int main(void)
{
    derived x(5);
    return (0);
}