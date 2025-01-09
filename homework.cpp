#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    std::vector<int> pi = {3, 1, 4, 1, 5, 9};
    std::vector<double> superfragilisticexpiallidosis = {1.23, 4.56, 7.89, 9.10, 12.07};
    std::vector<std::string> pneumonoultramicroscopicsilicovolcanoconiosis = {"hi", "hola", "bonjour", "ciao", "hallo"};

   std::cout << pi[0] << " " << pi[2] << " " << pi [4] << std::endl;

   std::displayList(std::vector<pneumonoultramicroscopicsilicovolcanoconiosis>);
   std::vector<pneumonoultramicroscopicsilicovolcanoconiosis>.push_back(kim);
   std::displayList(std::vector<pneumonoultramicroscopicsilicovolcanoconiosis>);
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}