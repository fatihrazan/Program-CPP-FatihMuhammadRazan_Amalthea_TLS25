#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num){
    bool negative = false;
    if (num * -1 >= 0){
        negative = true;
        num *= -1;
    }
    int Num = 0;
    while (num > 0){
        Num = Num * 10 + num % 10;
        num /= 10;
    }
    if (negative){
        return Num * -1;
    }else{
        return Num;
    }
}

int main(){
    int n,count = 0;
    cout << "Input how many numbers: ";
    cin >> n;
    int nums[n+1];
    for (int i=0; i<n; i++){
        cout << "Input number " << i + 1 << ":";
        cin >> nums[i];
        if (i%2 == 0){
            count += reverseNum(nums[i]);
        }else{
            count += nums[i];
        }
    }

    cout << "Result is: " << count << endl;

}