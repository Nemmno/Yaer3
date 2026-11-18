#include <iostream>
using namespace std;
void b1(){
    int* p = new int(21);
    cout << ((*p) *2)<< endl;
    delete p;
    p = nullptr;
    cout<< (p == nullptr) << endl;
}
void b2(){
   int* arr = new int[5]{4,9,2,7,5};
   int sum = 0;
   int max = arr[0];
   for(int i=0;i<5;i++){
       sum += arr[i];
       if(arr[i] > max){
           max = arr[i];
       }
   }
   cout << "Sum: " << sum << ", Max: " << max << endl;
   delete[] arr;
   arr = nullptr;
}
int* find(int* a,int n,int key){
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return &a[i];
        }
    }
    return nullptr;
}
void b3(){
    int data[5] = {4,9,2,7,5};
    int key1 = 7;
    int key2   = 8;
    int* result1 = find(data,5,key1);
    if(result1 != nullptr){
        cout << "Found: " << *result1 << endl;
    }else{
        cout << "Not Found" << endl;
    }
    int* result2 = find(data,5,key2);
    if(result2 != nullptr){
        cout << "Found: " << *result2 << endl;
    }else{
        cout << "Not Found" << endl;
    }
}

int main() {
    cout << "--- B1 ---" << endl;
    b1();
    cout << "--- B2 ---" << endl;
    b2();
    cout << "--- B3 ---" << endl;
    b3();
    return 0;
}