#include"iostream"
using namespace std;
class information{
 	public:
		int roll;
		char name[10];
		void virtual info();
};
void information::info(){
	cout<<endl<<"Enter student Name"<<endl;
	cin>>name;
	cout<<"Enter Student Roll No."<<endl;
	cin>>roll;
}
class marks:virtual public information{
	public:
		int m1,m2,m3;
		void mark();
};
void marks::mark(){
	cout<<endl<<"Enter marks"<<endl;
	cout<<"Physics: ";
	cin>>m1;
	cout<<"Mathematics: ";
	cin>>m2;
	cout<<"Chemistry: ";
	cin>>m3;
}
class sportmk:virtual public information{
	public:
		int sm1,sm2,sm3;
		void smark();
};
void sportmk::smark(){
	cout<<endl<<"Enter 3 Sports marks"<<endl;
	cout<<"Cricket: ";
	cin>>sm1;
	cout<<"Hockey: ";
	cin>>sm2;
	cout<<"Chess: ";
	cin>>sm3;
}
class mktot:virtual public marks{
	public:
		int tot,per;
		void total();
};
void mktot::total(){
	tot=m1+m2+m3;
	per=tot*100/300;
}
class sptot:virtual public sportmk{
	public:
		int stot,sper;
		void stotal();
};
void sptot::stotal(){
	stot=sm1+sm2+sm3;
	sper=stot*100/300;
}
class result:public mktot,public sptot
{
	public:
		void disp();
	
};
void result::disp(){
	cout<<endl<<"Student Name is: "<<name;
	cout<<endl<<"Student Roll no is: "<<roll;
	cout<<endl<<"Subject total is: "<<tot;
	cout<<endl<<"Subject Perc. is: "<<per;
	cout<<endl<<"Sports total is: "<<stot;
	cout<<endl<<"Sport perc. is "<<sper;
	if(sper<100)
	{
		cout<<endl<<"Sport Grade is: 'A' ";
	}
	else 
	if(sper<70)
	{
		cout<<endl<<"Sport Grade is: 'B' ";
	}
	else 
	if(sper<50)
	{
		cout<<endl<<"Sport Grade is: 'C' ";
	}
	else 
	if(sper<35)
	{
		cout<<endl<<"Sport Grade is: Fail";
	}else{
		cout<<"NULL";
	}
}
int main()
{
	result r;
	r.info();
	r.mark();
	r.smark();
	r.total();
	r.stotal();
	r.disp();
}
