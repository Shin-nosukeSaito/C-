#include<iostream>
#include<string>
using namespace std;



#include"Core"
#include "Dense"

int main(){
  
  using namespace Eigen;

  string s,t;
  cout<<"Hello world"<<endl;

  Eigen::MatrixXf A=Eigen::MatrixXf::Zero(2,2);
  A(0,0)=2;
  A(1,1)=5;
 
  Vector3f v;
  v = Vector3f::Identity();


  cout<<v<<endl;
  cout << "文字を入力";
  cin >> s;
  cout << s << endl;
  return 0;
}
