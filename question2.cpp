#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;
findFactorial(char arr[],int n,string s){


}
findRank(char arr[],int n,string s){
  for(int i=0;i<n;i++){
     int less_count++;
    for(int j=i+1;j<n;j++){
      if(s[i]>s[j])
          less_count++;

    }
     vector<char> dev(52,0);
    for(int j=i;j<n;j++){
       if(s[j]>='a'&&s[j]<='z')
          dev[s[j]-'a']++;
       else if(s[j]>='a'&&s[j]<='z')
          dev[s[j]-'A'+26]++;

    }
    int dev_count=1;
    dev_count=dev_count*fac(j-i+1);
    int rank=(fac(n-i-1)*less_count)/dev_count;
    return rank;
  }


}

int main(){
 int n;
cin>>n;
 count=0
 char in[n];
 string s;
 while(count<n+1){
     if(count<n)
     cin<<in[count];
     else
     cin<<s;


 }
 findRank(in,n,s);

}
