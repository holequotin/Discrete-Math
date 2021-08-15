#include<iostream>

using namespace std;
//Sử dụng Back Tracking để in ra tổ hợp chập k của n phần tử,sử dụng mảng
void Out(int k,int arr[]){
    for(int i=1;i<=k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Try(int n,int arr[],int k,int x){
    //Mỗi phần tử nằm ở vị trí i đều có giá trị lớn nhất và giá trị nhỏ nhất
    for(int i=x;i<=n-k+x;i++){
        arr[x]=i;
        if(x==k) Out(k,arr);
        else Try(n,arr,k,x+1);
    }
}
int main() {
int n,k,arr[100];
cin>>n>>k;
Try(n,arr,k,1);
    return 0;
}
