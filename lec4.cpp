#include<iostream>
using namespace std;
//Patterns 
/**
//Square pattern
int main(){
    int n;
    cout<<"Enter a num :";
    cin>>n;
    for(int row=1;row<=n; row++){
        for(int col=1;col<=n;col++){
           cout<<col<<' ';
        }
        cout<<"\n";
    }
    return 0;
}

int main(){
    char alph;
    cout<<"Enter alphabet till you want as square : ";
    cin>>alph;
    if(alph>=97){
        alph=alph-32;
    }
    for(char c='A'; c<=alph; c++){
        for(char _c='A'; _c<=alph; _c++){
            cout<<_c<<' ';
        }
        cout<<'\n';
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;
    int num=1;
    for(int row=1;row<=n;row++){
        for(int col=1; col<n; col++){
            cout<<num<<'\t';
            num++;
        }
        cout<<'\n';
    }
}

int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=row;col>=1;col--){
            cout<<col<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;
    int num=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<num<<'\t';
            num++;
        }
        cout<<'\n';
    }
    return 0;
}

//inverted triangle 
int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1; col<row; col++){
            cout<<" ";
        }
        for(int col=1; col<=(n+1-row); col++){
            cout<<row;
        }
        printf("\n");
    }
    return 0;
}

//pyrmid pttern 
int main(){
    int row,col,n;
    cout<<"Enter your num:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=(n-row);col++){
           cout<<' ';
        }
        for(col=1;col<=row;col++){
            cout<<col;
        }
        for(col=row;col>1;col--){
            cout<<col-1;
        }
        cout<<"\n";   
    }
    return 0;
}

//Hollow diamond pattern 
int main(){
    int n,col,row;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(row=1;row<=n;row++){
        for(col=1;col<=(n-row);col++) cout<<" ";
        cout<<'*';
        for(col=1;col<=(2*row-3);col++) cout<<" ";
        if (row !=1) cout<<'*';
        cout<<"\n";
    }
    
    for(row=n-1;row>=1;row--){
        for(col=1;col<=(n-row);col++) cout<<" ";
        cout<<'*';
        for(col=1;col<=(2*row-3);col++) cout<<" ";
        if (row !=1) cout<<'*';
        cout<<"\n";
    }
    
    return 0;
}

//Butterfly Pattern
int main(){
    int n,col,row;
    cout<<"Enter a number : ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++) cout<<'*';
        for(col=1;col<=2*(n-row);col++) cout<<' ';
        for(col=1;col<=row;col++) cout<<'*';
        cout<<endl;
    }
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++) cout<<'*';
        for(col=1;col<=2*(n-row);col++) cout<<' ';
        for(col=1;col<=row;col++) cout<<'*';
        cout<<endl;
    }
    return 0;
}
*/