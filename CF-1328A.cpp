#include <iostream>
using namespace std;

int  main() {

int n;
cin>>n;
int arr[n][2];
for (int i=0; i<n; i++) {cin >>arr[i][0] >>arr[i][1] ;}

for (int i=0; i<n; i++) {
if (arr[i][0] % arr[i][1] == 0) {cout<<0 <<endl;}
else {cout <<arr[i][1] - (arr[i][0] % arr[i][1]) <<endl ;}
}

return 0;
}
