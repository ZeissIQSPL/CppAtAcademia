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

std::ostream& operator<<(std::ostream& out, const MyClass& obj){
    out <<"Wartosci mojego obiektu to: " << std::endl;
    out << "I: " << obj._i << std::endl;
    out << "J: " << obj._j << std::endl;

    return out;
}

std::istream& operator >> (std::istream& in, MyClass& obj){
    std::cout << "Prosze wprowadzic dane dla MyClass obiektu" <<std::endl;
    std::cout << "Wprowadz wartosc i" << std::endl;
    in >> obj._i;
    std::cout << "Wprowadz wartosc j" << std::endl;
    in >> obj._j;
    
    return in;
}

int main(){

    MyClass o1 = MyClass(1,2);
    MyClass o2(3,4);

    bool check = o1 > o2;
    if (check)
        std::cout << "Pierwszy" << std::endl;
    else
        std::cout << "Drugi" << std::endl;
    // std::cout<<o2;

    MyClass o3 = MyClass(0,0);

    std::cin >> o3;

    std::cout << o3;

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