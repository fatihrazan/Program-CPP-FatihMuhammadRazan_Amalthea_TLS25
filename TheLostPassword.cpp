#include <bits/stdc++.h>
#include <cctype>
using namespace std;


string generatePassword(string word){
    char hurufPertama = word[0];
    int kode = int(hurufPertama);
    for (int i=0; i< word.length(); i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'||word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            word.erase(i,1);
            i--;
        }
    }
    int center = word.length()/2 -1;
    string password;
    for (int i = word.length()-1; i >= 0; i--){
        if (i == center){
            password += to_string(kode);
        }
        password += word[i];
    }

    return password;
}

string solvePassword(string pass){
    string kode;
    for (int i=0; i<pass.length(); i++){
        if (pass[i] >= 48 && pass[i] <= 57){
            kode += pass[i];
            pass.erase(i,1);
            i--;
        }
    }
    int huruf = stoi(kode);
    string kata;
    for (int i=pass.length()-1; i>=0; i--){
        kata += pass[i];
    }
    if (char(huruf) == kata[0]){
        return kata;
    }else{
        return char(huruf) + kata;
    }
}

int main(){
    int option;
    string word;
    cout <<"--------PASSWORD MASTER---------" << endl;
    cout << "1. Generate Password" << endl;
    cout << "2. Solve Password" << endl;
    cout << "Choose the option (1/2): ";
    cin >> option;
    if (option == 1){
        cout << "Input the word: ";
        cin >> word;
        cout << "Your Password: "<< generatePassword(word) << endl;
    }
    else if (option == 2){
        cout << "Input the Password: ";
        cin >> word;
        cout << "Your Word: " << solvePassword(word) << endl;
    }
    else{
        cout << "Wrong Input!" << endl;
    }
    
}