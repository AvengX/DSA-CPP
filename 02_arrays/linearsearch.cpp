#include<iostream>
using namespace std;
bool find(int *arr,int size,int key){
for(int i=0;i<size;i++){
if(arr[i]==key){
return true;
}

}
return false;

}
int main()
{
int arr[]={5,6,12,34,78,90};
int size=6;
int key;
cout<<"Enter the Key:";
cin>>key;
if(find(arr,size,key)){
cout<<"Element found ";
}
else{
cout<<"Element not found";
}


}
