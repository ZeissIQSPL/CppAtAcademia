#include <iostream>
#include <list>
#include <deque>
#include <array>
#include <vector>

void drukuj(const std::list<int>& lista){
    for(auto it = lista.begin(); it != lista.end(); ++it){
        std::cout<< *it << " | ";
    }

    std::cout << std::endl;
}

void drukuj(const std::deque<int>& kolejka){

    for(auto it = kolejka.begin(); it != kolejka.end(); ++it){
        std::cout<< *it << " | ";
    }

    std::cout << std::endl;
}

void drukuj(const std::array<int, 5>& tablica){
    for(int i=0;  i < tablica.size(); i++){
        std::cout<< tablica[i] << " ," ;
    }

    std::cout<<std::endl;
}

template <typename T> 
void wypisz(std::vector <T> wektor){
    for(int i=0; i!=wektor.size(); ++i){
         std::cout<< wektor[i] << " ," ;
    }
}

int main(){
    std::cout<<"CPP_05_02" <<std::endl;

    // std::vector<int> v {5,4,3,2,1};
    // std::cout << "Vec.size(): " << v.size() << std::endl;
    // v.push_back(7);
    // std::cout << "Vec.size(): " << v.size() << std::endl;
    // wypisz(v);

    // std::list<int> lista {5,4,3,2,1,1,1};

    // drukuj(lista);

    // lista.push_back(6);

    // drukuj(lista);

    // lista.push_front(1);

    // drukuj(lista);

    // lista.pop_back();

    // drukuj(lista);


    // lista.pop_front();

    // drukuj(lista);

    // lista.remove(1);

    // drukuj(lista);

    // auto it = lista.begin();

    // std::advance(it,2);

    // lista.insert(it, 9);

    // drukuj(lista);

    std::deque<int> kolejka {1,2,3,4,5,6};


    drukuj(kolejka);

    kolejka.push_back(1);

    drukuj(kolejka);

    kolejka.pop_front();

    drukuj(kolejka);

    // std::array<int, 5> tablica {5,4,3,2,1};

    // std::cout<<tablica.at(1) <<std::endl;
    // std::cout<< tablica[1] <<std::endl;
    // std::cout<< std::get<1>(tablica) <<std::endl;


    // drukuj(tablica);

    // tablica.fill(1);

    // drukuj(tablica);

}