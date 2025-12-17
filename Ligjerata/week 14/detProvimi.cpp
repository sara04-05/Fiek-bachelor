#include <iostream>
using namespace std;

class Database{
    private:
    string hostname;
    int port;
    public:
    string tableName;
    string dbType;

    Database(){
        hostname="";
        port=-1;
        tableName="";
        dbType="";
    }
    void setHostName(string hostname)
    {
        this->hostname=hostname;
    }
    string getHostName()
    {
        return hostname;
    }
    void setPort(int port){
        this ->port=port;
    }
    int getPort(){
        return port;
    }
};

int main(){
    return 0;
}