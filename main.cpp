#include <iostream>

namespace space1
{
    void greeting();
}

namespace space2
{
    void greetings();
}

void greeting();

int main()
{
    space1::greeting();
    space2::greetings();
    greeting();

    return 0;
}

namespace space1
{
    void greeting()
    {
        std::cout << "Hello from namespace space1.\n";
    }
}
namespace space2
{
    void greeting()
    {
        std::cout << "Greetings from namespace space2.\n";
    }
    void greetings()
    {
        greeting();
        ::greeting();
    }
}
void greeting()
{
    std::cout << "Global Hello!\n";
}