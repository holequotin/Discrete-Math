#include<iostream>

using namespace std;
//In ra hoán vị của n phần tử sử dụng PP Sinh
//Hàm đổi vị trí
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
//Hàm lật ngược lại
void Overturned(int l,int r,int arr[]){
    //Sử dụng 2 con trỏ để đảo vị trí
    int i=l,j=r;
    while (j>i)
    {
        swap(&arr[i],&arr[j]);
        i++;j--;
    }
    
}
//Hàm khai báo giá trị đầu
void Init(int n,int arr[]){
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
}
//In ra phần tử
void Out(int k,int arr[]){
    for(int i=1;i<=k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Check phần tử cuối
bool check(int n,int arr[]){
    for(int i=1;i<=n;i++){
        if(arr[i]!=n-i+1) return false;
    }
    return true;
}
//Hàm sinh phần tử tiếp theo
void Next_Element(int n,int arr[]){
    int i,j;
    for( i=n-1;i>=1;i--){
        if(arr[i]<=arr[i+1]) break;
    }
    for( j=n;j>=1;j--){
        if(arr[j]>arr[i]){
            swap(&arr[i],&arr[j]);
            break;
        }
    }
    Overturned(i+1,n,arr);
    Out(n,arr);
}

void Try(int n,int arr[]){
    Init(n,arr);
    Out(n,arr);
    while (check(n,arr)==false)
    {
        Next_Element(n,arr);
    }
}
int main() {
int n,arr[100];
cin>>n;
Try(n,arr);
    return 0;
}
