#include <iostream>

using namespace std;

void todoestoeracampo(int edad, int iglesia){
    if(edad >= iglesia){
    	cout << "CUERDO" << "\n";
  	}else{
    	cout << "SENIL" << "\n";
 	}
}
    
int main(){
  int edad, iglesia;
  
  cin >> edad >> iglesia;
  
  
  while((edad != 0) && (iglesia != 0)){ 
	todoestoeracampo(edad, iglesia);
  	cin >> edad >> iglesia;
  }
  
  return 0;
}
