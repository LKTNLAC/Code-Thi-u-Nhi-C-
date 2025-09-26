// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <stdio.h>
#include <unistd.h>
#include<stdio.h> // printf()
#include<stdlib.h> // exit()
#include<sys/types.h> // pid_t
//#include<sys/wait.h> // wait()
#include<unistd.h> // fork
using namespace std;
int main() {
    int a = 10; p = fork();

    if (p == 0)
        a++;
    else {
        wait(NULL);
        a--;
    }
    cout << a << endl;

    return 0;
}
