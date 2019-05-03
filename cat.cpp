#include<iostream>

class Cat
{
private:
    int a;
public:
    Cat(int data);
    ~Cat();
    void meow();
};

Cat::Cat(int data)
{
    a = data;
}

Cat::~Cat()
{
}

void Cat::meow(){
    for(int i=0;i<a;i++){
        std::cout<<"meow"<<std::endl;
    }
}