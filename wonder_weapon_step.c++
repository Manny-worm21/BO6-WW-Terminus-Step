#include <iostream>

using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "Wonder Weapon Beamsmasher math step: " << endl;
    cout << endl;
    cout << "Enter x-value: ";
    cin >> x;
    cout << endl;

    cout << "Enter y-value: ";
    cin >> y;
    cout << endl;

    cout << "Enter z-value: ";
    cin >> z;
    cout << endl;
    
    int one = (2 * x) + 11;
    int two = ((2 * z) + y ) - 5;
    int three = ((y + z) - x);
    
    if(three < 0){
        three *= -1;
    }

    cout << "1: " << one << endl;
    cout << "2: " << two << endl;
    cout << "3: " << three << endl;

    return 0;
}
