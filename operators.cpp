# include<iostream>
using namespace std;
int main()
 {
    int a=1,b=1,c=1;
    
    if(a==1||c++)
    {
        cout<<"value of'c' will not increment due to short circuit"<<endl;
 }
    else
    cout<<"value of'c' is  increment as there is no short circuit"
        <<endl;
        if(a==1&&c++)
    {
      cout<<"value of'c' will is  increment as thereis no short circuit"
        <<endl;
 }
    else
    cout<<"value of'c' will is not increment due to short circuit"
        <<endl;
}
