#include<bits/stdc++.h>
using namespace std;
void bubbleSort(float arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main(){
    int n,cap;
    cout<<"Enter the capacity of Knapsack\n";
    cin>>cap;
    cout<<"Enter the number of elements\n";
    cin>>n;
    float pr[n];
    float wei[n];
    float pwratio[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the val of "<< i+1 <<" elements\n";
        cin>>pr[i];
        cin>>wei[i];
        pwratio[i]=pr[i]/wei[i];
    }
    /*
    float max=pwratio[0];
    for(int i=0;i<n;i++){
        if(pwratio[i]>max){
            max=pwratio[i];
            arr[i]=i+1;
        }
    }
    cout<<"The elements selected are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }*/
    float arr2[n];
    for(int i=0;i<n;i++){
        pwratio[i]=arr2[i];
    }
    sort(pwratio,pwratio+n,greater<int>());
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(pwratio[i]==arr2[j]){
                arr[j]=j+1;
            }
        }
    }

    cout<<"Elements taken are\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Their weights are\n";
    for(int i=0;i<n;i++){
        cout<<pwratio[i]<<endl;
    }
    }