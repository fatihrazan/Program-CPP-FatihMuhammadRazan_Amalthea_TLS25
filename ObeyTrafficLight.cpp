#include <bits/stdc++.h>
using namespace std;

int main(){
    int light;
    cout << "Input the Seconds: ";
    cin >> light;
    light -= 45;
    if (light < 0){
        cout << "Light error!" << endl;
    }
    else if (light % 103 <= 2){
        cout << "Yellow Light" << endl;
    }
    else if(light % 103 <= 82){
        cout << "Red Light" << endl;
    }
    else{
        cout << "Green Light" << endl;
    }
}