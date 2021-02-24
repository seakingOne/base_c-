#include <iostream>
#include <vector>
using namespace std;

void container_test() {
    // containers
    int arr[5] = { 1,2,3,4 };
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\n";
    }

    char str[12] = "123";
    char str2[12] = "456";
    char str3[12] = { 0 };

    strcat_s(str, str2);

    cout << str << "\n";

    vector<int> arrV = { 12, 3, 4 };
    arrV.push_back(5);

    cout << "this size is: " << arrV.size() << endl;
}


void vector_test() {

    int arr[] = { 1,2,3,4,5 };
    vector<int> obj;
    obj.assign(arr, arr + 4);

    for (int i = 0; i < obj.size(); i++) {

        cout << obj[i] << endl;
        cout << endl;

    }

}