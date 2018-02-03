/*
 * IPdest.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: modak
 */

#include "IPdest.h"

IPdest::IPdest(vector <vector<string> > save_file) {
	// TODO Auto-generated constructor stub
	log_file = save_file;
}

map <string,int> IPdest::getAllIPs(vector <vector<string> > &log_file)
{
    int i;
    map <string,int> dest_map;
    map<string,int>::iterator it = dest_map.begin();

    for(i=0;i<log_file.size();i++)
    {
        cout<<log_file[i][0]<<endl;
        it = dest_map.find(log_file[i][1]);
        if(it == dest_map.end())
            dest_map.insert(pair<string,int>(log_file[i][1],1));

        else
            dest_map[log_file[i][1]]++;

    }

    return dest_map;


}
IPdest::~IPdest() {
	// TODO Auto-generated destructor stub
}

