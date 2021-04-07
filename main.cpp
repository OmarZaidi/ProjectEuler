//
//  main.cpp
//  projectEuler
//
//  Created by Omar Zaidi on 4/6/21.
//  Copyright © 2021 Omar Zaidi. All rights reserved.
//

#include <iostream>
using namespace std;


int _3and5(){
    
    int sum = 0;

    for(int i = 3 ; i < 1000; i++){
    
        if(i%3==0||i%5==0){
        
        sum += i;
        
        }
    }
return sum;
        
}

int fibonacci(int num){
    
    int sum;
    int i = 1;
    
    while(i < num){
        
        
        
    }
    
    
}



int main() {
    
    cout << _3and5() << endl;
    
    fibonacci(4000000);
   
    return 0;
}
