//
// Created by 王立宇 on 2022/9/23.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* 輸出檔案最後k行 */
void print_last_k_lines(const int k, char *file_name) {
    ifstream file(file_name);
    string L[k];

    int size = 0;
    while (file.peek() != EOF) {  //看下一個字符
        getline(file, L[size%k]);
        size++;
    }

    int start = size > k ? (size % k) : 0;  // 看總行數是否有大於k, 如果沒有index從0開始
    int count = min(k, size);  // 需要讀幾行
    for (int i=0; i<count; ++i) {
        cout << L[(start+i)%k] << endl;
    }
}