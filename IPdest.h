/*
 * IPdest.h
 *
 *  Created on: Nov 5, 2017
 *      Author: modak
 */

#ifndef IPDEST_H_
#define IPDEST_H_
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

class IPdest {

private:
	vector <vector<string> > log_file;
public:
	IPdest(vector <vector<string> >save_file);
	map<string,int> getAllIPs(vector <vector<string> > &log_file);
	virtual ~IPdest();
};

#endif /* IPDEST_H_ */
