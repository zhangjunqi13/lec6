#include <string>
#include <sstream>
#include <iomanip

#define NUM 128
#define CON 32
#define BEGIN 17

using namespace std;


short mem[NUM][CON]={{1,2,3},{4,5,6}};


void search(short VAddress){
	int pde_index = (VAddress >> 10) & 0x1f;
	int pte_index = (VAddress >> 5) & 0x1f;

	short page_index = mem[BEGIN][pde_index];
	short thing = mem[page_index][pte_index];

	cout<<thing<<endl;
}

int main(){
	search(6);
	//search(45621);

	return 0;
}

