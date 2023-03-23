#include<iostream>
#include<string>

class Wyjatek{
public:
    std::string _wiadomosc = "Wystapił Wyjatek";    
};

int dzielenie(int liczba1, int liczba2){

    if(liczba1 == 1){
        throw 1;
    }

    if(liczba2 == 0){
        throw std::string("nie dziel przez 0");
    }
    return liczba1/liczba2;
}

int main(){
    // std::cout<<"Witaj na kolejnych zajeciach"<<std::endl;

    try{
        // std::cout<<"Blok niebezpiecznego kodu" <<std::endl;
        // throw std::string("blad");
        // int liczba1, liczba2;
        // std::cin >> liczba1;
        // std::cin >> liczba2;

        throw Wyjatek();
        // dzielenie(liczba1, liczba2);

        std::cout<<"kontynuuje prace" <<std::endl;
    }
    catch(std::string s){
        std::cout<<"Znaleziono nieoczekiwane zachowane" <<std::endl;
        std::cout<<"kod bledu " << s << std::endl;
    }
    catch(int i){
            std::cout<<"Wprowadzono kod " << i <<std::endl;
    }
    catch(const Wyjatek& w){
        std::cout<<w._wiadomosc;
    }

    std::cout<<"Koniec programu"<<std::endl;

    return 0;
}