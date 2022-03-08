
using namespace std;
class person{
	public:
	string name;
	int age;
	void setage(int n){
		age = n;
	}
	int getage(){
		if (age > 0 || age < 0){
			return age;
		}
		else{
			return 0;
		}
		
	}
	
};