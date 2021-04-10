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

bool isEven(int num){
    
    return (num%2==0);
    
}

int fibonacci(int num1, int num2, int max){
    
    int temp=0, sum=0;
    
    do {
        if (num2 % 2 == 0) {
            sum = sum + num2;
        }
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
        
    } while (num2 < 4000000);
    
    return sum;
}
        

    
    




int main() {
    
    cout << _3and5() << endl;
    
    cout << fibonacci(0,1,4000000) << endl;
   
    return 0;
}
