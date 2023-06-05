// Yêu cầu:

// 1. chuẩn hóa cái chuỗi này:
// "     hA    noi MUA   vang Nhung   CON mUA    "

#include <iostream>
#include <string>
using namespace std;

// hàm chuẩn hóa chuỗi
string Ham_Chuan_Hoa_Chuoi(string thamSo){

    // việc 1:
    // chuyển tất cả chữ hoa thành chữ thường
    int kyTu;
    int soTP;
    
    for (int i = 0; i < thamSo.length(); i++)
    {
        kyTu = thamSo[i];
        soTP = (int)kyTu;

        // tiền xử lý những chữ in hoa
        bool kiemTra1 = soTP >= 65 && soTP <= 90 ? true : false;

        if (kiemTra1 == true)
        {
            soTP = soTP + 32;
            kyTu = (char)soTP;
            thamSo[i] = kyTu;
        }        
    }

    // việc 2:
    // xóa khoảng trắng ở đầu
    int index = 0;
    while (index < thamSo.length())
    {
        // nếu phần tử thứ index là khoảng trắng
        // thì gọi .erase() để xóa nó
        if(thamSo[index] == ' '){
            thamSo.erase(index, 1);
        }
        else if(thamSo[index] != ' '){
            break;
        }
    }

    // việc 3:
    // xóa khoảng trắng ở cuối
    int index_2 = thamSo.length() - 1;
    while (index_2 >= 0)
    {
        if (thamSo[index_2] == ' ')
        {
            thamSo.erase(index_2, 1);
            index_2 = index_2 - 1;
        }
        else if(thamSo[index_2] != ' '){
            break;
        }        
    }
    
    // việc 4:
    // xóa khoảng trắng ở giữa
    // bản chất là xóa 2 phần tử trùng nhau
    int index_4 = 0;

    while(index_4 < thamSo.length()){
        if(thamSo[index_4] == thamSo[index_4 + 1]){ // dòng này cực kỳ quan trọng luôn
            if(thamSo[index_4] == ' '){
                thamSo.erase(index_4, 1);
            }
        }
        else if(thamSo[index_4] != thamSo[index_4 + 1]){
            index_4 = index_4 + 1;
        }
    }
    
    // việc 5: 
    // chữ cái đầu tiên của các từ thì viết hoa
    for (int i = 0; i < thamSo.size(); i++)
    {
        if(thamSo[i] == ' ' && thamSo[i+1] != ' '){
            thamSo[i+1] = thamSo[i+1] - 32;
        }
    }

    // chuyển chữ thường sang chữ hoa thì trừ 32
    thamSo[0] = thamSo[0] - 32;

    return thamSo;
}

int main(){
    // fake nhập vào 1 chuỗi
    string str = "     hA    noi MUA   vang Nhung   CON mUA    ";

    cout << "chuoi ban dau la:\n";
    cout << "=> \"" + str << "\"\n\n";

    cout << "chuoi da duoc chuan hoa la:\n";
    cout << "=> \"" << Ham_Chuan_Hoa_Chuoi(str) << "\"" << "\n\n";

    return 0;
}