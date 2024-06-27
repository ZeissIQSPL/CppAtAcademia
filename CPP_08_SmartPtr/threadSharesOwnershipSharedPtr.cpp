#include <iostream>
#include <memory>
#include <thread>

using namespace std::literals::chrono_literals;

struct MyInt {
  int val{2017};
  ~MyInt() {
    std::cout << "Good Bye" << std::endl;
  }
};

void showNumber(std::shared_ptr<MyInt> myInt) {    
    std::cout << myInt->val << std::endl;
}

void threadCreator() {
    auto sharedPtr = std::make_shared<MyInt>();    
    
    std::thread t1(showNumber, sharedPtr);
    std::thread t2(showNumber, sharedPtr);
    
    t1.detach();
    t2.detach();
};

void func(std::unique_ptr<int> myInt) {};

int main() {
    
    std::cout << std::endl;
    
    threadCreator();
    std::this_thread::sleep_for(1s);
    
    std::cout << std::endl;
    
    
    //transfer of the ownership to the function
    std::unique_ptr<int> uniq = std::make_unique<int>(5);
    func(std::move(uniq));
    std::cout << uniq.get() << std::endl;

}

