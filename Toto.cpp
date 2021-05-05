#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //seed random number generator
    int compsHand = rand() % 3; // random number between 10 and 99
    cout << " Your options are scissors with 0, rock with 1 and paper with 2." <<endl;
    int scissors = 0;
    int rock = 1;
    int paper = 2;
    int myHand;
    cin >> myHand;


    if (myHand == compsHand){
        cout <<"You didn't beat me but you didn' t loose." <<endl;

    }
    else if(myHand == 1 && compsHand == 0 || myHand == 0 && compsHand == 2 || myHand == 2 && compsHand == 1){
        cout << " YOU WIN!!!"<<endl;
    }
    else{
        cout << "YOU LOOSE!!!"<< endl;
    }
}
