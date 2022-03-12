module User;
class User {
	private: 
	int ACNum;
	int PINs;
	long long balance;
	public:
	User {
	}
	User(int ACNum, int PINs, long long balance) {
		this->ACNum=ACNum;
		this->PINs=PINs;
		this->balance=balance;
	}
	void getBalance() {
		return balance;
	}
	void withdraw(int money) {
		if(money<0) cout<<"So tien rut khong hop le.\n";
		else if(money>0 && this.balance>=money) {
			this.balance-=money;
		} else {
			cout<<"So tien con lai trong tai khoan cua quy khach khong du.\n";
		}
		
	}
	void deposit(int money) {
		if(money>0) {
			this.balance+=money;
		} else {
			cout<<"So tien gui khong hop le.\n";
		}
		
	}
	void display() {
		cout<<"So du trong tai khoan cua quy khach la: "<<this.balance<<"\n";
	}
};
export module User;

