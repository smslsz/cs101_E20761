#include <iostream>
#include <queue>
#define N 105
using namespace std;

struct people{
    int age, stamp;
    string id;
    bool operator<(const people& other) const{
        if (age == other.age) {
            return stamp>other.stamp;
        }
        else return age<other.age;
    }
}pp[N];

int main(){
    int tt;
    cin>>tt;
    deque<string> young;
    priority_queue<people> old;
    for(int i=0;i<tt;i++){
        cin>>pp[i].id>>pp[i].age;
        pp[i].stamp=i;
        if(pp[i].age<60) young.push_back(pp[i].id);
        else old.push(pp[i]);
    }
    while(!old.empty()) {
        cout<<old.top().id<<'\n';
        old.pop();
    }
    while(!young.empty()) {
        cout<<young.front()<<'\n';
        young.pop_front();
    }
    return 0;
}