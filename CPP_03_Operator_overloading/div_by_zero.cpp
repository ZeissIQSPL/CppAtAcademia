#include<iostream>
#include<string>

int main(){
    std::cout<< "START" << std::endl;
    int r1 = 0;
    try{
        r1 = 10 / 0;
    }
    catch(std::exception const& e){
        std::cout << "Message: " << e.what() << std::endl;
    }
    std::cout<< r1 << std::endl;
    div_t  r2 = div(10, 0);
    std::cout<< r2.quot << ", " << r2.rem << std::endl;

}