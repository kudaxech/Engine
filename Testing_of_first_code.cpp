#include "DataStorage.h"
#include <iostream>


int main(){

    DataStorage bank;

    bank.createObject("gun");
    bank.createObject("11111");
    bank.createObject("22222");

    if(bank.deleteObject("gun")){

        std::cout << "delete successful"<< std::endl;

    }else{std::cout << "error"<< std::endl;}
    
    
    GameObject test_object;
    test_object.addComponent<TestType>();

    TestType* test_comp = test_object.getComponent<TestType>();
    std::cout << test_comp->test_string << std::endl;

    return 0;
}
