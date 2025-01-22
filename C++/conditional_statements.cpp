#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string numbers[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    if(n>0 && n<10)
    {
        cout<<numbers[n-1];
    }
    else 
    {
        cout<<"Greater than 9";
    }
     return 0;
}
