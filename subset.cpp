#include<iostream>

using namespace std;
//Khai báo giá trị ban đầu
void Init(int k,int arr[]){
    for(int i=1;i<=k;i++){
        arr[i]=i;
    }
}
void Out(int arr[],int k){
    for(int i=1;i<=k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Hàm sinh phần tử tiếp theo,tìm phần tử đầu tiên chưa đạt max rồi đưa nó lên, các phần tử phía sau nó thì mình reset lại
void Next_Element(int n,int arr[],int k){
    int i=k;
    //tìm phần tử đầu tiên chưa đạt max
    while (i>=1&&arr[i]==n-k+i)
    {
        i--;
    }
    arr[i]++;
    for(int j=i+1;j<=k;j++){
        arr[j]=arr[i]+j-i;
    }
    Out(arr,k);
}
bool check(int n,int arr[],int k){
    for(int i=1;i<=k;i++){
        if(arr[i]!=n-k+i) return false;
    }
    return true;
}
void Try(int n,int arr[],int k){
    Init(n,arr);
    Out(arr,k);
    while (check(n,arr,k)==false)
    {
        Next_Element(n,arr,k);
    }
    
}
int main() {
int n,k,arr[100];
cin>>n>>k;
Try(n,arr,k);
    return 0;
}
