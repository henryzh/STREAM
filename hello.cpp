#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<cstdio>

using namespace std;

int main(){
    cout << "--------------Hello World---------------------" << endl;
    cerr << "--------------Error Hello World---------------" << endl;
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
        fprintf(stdout, "Current working dir: %s\n", cwd);
    return 0;
}
