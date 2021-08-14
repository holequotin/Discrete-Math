#include<iostream>
#include<math.h>
using namespace std;
//Hàm khai báo phần tử đầu
void Init(int n,int arr[]){
    for(int i=1;i<=n;i++){
        arr[i]=0;
    }
}
//Hàm in ra chuỗ nhị phân
void Out(int n,int arr[]){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//In ra chuỗi tiếp theo (cộng thêm 1 bit vào chuỗi cho trước)
void Next_bit_string(int n,int arr[]){
   // Out(n,arr);
    int i=n;
    while (arr[i]!=0&&i>=1)
    {
        arr[i]=0;
        i--;
    }
    arr[i]=1;
    Out(n,arr);
}
void Try(int n,int arr[]){
    int count=pow(2,n);
    Init(n,arr);
    Out(n,arr);
    for(int i=2;i<=count;i++){
        Next_bit_string(n,arr);
    }
}                                
int main() {
int n,arr[100];
cin>>n;
Try(n,arr);
    return 0;
}
