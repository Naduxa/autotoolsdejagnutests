#include <iostream>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	cout << "Hi! I'm a test1!";
	if (rand() & 1){
		return 1;
	}
	else{
		return 0;
	}
}

