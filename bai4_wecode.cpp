#include <iostream>
#include <iomanip>

using namespace std;

struct Student
{
    string id;
    string name;
    string bdate;
    char gender;
    float toan;
    float ly;
    float hoa;
};

float dtb(Student *s)
{
    return (s->toan + s->ly + s->hoa) / 3;
}

void getInput(Student &s)
{
    cin >> s.id;
    cin.ignore();
    getline(cin, s.name);
    cin >> s.bdate >> s.gender >> s.toan >> s.ly >> s.hoa;
}

void display(Student *s)
{
    cout << s->id << '\t' << s->name << '\t' << s->bdate << '\t' << s->gender << '\t' << s->toan << '\t' << s->ly << '\t' << s->hoa << '\t';
    cout << setprecision(3);
    cout << dtb(s);
}

int main()
{
    Student s;
    getInput(s);
    display(&s);
    return 0;
}