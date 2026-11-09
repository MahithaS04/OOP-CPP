#include <iostream>
#include <vector>
#include <concepts>
#include <ranges>

using namespace std;

template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template <Numeric T>
std::vector<T> processData(const std::vector<T>& data)
{
    std::vector<T> result;
    auto pipeline = data 
        | std::views::filter([](T value) { 
            return value > 0; 
        }) 
        | std::views::transform([](T value) { 
            return value * 2; 
        });

    for (T value : pipeline)
    {
        result.push_back(value);
    }
    return result;
}

int main()
{
    vector<int> data = {-5, 10, 20, -3, 15, 30};
    vector<int> result = processData(data);

    cout << "Original Data: ";
    for (int value : data)
    {
        cout << value << " ";
    }
    cout << "\nProcessed Data: ";
    for (int value : result)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
