#include<iostream>
using namespace std;
int main(){
//     // 1D array
int arr[] = {1,3,5};
cout<< arr[1]<<endl;

int dym[6];
for (int i = 0; i < 6; i++)
{
    cout << "Enter the marks of the student  "<<i+1<<" : ";
    cin>>dym[i];
}

for (int  i = 0; i < 6; i++)
{
    cout<<"the entered marks are "<< dym[i] <<endl;
}
    //   2D array 
    int arr2d[2][3]= {{1,2,3},{4,5,6}};
    
        for(int row=0 ;row<2;++row){
            for(int colum=0;colum <3;++colum){
            cout<<"The value at index "<<row<<" ,"<<colum <<" is " <<arr2d[row][colum] <<endl;
            }
    }

}