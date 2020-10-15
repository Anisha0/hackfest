#include<iostream>
using namespace std;
struct xy{
    int x,y;
};
void add(struct xy s1, struct xy s2){
    cout<<"coordinates of p1+p2 are:"<<s1.x + s2.x<<","<<s1.y + s2.y<<endl;
}
int main()
{
    struct xy s1,s2;
    cout<<"enter the x and y coordinates of p1:"<<endl;
    cin>>s1.x>>s1.y;
    cout<<"enter the x and y coordinates of p2:"<<endl;
    cin>>s2.x>>s2.y;
    add(s1,s2);
      return 0;
}