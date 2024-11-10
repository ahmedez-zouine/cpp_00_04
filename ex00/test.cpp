#include <iostream>

namespace myNameSpace
{
    int id;
    char *name;
    char fonctionalite;
    void sayHey()
    {
        std::cout << "Hello from Me" << std::endl;
    }
    void doSomething()
    {
	    std::cout << "i'm just student now i cant do sothing just study" << std::endl;
    }

} // namespalsce myNameSpace

int main(int argc, char **argv)
{
    std::cout << "Hello from Main function" << std::endl;
    myNameSpace::sayHey();
    myNameSpace::doSomething();
}
