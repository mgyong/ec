#include <iostream>
using namespace std;

class TextBlock { 

    public:
    TextBlock(const string* a): pText(*a){}

    const char& operator[](std::size_t position) const { 
        std::cout << "const" << endl;        
        return pText[position]; 
    }
    char& operator[](std::size_t position) { 
        std::cout << "not const" << endl;                
        return pText[position]; 
    }

    private: string pText;
};


int main()
{
    string ming = "Hello";
    //TextBlock tb(ming);
    TextBlock tb(&ming);
    std::cout << tb[0] << endl;

    //string ming1 = "World";
    //const TextBlock ctb(ming1);
    //std::cout << ctb[0] << endl;

    return 0;
}

