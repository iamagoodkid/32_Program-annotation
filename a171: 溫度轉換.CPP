#include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	float C,F;//宣告一個 華氏 跟攝氏
	cin>>F;//輸入一個華氏
	C=(F-32)*5/9;//華氏轉攝氏的運算
	cout<<C;//輸出一個攝氏
	return 0;
}
