#include "binarysearchtree.cpp"

#include<iostream>
using namespace std;
int main(){

TreeType<int> obj1;
if(obj1.IsEmpty()){

    cout<<"Tree is Empty"<<endl;


}else{

cout<<"Tree is not Empty"<<endl;
}

 obj1.InsertItem(4);
 obj1.InsertItem(9);
 obj1.InsertItem(2);
 obj1.InsertItem(7);
 obj1.InsertItem(3);
 obj1.InsertItem(11);
 obj1.InsertItem(17);
 obj1.InsertItem(0);
 obj1.InsertItem(5);
 obj1.InsertItem(1);






/*int N;
cout<<"Insert 10 Items"<<endl;
for(int i=0;i<10;i++){
    cin>>N;
    obj1.InsertItem(N);


}

*/

if(obj1.IsEmpty()){

    cout<<"Tree is Empty"<<endl;


}else{

cout<<"Tree is not Empty"<<endl;
}

cout<<obj1.LengthIs()<<endl;


int N2=9;
bool b1;
obj1.RetrieveItem(N2,b1);
if(b1==1){
    cout<<"Item is found"<<endl;
}
else{

    cout<<"Item is not found"<<endl;

}


int N3=13;
bool b2;
obj1.RetrieveItem(N3,b2);
if(b2==1){
    cout<<"Item is found"<<endl;
}
else{

    cout<<"Item is not found"<<endl;

}

obj1.ResetTree(IN_ORDER);
obj1.Print();
obj1.ResetTree(PRE_ORDER);
cout<<endl;
int item;
bool found;
for(int i=0;i<obj1.LengthIs();i++){


    obj1.GetNextItem(item,PRE_ORDER,found);
    cout<<item<<" ";

}
cout<<endl;

obj1.ResetTree(POST_ORDER);

int item2;
bool found2;
for(int i=0;i<obj1.LengthIs();i++){


    obj1.GetNextItem(item2,POST_ORDER,found2);
    cout<<item2<<" ";

}
obj1.MakeEmpty();



return 0;
}
