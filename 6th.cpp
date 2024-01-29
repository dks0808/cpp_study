#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){

    const int CAPACITY = 10;
    int frequencies[CAPACITY] = {0};
    ifstream integerFile;

    integerFile.open("integerFile.dat");
    if(!integerFile){
        cout <<"���� ������ �� �� �����ϴ�."<<endl;
        cout <<"���α׷��� �ߴ��մϴ�." ;
        return 0;
    }
    // BOM ����
    char bom[3];
    integerFile.read(bom, 3);
    if (!(bom[0] == (char)0xEF && bom[1] == (char)0xBB && bom[2] == (char)0xBF)) {
        // BOM�� �ƴ϶�� ���� �����͸� ó������ �ǵ���
        integerFile.seekg(0);
    }
    int data ;
    int size = 0;
    while(integerFile >> data){
        if(data>=0 && data<=9){
            size++;
            frequencies[data]++;
        }
    }
    integerFile.close();

    cout << "���� �ȿ� " << size << "���� ��ȿ�� �����Ͱ� �ֽ��ϴ�." << endl;

    for(int i =0; i<10; i++){
        cout << setw(3) << i << " ";
        for(int f=1; f<=frequencies[i]; f++){
            cout <<'*';
        }
        cout<< " " << frequencies[i]<< endl;
    }
    return 0;
}