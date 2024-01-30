//
//  main.cpp
//  TestCPP
//
//  Created by Gaurav Kundalwal on 23/01/24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printArr(string tag, int* arr, int size){
    cout << "\n" << tag << " [";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << (i == (size - 1) ? "" : ", ");
    }
    cout << "]\n";
    cout << "size";
}

int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        //using string
        if(to_string(nums[i]).size() % 2 == 0){
            count++;
        }
        
        //---- using int
        //        int digitCount = 0;
        //        int digit = nums[i];
        //        while(digit != 0){
        //            digit /= 10;
        //            digitCount++;
        //        }
        //
        //        if(digitCount % 2 == 0){
        //            count++;
        //        }
    }
    return count;
}

int main(){
    vector<int> v = {555,901,482,1771};
    int count = findNumbers(v);
    cout << "output: "  << count << "\n";
    return 0;
}