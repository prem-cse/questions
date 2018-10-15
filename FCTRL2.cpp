#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
        int arr[200];
        int n;
        int pos=0;
        int k;
        cin>>n;
        k=n;
        while(k>0){
                arr[pos++]=k%10;
                k=k/10;
            }
            int d;
        for(int i=n-1;i>=2;i--){
                int carry=0;
                for(int j=0;j<pos;j++){
                    d=i*arr[j]+carry;
                    arr[j]=d%10;
                    carry=d/10;
                }
                while(carry>0){
                        arr[pos++]=carry%10;
                        carry=carry/10;

                }
            }
            for(int i=pos-1;i>=0;i--){
                cout<<arr[i];
            }
    }
}
