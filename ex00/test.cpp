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
} // namespalsce myNameSpace

int main(int argc, char **argv)
{
    std::cout << "Hello from Main function" << std::endl;
    myNameSpace::sayHey;
}
