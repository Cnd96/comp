#include "bits/stdc++.h"
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;

bool sortcol( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v1[1] > v2[1]; 
} 

bool allCharactersSame(string s) 
{ 
    int n = s.length(); 
    for (int i = 1; i < n; i++) 
        if (s[i] != s[0]) 
            return false; 
  
    return true; 
} 
  
int main()
{

    // CHECK WHETHER ALL CHARACTES OF STRING SAME
     allCharactersSame("SASAC");
    //String erase first letter
    string qq="12345678";
    qq.erase(0, 1); 
    cout<<qq;

    //array sort
    int od[5];
    sort(od, od+5, greater<int>()); 
   //string loop
    string s;
    for(int j=0 ; j<s.size();j++){
                
    }
    //swap string 
    string kk="123456";
    swap(kk[1], kk[4]);
    // break from for loop
    for(int j=kk.size()-1 ; j>=0;j--){
          cout<<kk[j];      
          if(kk[j]=='3'){
              break;
          }
    }

    //loop through vector
    vector<int> evenArr;
    for (auto j = evenArr.cbegin(); j != evenArr.cend(); ++j){
            cout<<*j<<endl;
    }

    //vector sort
    vector<int> d;
    sort(d.begin(), d.end(), greater<int>());
    // Multi D vector and sort by column
    vector<vector<long long> > pdata(5); 
    for(int j=0;j<5;j++){
            pdata[j] = vector<long long>(2); 
            pdata[j][0]=j;
            pdata[j][1]=2;
    }
    sort(pdata.begin(), pdata.end(),sortcol); 
}