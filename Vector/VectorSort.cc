#include <algorithm>
#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); ++i)
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}


void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << my_vector.empty() << std::endl
              << std::endl;
}

bool sort_ascending(const int i, const int j) // int, becuase vector contains ints
{
    return i < j;
}

bool sort_descending(const int i, const int j)
{
    return i > j;
}

bool sort_example(const int i, const int j)
{
    return i % 2 == 0 && j % 2 != 0; // some random condition- just to show that you can define what you need
}

int main()
{
    auto my_vector = std::vector<int>{-1, 20, -33, 14, 35};
    print_vector(my_vector);
    print_vector_info(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_ascending);
    // by default is soft ascending
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_descending);
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_example);
    print_vector(my_vector);

    return 0;
}
