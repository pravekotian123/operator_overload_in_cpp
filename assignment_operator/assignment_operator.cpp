#include <iostream>
using namespace std;

template <typename T, int s>
class array
{
    public:
    T arr[s];
    array(std::initializer_list<T> initList)
    {
        std::copy(initList.begin(), initList.end(), arr);
    }
    std::initializer_list<T> operator =(std::initializer_list<T> initList)
    {
        return initList;
    }
    T operator [](int n)
    {
       return this->arr[n];
       
    }
};
int main(void)
{
	array<int,5> arr={1,2,3,4,5};
	std::cout<<arr[4];
	return 0;
}
