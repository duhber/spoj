#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>

using namespace std;

int main(){
    int number;
    vector<int> vec;
    while(1){
        cin>>number;
        if(number==42)
            break;
        else
            vec.push_back(number);

    }
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();++it)
        cout<<*it<<endl;
    return 0;
    }
