//find out if a given inteser is a Palindrome Number or not
#include <iostream>
  // header file for stringstream
using namespace std;

bool isPalindrome(int x){
 
 string str = std::to_string(x); 

 string reverse = string(str.rbegin(), str.rend());

 if(str==reverse){return true;}
 else return false;

}

int main(){

 bool value= isPalindrome(11);
 cout<<boolalpha<<value;
 
  return 0;
    
}