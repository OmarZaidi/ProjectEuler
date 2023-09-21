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
    
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;  
}



int main() {
    
    cout << _3and5() << endl;
    
    fibonacci(4000000);
   
    return 0;
}
