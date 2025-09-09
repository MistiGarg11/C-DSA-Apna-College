#include<iostream>
using namespace std;
//Variables ,Data types ,Operators
/*
//use of sizeof() function 
int main(){
    int x=sizeof(int);
    int y=sizeof("misti");
    cout<<x<<y<<'\n';
    return 0;
}

// data types 
int main(){
    int x=9;
    float pi=3.14f;//f ensures its not a double value
    char star='*';
    bool isSafe=true;//or false, output 1 or 0
    double price=99.99;
    return 0;
}

//type casting 
int main(){
    //implicit: small to big
    char alpha='a';
    int val=alpha;
    cout<<alpha<<'\t'<<val<<'\n';
    //explicit: big to small data type 
    double price=100.99;
    int newprice=(int)price;//without int no error but not recommended
    cout<<newprice;
    return 0;
}

//input in c++
int main(){
    int age;
    cin >> age;
    cout<<"Your age is : "<< age <<'\n';
    return 0;
}

// Operators general doubts 
int main(){
    int a=11, b=5;
    cout<<(a%b)<<'\n';
    //note : % can operate only on int values 
    cout<<(a/b)<<'\n';
    cout<< ((float)a)/b <<'\n';
    return 0;
}

// PRACTICE -Sum of wo numbers
int main(){
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"Sum is : "<<(a+b)<<endl;
    return 0;
}

//Unary operators 
int main(){
    int a=10,b,c;
    b=a++;//first kaam then upgrade
    a=10;
    c=++a;//first upgrade then kaam
    cout<<a<<b<<c<<endl;
   
    int x=12,z=20;
    int y=x++ + z++;
    cout<<y<<endl;
    return 0;
}