/*
codewars: Correct the mistakes of the character recognition software

Character recognition software is widely used to digitise printed texts.
Thus the texts can be edited, searched and stored on a computer.

When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

Your task is correct the errors in the digitised text.
You only have to handle the following mistakes:

S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1
The test cases contain numbers only by mistake.
*/
#include <iostream>
#include <string>
using namespace std;

string correct(string str){
  for(int i=0;i<str.size(); i++) {
    if(str[i]=='5')
    str[i]='S';
    if(str[i]=='0')
    str[i]='O';
    if(str[i]=='1')
    str[i]='I';
  }
  return str;
}

int main() {
    cout<<correct("1F-RUDYARD K1PL1NG")<<endl; //"IF-RUDYARD KIPLING"
    cout<<correct("ERNE5T HEM1NGWAY - A FARWELL T0 ARM5")<<endl; //"ERNEST HEMINGWAY - A FARWELL TO ARMS"
    cout<<correct("R0BERT MERLE - THE DAY 0F THE D0LPH1N")<<endl; //"ROBERT MERLE - THE DAY OF THE DOLPHIN"
    return 0;
}