#include<iostream>
#include<string>
using namespace std;
namespace Hello{
	class world{
		string msg;
		public:
		world(){
			msg="Hello World !";
		}
		string get_msg( void ){
			return msg;
		}
	};
}
using namespace Hello;

int main(){
	string H;
	world greetMessage;
	H = greetMessage.get_msg();
	cout<<H<<endl;

	return 0;
}
