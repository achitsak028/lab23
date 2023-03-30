#include<iostream>
using namespace std;
int main(int argc,char* argv[]){
int sum = 0;
if(argc <= 1){
cout << "Please input numbers to find average." << endl;
return 0;
}
for(int i = 0;i < argc;i++){
int ans = atoi(argv[i]);
   sum += ans;
}
double result = (double)sum/(argc-1);
    cout << "---------------------------------" << endl;
    cout << "Average of " << argc-1 <<" numbers = " << result << endl;
    cout << "---------------------------------";
    return 0;
} 
