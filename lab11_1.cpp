// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    int num;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    num = rand()%9 ;
    string y ;
    switch(num){
        
        case 0 : y = "You will get A in this 261102.";  break;
        case 1 : y = "You will get B+ in this 261102."; break;
        case 2 : y = "You will get B in this 261102.";  break;
        case 3 : y = "You will get C+ in this 261102."; break;
        case 4 : y = "You will get C in this 261102.";  break;
        case 5 : y = "You will get D+ in this 261102."; break;
        case 6 : y = "You will get D in this 261102.";  break;
        case 7 : y = "You will get F in this 261102.";  break;
        case 8 : y = "You will get W in this 261102.";  break;
    }
    cout << y ;
    return 0 ;
}