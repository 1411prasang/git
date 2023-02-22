#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
//Starting new Project
using namespace std;

int sinX(int x){
    return sin(x);
}

int multiply2(int a,int b){
    return a*b;
}

float cosx(int x){
    return cos(x);
}

int add2(int x,int y){
    return x+y;
}
int main()
{
    int a,b;
    cout<<sinX(4);
    cout<<multiply2(4,5);
    cout<<cosx(4);
    cout<<add2(3,5);
    return 0;


}