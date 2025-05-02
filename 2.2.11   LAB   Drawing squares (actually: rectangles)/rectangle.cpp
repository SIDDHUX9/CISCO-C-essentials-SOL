#include<iostream>
using namespace std;

int main()
{
int width;
int height;
int n;
    cout<<"enter width";
    cin>>width;
    cout<<"enter height";
    cin >> height;
    n = width - 1;
    for(int i = 0; i<=width; i++){
  cout<<"+";
    } 
    cout<<endl;
    for(int i=0;i<=height-2;i++){
    cout<<"|"<<string( n ,' ')<<"|"<<endl;
    }
    for(int i = 0; i<=width; i++){
  cout<<"+";
    } 
    return 0;
}
