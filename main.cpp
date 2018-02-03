/* Test Project for interview prep
 * Author: Shruti Modak
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "IPsource.h"
#include "IPdest.h"
using namespace std;


int main()
{
    string line;
    vector <vector<string> > save_file;
    vector<string> single;
    ifstream parse_file("test.txt");
    string s;
    if (parse_file.is_open())
    {
        while(parse_file.good())
        {
            getline(parse_file,line);
            istringstream ss(line);
            while(getline(ss, s, ','))
                single.push_back(s);

            save_file.push_back(single);
            single.clear();
        }

        parse_file.close();
    }


   IPsource obj(save_file);
    std::map <string,int> sources;
    map <string, int> :: iterator it;
    vector<int> top_src;

   sources = obj.getAllIps(save_file);




    IPdest dest(save_file);
    map <string,int> destination;

    it = destination.begin();

    destination = dest.getAllIPs(save_file);

    cout<<"Printing Frequency of each destination IP"<<endl;
    for(it=destination.begin(); it != destination.end(); ++it)
        cout<<it->first<<"=>"<<it->second<<endl;

    return 0;

}
