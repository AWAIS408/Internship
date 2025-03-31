#include"Bank.h"
int main(){
Bank mybank;
mybank.createaccount(101,"Shahzaib",5000.0,false);
mybank.createaccount(102,"Shahzaib",5000,true,3.5);

mybank.createloan(101,"SK",2000.0,3.3);
mybank.displayaccount();
mybank.dispalyloan();

return 0;
}