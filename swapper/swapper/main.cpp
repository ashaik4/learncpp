//
//  main.cpp
//  swapper
//
//  Created by Arshad Shaik on 7/6/17.
//  Copyright © 2017 Arshad Shaik. All rights reserved.
//

#include <iostream>

void swap(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int first = 0;
    int second = 0;
    
    std::cout << "Enter an integer:\n";
    std::cin>> first;
    std::cout<<"Enter a larger integer:\n";
    std::cin>> second;
    
    if (first > second){
        /*
        int temp = 0;
        temp = first;
        first = second;
        second = temp;
         */
        swap(first, second);
    }
    std::cout<< "Smaller value is: "<< first<<std::endl;
    std::cout<< "Larger value is:  "<< second<< std::endl;
    
    
    return 0;
}
