#include <iostream>
using namespace std;
class node{
  public:
    void input();
    void proses();
    void output();
	string nim;
    string nama;
    node *berikut;
	node *node1, *node2, *node3, *node4, *node5;
	string a[10], b[10];
  private:
    int i;
};

void node::input(){	
  for(i = 1; i <= 5; i++){
    cout<<"Masukkan NIM : "; cin>>a[i];
    cout<<"Masukkan Nama : "; cin>>b[i];
    cout<<endl;
  } 
}

void node::proses(){
  node1 = new node();
  node2 = new node();
  node3 = new node();
  node4 = new node();
  node5 = new node();

  //pengisian node 1
  node1 -> nim = a[1];
  node1 -> nama = b[1];
  node1 -> berikut = node2;
   //pengisian node 2
  node2 -> nim = a[2];
  node2 -> nama = b[2];
  node2 -> berikut = node3;
   //pengisian node 3
  node3 -> nim = a[3];
  node3 -> nama = b[3];
  node3 -> berikut = node4;
   //pengisian node 4
  node4 -> nim = a[4];
  node4 -> nama = b[4];
  node4 -> berikut = node5;
   //pengisian node 5
  node5 -> nim = a[5];
  node5 -> nama = b[5];
  node5 -> berikut = NULL;
}

void node::output(){
  node *jalan;
  jalan = node1;
  i = 1;
  while(jalan != NULL) {
    cout << "NIM: "<< jalan->nim <<endl;
    cout<< "Nama: "<< jalan->nama <<endl;
    cout<<endl;
		i++;
		jalan = jalan->berikut; 
  }
}

int main() {
  node n;
  n.input();
  n.proses();
  n.output();
}