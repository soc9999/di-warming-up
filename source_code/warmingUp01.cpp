// warmingUp01.cpp
//

#include <iostream>
#include <vector>

using namespace std;

class wiseStudent {
protected:
    string name;
    string id;
    string slogan;

public:
    wiseStudent(string in1 = "", string in2 = "", string in3 = "") : name(in1), id(in2), slogan(in3) {};
    void show() {
        cout << name << ", id = " << id << ", slogan: '" << slogan << "'" << endl;
    }
};


int main() {

    vector<wiseStudent> team;

    // area for object construnction
    // objects join the team
    wiseStudent Takis34("Takis", "1115202100XXX", "Greek Mouzaka forever!");
    team.push_back(Takis34);

    wiseStudent Vivi22("Vivi", "1115202100XXX", "W_vs_W");
    team.push_back(Vivi22);

    // +1 constructor // +1 push to vector
    

    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    wiseStudent sokratis("sokratis", "1115202100XXX", "P_P");
    team.push_back(sokratis);


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector


    // +1 constructor // +1 push to vector
    


    // area for object show up
    // objects on the screen
    for (auto i = team.rbegin(); i != team.rend(); i++)
        i->show();

    return 0;
}
