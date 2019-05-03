#include"cat.cpp"

int main(){
    Cat jerry = Cat(4);
    jerry.meow();
    jerry.~Cat();
}