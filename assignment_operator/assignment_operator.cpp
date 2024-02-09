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
    template <T> friend array operator+ (array &arr1,array &arr2);
};

template <typename T, int s,int t>
array<T,s+t> operator+ (array<T,s> &arr1,array<T,t> &arr2)
{
    
    array<T,s+t> arr4 = {0};
    for(int i=0;i<s;i++)
    {
        arr4.arr[i] = arr1.arr[i];
    }
    for(int i=0;i<t;i++)
    {
        arr4.arr[s+i] = arr2.arr[i];
    }

    return arr4;
}
int main(void)
{
    
	array<int,5> arr1={1,2,3,4,5};
    array<int,4> arr2={6,7,8,9};
	array<int,9> arr3=arr1+arr2;
    
    for(int i=0;i<9;i++)
    {
        cout<<arr3[i]<<" ";
    }
	return 0;
}
