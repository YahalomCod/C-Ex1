#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel
{
	string mat(int x, int y, char a, char b){
		if(x%2 == 0 || y%2 == 0){
			throw std :: invalid_argument("Integer arguments most be odd numbers!");
		}
		if(x <= 0 || y <= 0){
				throw std :: invalid_argument("Integer arguments mmust be positive!");
			}
		if(a == ' ' || b == ' '){
				throw std :: invalid_argument("Char arguments can not be space");
			}

		else if(y !=1 && x != 1){
			string ans = "";
			for(int i = 0; i < x; i++){
				ans += a;}
			ans += "\n";
			ans += a + mat(x-2, y-2, b, a) + a;
			return "";
		}
		else{
			return "";
		}
	}
}
