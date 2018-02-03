#include "IPsource.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

IPsource::IPsource(vector <vector<string> > save_file)
{
    log_file = save_file;
}

map <string,int> IPsource::getAllIps(vector <vector<string> > &log_file)
{
    int i;
    map <string,int> source_map;
    map<string,int>::iterator it = source_map.begin();

    for(i=0;i<log_file.size();i++)
    {
        cout<<log_file[i][0]<<endl;
        it = source_map.find(log_file[i][0]);
        if(it == source_map.end())
            source_map.insert(pair<string,int>(log_file[i][0],1));

        else
            source_map[log_file[i][0]]++;

    }

    return source_map;


}

vector<int> getTopSources(std::map<string,int> sources)
{
	map<string,int>::iterator it;
	vector<int> top;
	it = sources.begin();
	for(it=sources.begin(); it != sources.end(); ++it)
	{
		top.push_back(it->second);
	}

	sort(top.begin(), top.end(), std::greater<int>());

	return top;

}
IPsource::~IPsource()
{
    //dtor
}
