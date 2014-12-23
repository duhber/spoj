#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstring>
#include<cstdio>
//#include<unordered_map>
#include<string>
#include<limits>
#include<functional>
#include<queue>
using namespace std;

int main(){
    char str[201];
    int col;
    while(scanf("%d",&col) && col){
        scanf("%s",str);
        int len=strlen(str);
        int row=len/col;
        char ch[row][col];
        for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if(i%2)
                        ch[i][j]=str[(i+1)*col-j-1];
                    else
                        ch[i][j]=str[i*col+j];
                }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                printf("%c",ch[j][i]);
            }
        }
        printf("\n");
    }
          

    return 0;
    }
