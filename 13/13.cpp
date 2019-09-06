//Preprocessors
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

//Class Student
class Student{

private:

///Member Variables
char name;
int physics, chemistry, maths;
double average;

///Member Functions
public:

Student(char name, int physics, int chemistry, int maths)
{
	
		this->name=name;
		this->physics=physics;
		this->chemistry=chemistry;
		this->maths=maths;
		average = 0;

}

//Accessors
char const getName()
{
	return name;
}

char const getPhysics()
{
	return physics;
}

char const getChemistry()
{
	return chemistry;
}

char const getMaths()
{
	return maths;
}


//Average
double Average()
{
	double a = (physics+chemistry+maths)/3;
	return a;
}


//Print Function
void print()
{
	cout<<name<<"\t"<<physics<<"\t"<<chemistry<<"\t"<<maths<<endl;
}


};//End of class Student

//Main Function
int main(){

	std::vector<Student> vect; //Vector Container
	char name; int physics, chemistry, maths;

	ifstream input; //Input Stream
	input.open("Student_13.dat");
	if(input.is_open())
	{
		for(unsigned int i=0; i<10; i++) //Feeding data from file to objects
		{
		input>>name>>ws>>physics>>ws>>chemistry>>maths;
		vect.push_back(Student(name, physics, chemistry, maths)); //Pushing in Vector vect
		}

	}

	else{cerr<<"File open error"; return(0);}

	cout<<"Created 10 Student objects!"<<endl<<"Read Sequence from object:"<<endl;

	//Print Sequence - Check
	
	for(unsigned int i=0; i<10; i++)
	{
		vect[i].print();
	}
	
	input.close(); //File Close

	ofstream output; //Output Stream
	output.open("output_Student_13.dat");
	if(output.is_open())
	{
		output<<"Personal Average:"<<endl<<endl;
		for(unsigned int i=0; i<10; i++)	//printing personal averages
		{
			output<<vect[i].getName()<<"\t"<<vect[i].Average()<<endl;
		}
		output<<"Class Average:"<<endl<<endl;

		double p,c,m=0;

		for(unsigned int i=0; i<10; i++) //Calculating overall subject averages
		{
			p = p+vect[i].getPhysics();
			c=c+vect[i].getChemistry();
			m=m+vect[i].getMaths();
		}


		output<<"Physics: "<<p/10<<endl<<"Chemistry: "<<c/10<<endl<<"Maths: "<<m/10; //Printing overall subject averages
	}

	else{cerr<<"File open error"; return(0);}

	output.close(); //File Close
}
