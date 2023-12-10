#include <iostream>
#include <vector>
using namespace std;
int spiralMatrix(int arr[3][3],int row,int col){
    int count=0; //count numbers of element
    int total=row*col;//toatal no of elements
    int startingrow=0;
    int endingrow=row-1;
    int startingcol=0;
    int endingcol=col-1;

    vector<int> ans;
    while(count<total){
        //print starting row
        for(int i=startingcol;count<total&&i<=endingcol ;i++){
            ans.push_back(arr[startingrow][i]);
            count++;
        }
        startingrow++;
        //print ebding col
        for(int i=startingrow;count<total&&i<=endingrow;i++){
            ans.push_back(arr[i][endingcol]);
            count++;
        }
        endingcol--;
        //print endinh roww
        for(int i=endingcol;count<total&&i>=startingcol;i--){
            ans.push_back(arr[endingrow][i]);
            count++;
        }
        endingrow--;
        //print starting col
        for(int i=endingrow;count<total&&i>=startingrow;i--){
            ans.push_back(arr[i][startingcol]);
            count++;
        }
        startingcol++;




    }
    for(int i=0;i<total;i++){
        cout<<ans[i]<<" ";
    }

}

int main(){

    int arr[3][3]={{10,20,30},
                    {40,50,60},
                    {70,80,90}};
    int m=3;
    int n=3;
    spiralMatrix(arr,m,n);
    //10 20 30 60 90 80 70 40 50
}

