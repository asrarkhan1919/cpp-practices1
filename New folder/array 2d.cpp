#include <iostream>
using namespace std;

main(){
	
//	
//	string name[3][2];
//	
//	for(int a=0; a<3; a++){
//	  for (int b=0; b<2; b++){	
//	  	cin>>name[a][b];
//	   }
//	}  
//	 
//for(int a=0; a<3; a++){
//	  for (int b=0; b<2; b++){	
//	  	cout<<"show   :"<<name[a][b]<<endl ;
//	  	
//	  	
//	  }
//}




// ExpenseTracker500.cpp
// ------------------------------------------------------------
// A 500-line console Expense & Budget Tracker in modern C++17.
//
// Features
// - Add income/expense transactions
// - Edit / delete transactions
// - Persistent CSV storage (ledger.csv)
// - Category budgets with persistence (budgets.csv)
// - Monthly and category reports with ASCII charts
// - Search & filter (by text, date range, category)
// - Export filtered view to CSV
// - Pretty table printing
//
// Compile: g++ -std=c++17 -O2 ExpenseTracker500.cpp -o expense
// Run: ./expense
// ------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;


// ----------------------------- Utilities ------------------------------
namespace util {
// Trim helpers
static inline string ltrim(const string &s){size_t i=0; while(i<s.size() && isspace((unsigned char)s[i])) ++i; return s.substr(i);}
static inline string rtrim(const string &s){size_t i=s.size(); while(i>0 && isspace((unsigned char)s[i-1])) --i; return s.substr(0,i);}
static inline string trim(const string &s){return rtrim(ltrim(s));}


// Split CSV line respecting simple quoted fields
vector<string> split_csv(const string &line) {
vector<string> out; string cur; bool inq=false;
for(size_t i=0;i<line.size();++i){
char c=line[i];
if(c=='"') { inq=!inq; }
else if(c==',' && !inq) { out.push_back(cur); cur.clear(); }
else cur.push_back(c);
}
out.push_back(cur);
for(string &x: out) x = trim(x);
return out;
}


// Join CSV with quoting if needed
string join_csv(const vector<string>& cols) {
auto needs_quote = [](const string& s){
return s.find(',')!=string::npos || s.find('"')!=string::npos || s.find('\n')!=string::npos || s.find(' ')!=string::npos; };
string out; bool first=true;
for (auto &c: cols) {
if(!first) out.push_back(','); first=false;
if(needs_quote(c)){
string q=c; size_t pos=0; while((pos=q.find('"',pos))!=string::npos){ q.insert(pos,"\""); pos+=2; }
out.push_back('"'); out+=q; out.push_back('"');
} else out+=c;
}
return out;
}


// Date validation: expect YYYY-MM-DD (no timezone)
bool valid_date(const string& d){
if(d.size()!=10||d[4]!='-'||d[7]!='-') return false;
int y=stoi(d.substr(0,4)); int m=stoi(d.substr(5,2)); int day=stoi(d.substr(8,2));
if(m<1||m>12||day<1||day>31||y<1900||y>3000) return false;
static int mdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool leap = (y%4==0 && (y%100!=0||y%400==0));
// ---------------------------------------------------------------------

}
