#include <iostream>

using namespace std;

int main()
{
char word[30],reverse[30];
int j,i;

cout<<"Enter the word"<<endl;
cin>>word;
cout<<"Reverse version ::"<<endl;
while(word[i]!='\0')
i++;
j=i-1;
for(i=0; i<=j;i++){
    reverse[i]=word[j-i];}
    reverse[i]=word[j-i];
    reverse[i]=word[i];
    cout<<reverse;


    return 0;
}
