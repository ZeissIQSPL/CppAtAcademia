#include<iostream>
#include<string>

double divide(double i, double j){
    if(j == 0)
        throw std::string("Cannot divide by 0");

    if(i < 0){
        throw i;
    }
    if(j<0){
        throw j;
    }    

    //throw "nieoczekwiany wyjatek";

    return i/j;    
}

class Wyjatek{
    public:
    std::string _message = "Wystapil wyjatek klasy Wyjatek";
};

class PochodnyWyjatek: public Wyjatek{
    public:
    PochodnyWyjatek(){
        _message = "Wystapil wyjatek klasy PochodnyWyjatek";
    }

    PochodnyWyjatek(int i){
        if(i == 0)
            throw std::string("Wyjatek");
    }
};

class MyClass{
    public:
    MyClass(int i){
        if(i == 0)
            //throw std::string("Zero jako parametr");
            throw std::runtime_error("Niepoprawne wejscie");
    }
};

int main(){
    int result = 1 / 0;
    std::cout<< result << std::endl;
    
    // std::cout<<"Dzielenie"<<std::endl;

    // int i,j;

    // std::cout<<"Podaj pierwsza liczbe" <<std::endl;
    // std::cin>> i;

    // std::cout<<"Podaj druga liczbe" <<std::endl;
    // std::cin>> j;

    // double result = 0;
    // try{       
    //     result = divide(i,j);
    // }
    // catch(std::string& s){
    //    std::cout<<s;
    // }
    // catch(double e){
    //     std::cout << e << " jest mniejsze od 0";
    // }
    // catch(...){
    //     std::cout<<"Wystapil nieoczekiwany wyjatek";
    // }
    
    // std::cout<< result << std::endl;

    // for(int i = 0; i < 2; i++){
    //     try{
    //         if(i == 0)
    //             throw Wyjatek();

    //         if(i == 1)
    //             throw PochodnyWyjatek();    
    //     }
    //     catch(PochodnyWyjatek& w){
    //         std::cout << w._message << std::endl;
    //     }
    //     catch(Wyjatek& w){
    //         std::cout << w._message << std::endl;
    //     }
    // }
// PochodnyWyjatek x;
//     try{
//         x = PochodnyWyjatek(0);
//     }
//     catch(std::string& s){
//         std::cout<<s<<std::endl;
//     }
//     catch(...){
//         std::cout<<"sds"<<std::endl;
//     }

// std::cout<<x._message;
// try{
//     MyClass x = MyClass(0);

// }
// catch(std::runtime_error& ex){
//     std::cout<< "Wystapił błąd " << ex.what();
// }
// catch(std::exception& ex){
//     std::cout<< "Wystapił błąd " << ex.what();

// }

    return 0;

}