/*
 * IPsource.h
 *
 *  Created on: Nov 5, 2017
 *      Author: modak
 */

#ifndef IPSOURCE_H_
#define IPSOURCE_H_
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


class IPsource {
private:
       vector <vector<string> > log_file;

   public:

       IPsource(vector <vector<string> > save_file);
       map<string,int> getAllIps(vector <vector<string> > &log);
       vector<int> getTopSources(map<string,int> sources);

	virtual ~IPsource();
};

#endif /* IPSOURCE_H_ */
