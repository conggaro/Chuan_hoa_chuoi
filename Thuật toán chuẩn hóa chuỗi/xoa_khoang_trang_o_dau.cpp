// Yêu cầu:
// 1. xóa khoảng trắng ở đầu chuỗi

#include <iostream>
#include <string>
using namespace std;

// hàm xóa khoảng trắng ở đầu
string Ham_Xoa_Khoang_Trang_O_Dau(string thamSo){
    int index = 0;
    
    while (index < thamSo.size())
    {
        if(thamSo[index] == ' '){
            thamSo.erase(index, 1);
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
    string str = "        Nguyen Ngoc Linh";

    cout << "chuoi ban dau la:\n";
    cout << "=> \"" + str << "\"\n\n";

    cout << "chuoi da duoc xoa khoang trang o dau la:\n";
    cout << "=> \"" << Ham_Xoa_Khoang_Trang_O_Dau(str) << "\"" << "\n\n";

    return 0;
}