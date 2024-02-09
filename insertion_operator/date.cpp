#include<iostream>

class Date{
private :
    int day;
    int month;
    int year;
public:
    Date(int day = 0 ,int month = 0,int year = 0)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    
    void print()
    {
        std::cout<<this->day<<"-"<<this->month<<"-"<<this->year<<std::endl;
    }
    friend void operator<<(Date  &d1,Date const &d2);
};
void operator<<(Date  &d1,Date const &d2)
{
    d1=d2;
}

int main(void)
{
    Date base_date(9,2,2024);
    Date derived_one;
     derived_one << base_date;
     derived_one.print();
}