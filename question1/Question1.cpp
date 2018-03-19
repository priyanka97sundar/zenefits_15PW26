#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Tree{
  int data;
  Tree *left;
  Tree *right;

};





class Inorder{
   string po;

   public:
    Inorder(string s){
       po=s;
    }
    void Convert(){
        int x=po.length();
        int arr[x];
        int k=0;
        for(int i=0;i<po.length();i++){
            if(po[i]>='0'&&po[i]<='9'){
                arr[k]=(po[i]-48);
                k++;
            }

        }
        int root=arr[0];
        int count=0;
        int branch =(k-1)/2;
       int mid=ceil(3/2);
           print(arr[0]);
          print(arr[mid]);
          print(arr[mid-1]);
          print(arr[mid+1]);

          mid=mid+3;
          print(arr[mid]);
          print(arr[mid-1]);
          print(arr[mid+1]);

       }




    void print(int i){
       if(i!=0)
       {
           cout<<i<<",";

       }
    }
};
int main(){
    int n=0,i=0;
    cin>>n;
    while(i<n){
    string s;
    cin>>s;
    Inorder n(s);
    n.Convert();
    i++;
    }
}

