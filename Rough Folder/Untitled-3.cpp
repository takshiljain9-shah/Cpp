
class student{
    private:
    string Name;
    int Grades[3];

    public:
    void inputData(){
        cout << "Enter full name: " << endl;
        cin >> Name;

        cout << "Enter Grades for 3 subjects: ";
        for (int i = 0; i <= 3; i++){
            cin >> Grades[i];
        }
    }

    void showData(){
        cout << "Student Name: " << Name << endl;

        cout << "Grades for 3 subjects: ";
        for (int i = 0; i <= 3; i++){
            cout << Grades[i] << " ";
        }
        cout << endl;
    }
};
