#include <bits/stdc++.h>
using namespace std;

string encoding(string plaintext, vector<int> key) {
  string encodedtext="";
  int n=keys.size();
  toupper(plaintext);
  for(int i=0;i<plaintext.length();i++) {
    char c= text[i];
    int shift = key[i%n];
    if(!isspace(c)) {
      encodedtext+= char((c-'A'+shift)%26+'A');
    }
    else {
    encodedtext+=' ';
    }
  }
  return encodedtext;
}




string encoding(string ciphertext, vector<int> key) {
  string decodedtext="";
  int n=keys.size();
  toupper(ciphertext);
  for(int i=0;i<ciphertext.length();i++) {
    char c= text[i];
    int shift = key[i%n];
    if(!isspace(c)) {
      decodedtext+= char((c-'A'- (shift-'A')+26)%26+'A');
    }
    else {
    decodedtext+=' ';
    }
  }
  return decodedtext;
}




int main(){return 0;}

