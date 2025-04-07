#include <iostream>

int RandRange(int begin, int end)
{
    return begin + rand() % (end - begin + 1);
}


int main()
{
    srand(time(nullptr));

    const int size{ 10 };
    int array[size];

    for (int i{}; i < size; i++)
        array[i] = rand() % 100;

    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";

    //int max{ array[0] };
    int max_index{ 0 };
    int min_index{ 0 };

    for (int i{ 1 }; i < size; i++)
    {
        //if (array[max_index] < array[i])
        if(array[min_index] > array[i])
        {
            //max = array[i];
            //max_index = i;
            min_index = i;
        }
    }

    int summa{};
    for (int i{}; i < size; i++)
        //summa = summa + array[i];
        summa += array[i];

    std::cout << "\n";
    for (int i{}; i < size; i++)
        if (array[i] % 2 == 0)
            std::cout << array[i] << " ";

    for(int i{}; i < size; i += 2)
        std::cout << array[i] << " ";



}