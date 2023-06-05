// Yêu cầu:
// 1. xóa khoảng trắng ở cuối chuỗi

#include <iostream>
#include <string>
using namespace std;

// hàm xóa khoảng trắng ở cuối
string Ham_Xoa_Khoang_Trang_O_Cuoi(string thamSo){
    int index = thamSo.length() - 1;
    
    while (index >= 0)
    {
        if(thamSo[index] == ' '){
            thamSo.erase(index, 1);
            index = index - 1;
        }
        else if (thamSo[index] != ' ')
        {
            break;
        }        
    }
    
    return thamSo;
}

int main(){
    // fake nhập vào 1 chuỗi
    string str = "Nguyen Ngoc Linh        ";

    cout << "chuoi ban dau la:\n";
    cout << "=> \"" + str << "\"\n\n";

    cout << "chuoi da duoc xoa khoang trang o cuoi la:\n";
    cout << "=> \"" << Ham_Xoa_Khoang_Trang_O_Cuoi(str) << "\"" << "\n\n";

    return 0;
}