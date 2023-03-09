#include <iostream>

class MyClass{
public:
    MyClass(int i, int j): _i(i), _j(j){

    }

    void operator + (){
        _i = _i + 2;
        _j++;

        print();
    }

    void operator - (){
        std::cout<<"Tu nie robie nic"<<std::endl;
    }

    MyClass& operator ++(){
        ++_i;
        ++_j;

        print();
        return *this;
    }

    MyClass operator ++(int){
        MyClass temp = *this;

        temp._i = _i + 5;
        temp._j = _j + 5;

        print();

        return temp;
    }


    MyClass operator +(const MyClass& object2){
        return MyClass(this->_i + object2._i, this->_j + object2._j);
    }


    void print(){
        std::cout<<"i " <<_i << std::endl<< "j " << _j <<std::endl;
    }

    bool operator > (const MyClass& object2){
        return this->_i > object2._i && this->_j > object2._j;
    }

    int _i = 0;
    int _j = 0;
};

int main(){

    MyClass o1 = MyClass(1,2);
    MyClass o2(3,4);

    bool check = o1 > o2;

    std::cout<<check;

    // std::cout<<"O3"<<std::endl;
    // auto o3 = o1 + o2;

    // o3.print();

    // +o1;
    // +o1;

    // -o1;

    // ++o1;

    // auto x = o1++;

    // std::cout<<"Nowy"<<std::endl;
    // x.print();
}