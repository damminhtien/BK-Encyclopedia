#include<string>
#include<iostream>
using namespace std;

string toLowerStr(string s){
	int i = 0;
	while(s[i] != '\0') {
      s[i] = tolower(s[i]);
      i++;
   }
   return s;
}

bool operator > (string s1, string s2){
	if(toLowerStr(s1).compare(toLowerStr(s2)) > 0) return true;
	else return false;
} 

bool operator == (string s1, string s2){
	if(toLowerStr(s1).compare(toLowerStr(s2)) == 0) return true;
	else return false;
}

bool operator != (string s1, string s2){
	if(toLowerStr(s1).compare(toLowerStr(s2)) == 0) return false;
	else return true;
}

bool operator < (string s1, string s2){
	if(toLowerStr(s1).compare(toLowerStr(s2)) < 0) return true;
	else return false;
}

//string equalTo(string sour){
//	string des;
//	return des.replace(0,des.length(),sour);
//}

