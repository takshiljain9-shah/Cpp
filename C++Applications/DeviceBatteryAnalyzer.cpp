#include <iostream>
#include <string>

using namespace std;

class Device{
    private:
    string deviceName;
    int usage[3];

    public:
    void getData(){
        cout << "Enter device name: ";
        cin >> deviceName;

        cout << "Enter battery usage of 3 apps: ";
        for (int i = 0; i < 3; i++){
            cin >> usage[i];
        }
    }

    void displayData(){
        cout << "\nDevice: " << deviceName << endl;

        cout << "Battery usage: ";
        for (int i = 0; i < 3; i++){
            cout << usage[i] << " ";
        }
        cout << endl;
    }

    inline int totalBattery(){
        return usage[0] + usage[1] + usage[2];
    }

    friend void batteryAnalyzer(Device a);
};

void batteryAnalyzer(Device a){
    float avg = a.totalBattery() / 3.0;

    cout << "Average battery usage: " << avg << endl;
    if(avg > 40)
    cout << "Battery consumption : high usage" << endl;
    else
    cout << "Battery consumption : normal usage" << endl;

    cout << "Device Name length: " << a.deviceName.length() << endl;
}

int main(){
    Device usage1;

    usage1.getData();
    usage1.displayData();

    cout << "Total battery usage: " << usage1.totalBattery() << endl;

    batteryAnalyzer(usage1);

    return 0;
}