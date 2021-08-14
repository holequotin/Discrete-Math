#include<iostream>

using namespace std;
//Sử dụng BackTracking để in ra tất cả chuỗi nhị phân độ dài n
//Bài này thuộc dạng toán chia để trị
void Out(int n,int arr[]){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Try(int n,int arr[],int k){
    for(int i=0;i<=1;i++){
        arr[k]=i;
        if(k==n) Out(n,arr);
        else{
            Try(n,arr,k+1);
        }
    }
}
int main() {
int n,arr[100];
cin>>n;
Try(n,arr,1);
    return 0;
}
