/*
#include <iostream>
using namespace std;
int main(){
int rows , columns, zero;
cin >> rows >> columns;
cin>>zero;
zero-=1;
int **matrix = new int*[rows];
for(int i=0; i<rows; i++){
   matrix[i] = new int[columns];
}
for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
        cin>>matrix[i][j];
    }
}
cout <<"Array Values :"<<endl;

for (int k=0;k<rows;k++){
    for (int l=0;l<columns;l++){
        matrix[l][zero] = 0;
        cout<<matrix[k][l]<<" ";
    }
    cout<<endl;
}

for (int o=0;o<rows;o++){
    delete [] matrix[o];
}
delete [] matrix;
return 0;
}
*/
/*
#include <iostream>
using namespace std;

struct student{
    int id;
    int grades[3];
};
int main(){
    int Size,sum=0;
    cin>>Size;
    student **p = new student*[Size];
    for (int i=0;i<Size;i++){
        sum=0;
        p[i] = new student;
        cin>>p[i]->id;
        for (int l=0;l<3;l++){
            cin>>p[l]->grades[l];
            sum+=p[l]->grades[l];
        }
        cout<<"Student #"<<i<<endl;
        cout<<"ID: "<<p[i]->id;
        cout<<"Grades Sum: "<<sum<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
int p = 0;
int *n = &p;
int *m = &p;
if (n==m){
    cout<<"Hello"<<endl;
}
return 0;
}
*/
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int size;
int k=0;
void binary_box(string binary,int stringsize)
{
    if(stringsize!=size)
    {
    //  binary_box(binary+'a',stringsize+1);
      for(char i='a';i<='z';i++)binary_box(binary+i,stringsize+1);
    }
    else
    {
        cout<<++k<<binary<<endl;
    }
}
using namespace std;
int main ()
{
    string binary="";
    cin >>size;
    binary_box(binary,0);
    return 0;
}
