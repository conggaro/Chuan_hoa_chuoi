// Yêu cầu:
// xóa khoảng trắng ở giữa
// cái loại nó đã ở giữa lại còn trùng nhau ấy

// chỗ kinh điển nhất là phải viết cái này trước
// thamSo[index] == thamSo[index+1]

// sau rồi mới đến viết cái này
// thamSo[index] == ' '

#include <iostream>
#include <string>
using namespace std;

// hàm xóa khoảng trắng ở giữa
string Ham_Xoa_Khoang_Trang_O_Giua(string thamSo){
    int index = 0;
    
    while (index < thamSo.size())
    {
        if( thamSo[index] == thamSo[index+1] ){
            if (thamSo[index] == ' ')
            {
                thamSo.erase(index, 1);
            }
        }
        else if ( thamSo[index] != thamSo[index+1] )
        {
            index = index + 1;
        }        
    }
    
    return thamSo;
}

int main(){
    // fake nhập vào 1 chuỗi
    string str = "Nguyen         Ngoc      Linh";

    cout << "chuoi ban dau la:\n";
    cout << "=> \"" + str << "\"\n\n";

    cout << "chuoi da duoc xoa khoang trang o giua la:\n";
    cout << "=> \"" << Ham_Xoa_Khoang_Trang_O_Giua(str) << "\"" << "\n\n";

    return 0;
}