#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

// struct Append
// {
//     void operator()(char n) { 
//         if (isdigit(n)){
//             std::string mystr(1,n);
//             stringWithDigits.append(mystr); 
//         }
//     }
//     std::string stringWithDigits{};
// };

std::string stringWithDigits{};
void myfunction(char i){
    if (isdigit(i)){
        std::string mystr(1,i);
        stringWithDigits.append(mystr); 
    }
}


std::string only_numbers (std::string str){
    for_each(str.begin(), str.end(), myfunction);
    return stringWithDigits;
    
}

int main(){
    std::cout<<only_numbers("123 happy 572 o5ther45");
}