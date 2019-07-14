#include<iostream> 
using namespace std; 

class Base 
{
    public: 
        virtual void fun() = 0;
        int getX(){
            return x; 
        };

    private:
        int x;
};

class Derived: public Base{
    public:
        Derived(const int& input){y=input;}
        void fun(){cout << "ming";};
    private:
        int y;
};

int main(void){
    Derived d(10);
    d.fun();
    return 0;

};