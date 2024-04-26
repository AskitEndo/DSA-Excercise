// This programs counts the the number of digits that can divide the complete number that they are a part of
// Link:https://www.naukri.com/code360/problems/count-digits_8416387

#include<iostream>
using namespace std;

int countDigits(int n){
    int numberGiven= n;
    int outputValue = 0;
    int num = n;

    while (num > 0) {
        int digit = num % 10;
        if ( digit != 0 && numberGiven % digit == 0) {
            outputValue+=1;
        }
        num /= 10;
    }


return outputValue;
}

int main(){
    int userInput;
    cin>>userInput;


cout<<countDigits(userInput);

return 0;
}
