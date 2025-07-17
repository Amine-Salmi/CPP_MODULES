#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base *generate(void) {
    srand(time(0));
    switch (rand() % 3)
    {
        case (0) :
            return new A();
            break;
        case (1) :
            return new B();
            break;
        case (2) :
            return new C();
            break;
        default :
            std::cout << "Error: random is faill " << std::endl;
            return (NULL);
    };
}

static void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "p: \"A\"" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "p: \"B\"" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "p: \"C\"" << std::endl;
    else
        std::cout << "p: \"Unknown\"" << std::endl;
}

static void identify(Base& p) {
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "p: \"A\"" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {}

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "p: \"B\"" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {}

    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "p: \"C\"" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e) {
        std::cout << "p: \"Unknown\"" << std::endl;
    }
}

int main() {
    std::cout << "Generating random class..." << std::endl;
    
    Base* ptr = generate();

    std::cout << "Identifying type from pointer: ";
    identify(ptr);

    std::cout << "Identifying type from reference: ";
    identify(*ptr);

    delete ptr;
    return 0;
}