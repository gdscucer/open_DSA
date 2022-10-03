#include<iostream>

using namespace std;

int sqrtInt(int x){
    int start = 0, end = x, mid = start + (end - start)/2, ans;

    while(start <= end){

        int square = mid*mid;

        if(square == x){
            return mid;
        }
        else if(square > x){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double sqrtDouble(int n, int precision, int temp){
    double factor = 1, ans = temp;

    for(int i = 0; i < precision; i++){
        factor /= 10;
        for(double j = ans; j*j < n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number to find square of: ";
    cin>>n;

    int res = sqrtInt(n);
    double finalAns = sqrtDouble(n, 3, res);

    cout<<"Square Root of "<<n<<" is : "<<finalAns<<endl;

    return 0;
}