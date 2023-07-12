#include<iostream>
using namespace std;


int main(){
  int amount ,x;
  cin >> amount;
  int flag = 0;
  int newamount;

while(amount>0){
switch(flag){
  case 0: 
  x = amount/200;
  cout<< "the total number of 200 rupees notes require is :" <<x << endl;
  newamount=x*200;
  amount=amount-newamount;
  if(amount>0){
    flag = 1;
  }else{
    flag = 1;
  }
  break;

case 1: 
  x = amount/100;
  cout<< "the total number of 100 rupees notes require is :" <<x << endl;
  newamount=x*100;
  amount=amount-newamount;
    if(amount>0){
    flag = 2;
  }else{
    flag = 2;
  }
  break;

  case 2: 
    x = amount/20;
  cout<< "the total number of 20 rupees notes require is :"<< x << endl;
  newamount=x*20;
  amount=amount-newamount;
  if(amount>0){
    flag = 3;
  }else{
    flag = 3;
  }
  break;
  
  case 3:  x = amount/10;
  cout<< "the total number of 10 rupees notes require is :" <<x << endl;
  newamount=x*10;
  amount=amount-newamount;
  break;

  }

}

  }
