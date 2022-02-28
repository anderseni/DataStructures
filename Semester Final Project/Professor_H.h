#ifndef Professor_H
#define Professor_H

#include<string>
using namespace std;

class Professor
{
public:
	Professor();
	~Professor();

	// Get Methods
	string getProfName();
	string getProfID();
	string* getExpertise();
	int getLunchTime();

	// Set Methods
	void setProfName(string profName_);
	void setProfID(string profID_);
	void setExpertise(string Expertise_[]);
	void setLunchTime(int lunchTime);

	// Misc
	void addExpertise(string Expertise_);


private:
	string profName;
	string profID;
	string expertise[1];
	int lunchTime;

};

#endif