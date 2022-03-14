#include <iostream>
#include <string>

using namespace std;

class Friend {
    
};

class Print {
    public :
    void printMenu() {
        cout << "------------------" << "\n";
        cout << "[메뉴]\n1)개별 신상 정보 입력\n2)전체 신상 정보 출력\n3)개별 신상 정보 조회\n4)개별 신상 정보 삭제\n5)프로그램 종료\n";
        cout << "------------------" << "\n";
        cout << "원하시는 메뉴를 선택해주세요 ";
    }
};

int main() {
    Print print;
    int num;
    
    print.printMenu();
    
    cin >> num;
    
    while(1) {
        if(num == 1) {
            
        }
        else if(num == 2) {
            
        }
        else if(num == 3) {
            
        }
        else if(num == 4) {
            
        }
        else if(num == 5) {
            cout << "프로그램을 종료합니다." << "\n";
            return 0;
        }
        else
            cout << "잘못된 접근입니다." << "\n";
    }
}
