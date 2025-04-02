#include <iostream>

int globalSize = 2000;
int Counter();
void func(int);


int main()
{
    /*int a{ 123 };
    const int maxSize{ 1000 };
    func(a);*/
    for (int i{}; i < 5; i++)
        std::cout << Counter() << "\n";

}



void func(int b)
{
    int c;

    Counter();

}

int Comparator(int a, int b)
{
    int c = a - b;
    return c;
}

int Counter()
{
    static int count;
    count = 0;

    return ++count;
}
