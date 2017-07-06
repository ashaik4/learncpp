//
//  main.cpp
//  bitwise-tutorial
//
//  Created by Arshad Shaik on 7/5/17.
//  Copyright © 2017 Arshad Shaik. All rights reserved.
//

#include <iostream>




bool isSet(char first_argument, char position){
    
    return first_argument & position;
}

char setBit(char first_argument, char position){

    first_argument = first_argument | position;
    return first_argument;
    
}

char unsetBit(char first_argument, char position){

    first_argument = first_argument & ~(position);
    return first_argument;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    // Define 8 separate flags (these can represent whatever you want)
    // Note: in C++11, better to use "uint8_t" instead of "unsigned char"
    const unsigned char option1 = 0x01; // hex for 0000 0001
    const unsigned char option2 = 0x02; // hex for 0000 0010
    const unsigned char option3 = 0x04; // hex for 0000 0100
    const unsigned char option4 = 0x08; // hex for 0000 1000
    const unsigned char option5 = 0x10; // hex for 0001 0000
    const unsigned char option6 = 0x20; // hex for 0010 0000
    const unsigned char option7 = 0x40; // hex for 0100 0000
    const unsigned char option8 = 0x80; // hex for 1000 0000
    
    // byte-size value to hold some combination of the above 8 options
    unsigned char myflags = 0b0111; // all flags/options turned off to start
    
    std::cout << "Query if 4th bit of 15(decimal) is set or not:\n"<< isSet('0b1111', option3);
    return 0;
}
