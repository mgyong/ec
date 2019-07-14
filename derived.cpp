#include<iostream> 
using namespace std; 

class Base 
{
    public: 
        virtual void fun() = 0;
        int getX(){return x;}

    private:
        int x=0;
}

class Derived: public Base{
    public:
        Derived(const int& input){y=input;}
        int fun(){return y;}
    private:
        int y=0;
}

int main(void){
    Derived d(10);
    cout << "fun" << string(d.fun()) << endl;
    return 0;

}