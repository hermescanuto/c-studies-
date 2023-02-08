#include <iostream>


#define LOG(x) std::cout << x << std::endl;
 
 //Pointer
void IncrementOne(int* value){
    (*value)++;
}

//Reference
void AddOne(int& value){
    value++;
}

int main(){
    LOG("Start"); 
    int a=5;
    LOG(a);
    IncrementOne(&a);
    LOG(a);
    AddOne(a);
    LOG(a);
    LOG("End"); 
}
    