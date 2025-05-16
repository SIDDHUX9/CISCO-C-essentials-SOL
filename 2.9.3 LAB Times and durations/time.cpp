#include <iostream>
using namespace std;

struct TIME{
    int h;
    int m;
};

int main(void){
    TIME beg, end;
    cout<< "enter start time h ";
    cin>>beg.h>>beg.m;
    cout<<"enter end time ";
    cin>>end.h>>end.m;
    
    int begmin = beg.h*60 + beg.m;
    int endmin = end.h*60 + end.m;
    
    int duration = endmin - begmin ; 
    
    int anshour = duration/60;
    int ansmin = duration%60;
    
    cout<<anshour<<":"<<ansmin;
    
}
