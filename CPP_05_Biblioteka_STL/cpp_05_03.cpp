#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <map>

void drukuj(std::queue<int> kolejka){
    while (!kolejka.empty())
    {
        std::cout << kolejka.front() << " |";
        kolejka.pop();
    }
    
    std::cout << std::endl;

}

void drukuj(std::priority_queue<int> kolejka){
    while (!kolejka.empty())
    {
        std::cout << kolejka.top() << " |";
        kolejka.pop();
    }
    
    std::cout << std::endl;

}

void drukuj(std::stack<int> stos){
    while (!stos.empty())
    {
        std::cout << stos.top() << " |";
        stos.pop();
    }
    
    std::cout << std::endl;

}

void drukuj(std::set<int> zestaw){
    for(auto it = zestaw.begin(); it != zestaw.end(); it++){
        std::cout<< *it << " |";
    }

    std::cout<<std::endl;
}

void drukuj(const std::multiset<int>& zestaw){
    for(auto it = zestaw.begin(); it != zestaw.end(); it++){
        std::cout<< *it << " |";
    }

    std::cout<<std::endl;
}

void drukuj(const std::map<int,int>& mapa){
    for(auto it = mapa.begin(); it != mapa.end(); it++){
        std::cout << it->first << ": " << it->second << std::endl;
    }
}

void drukuj(const std::multimap<int,int>& mapa){
    for(auto it = mapa.begin(); it != mapa.end(); it++){
        std::cout << it->first << "-" << it->second << std::endl;
    }
}

int main(){

    std::cout << "cpp 05 03 " << std::endl;

    std::queue<int> kolejka1;
    std::queue<int> kolejka2;

    kolejka1.push(1);
    kolejka1.push(1);
    kolejka1.push(3);
    kolejka1.push(4);

    drukuj(kolejka1);
    drukuj(kolejka1);

    std::cout << kolejka1.size() << std::endl;
    std::cout << kolejka2.size() << std::endl;

    kolejka2.swap(kolejka1);

    
    std::cout << kolejka1.size() << std::endl;
    std::cout << kolejka2.size() << std::endl;

    std::cout<< kolejka2.back() << std::endl;

    std::priority_queue<int> kolejka_priorytetowa;

    kolejka_priorytetowa.push(1);
    kolejka_priorytetowa.push(1);
    kolejka_priorytetowa.push(3);
    kolejka_priorytetowa.push(4);

    drukuj(kolejka_priorytetowa);

    std::stack<int> stos;

    stos.push(1);
    stos.push(1);
    stos.push(3);
    stos.push(4);

    drukuj(stos);


    std::set<int> zestaw;

    zestaw.insert(2);
    zestaw.insert(2);
    zestaw.insert(3);
    zestaw.insert(4);

    drukuj(zestaw);

    std::cout << zestaw.count(2) << std::endl;

    // std::cout<< zestaw.lower_bound(3) << std::endl;

    std::multiset<int> multi_zestaw;

    multi_zestaw.insert(2);
    multi_zestaw.insert(2);
    multi_zestaw.insert(3);
    multi_zestaw.insert(4);

    drukuj(multi_zestaw);


    std::map<int,int> mapa;

    mapa.insert(std::pair<int,int>(1,2));
    mapa.insert(std::pair<int,int>(1,2));
    mapa.insert(std::pair<int,int>(2,3));


    drukuj(mapa);

    std::multimap<int, int> multi_mapa;

    multi_mapa.insert(std::pair<int,int>(1,2));
    multi_mapa.insert(std::pair<int,int>(1,2));
    multi_mapa.insert(std::pair<int,int>(2,3));

    drukuj(multi_mapa);
}