#include<iostream>
using namespace std;

struct Role {
    char* name; // �m�W
    int level;  // ����
    int hp; // hit points ��q
    int ap; // attack power �����O
    int dp;// defence power ���m�O
    int sp;//spirit power �믫��q
};

void dump_role(Role& role) 
    {
        cout << "�W�١G   " << role.name << endl;
        cout << "���šG   " << role.level << endl;
        cout << "��q�G   " << role.hp << endl;
        cout << "�믫��q�G " << role.sp << endl;
        cout << "�����O�G " << role.ap << endl;
        cout << "���m�O�G " << role.dp << endl;
        
    }

void test_role() 
    {
        char name[] = "�W�l�u��C�Ӧr"
        struct Role role;
        role.name = name;
        role.level = 1;
        role.hp = 100;
        role.sp = 1;
        role.ap = 1;
        role.dp = 1;
        dump_role(role);
    }

int main(int argc, char* argv[]) 
    {
        test_role();
    }