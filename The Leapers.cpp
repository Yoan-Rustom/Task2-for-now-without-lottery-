#include <iostream>
using namespace std;

int main() {
int Godina;
cin >> Godina;
if (Godina % 4 == 0 && Godina % 100 > 0|| Godina % 400 == 0){
    cout << "LEAP YEAR!!!" <<endl;


}


else {
    cout << "SEARCH FOR ANOTHER YEAR THIS IS NOT THE ONE!!!"<<endl;
}







}
