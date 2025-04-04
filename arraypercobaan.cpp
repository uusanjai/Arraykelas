#include <iostream>
using namespace std;
string kelas [30]; 
int pos = 0;
void inputData(string nama);
void outputData();

int main(){
inputData("Muhammad Firdaus");
outputData();
inputData("Hai name saye Walid");
outputData();
inputData("walid nak you nak ta?");
outputData();
return 0;

}
void inputData(string nama){
  kelas[pos]=nama;
    pos++;
}

void outputData(){
    for (int i=0; i<pos; i++){
        cout << kelas[i];
        if (i < pos - 1){
            cout << ", ";
        } else {
            cout << "," ;
        }
   }
}