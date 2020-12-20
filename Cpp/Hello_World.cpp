#include<iostream>
#include<string>

namespace Hello{
	class world{
		std::string msg;
		public:
		world():
		msg("Hello World !")
		{

		}
		std::string get_msg( void ){
			return msg;
		}
	};
}


int main(){

	Hello::world greetMessage;
	
	std::cout<< greetMessage.get_msg() <<"\n";

	return 0;
}
