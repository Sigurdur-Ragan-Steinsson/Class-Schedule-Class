#include <iostream>
#include <string>

using namespace std;

class ClassSchedule{
  public:
  string name;
  string mathClass;
  string englishClass;
  string historyClass;

  int print(){
    cout << name << "'s" << " Schedule" << endl;
    cout << mathClass << endl;
    cout << englishClass << endl;
    cout << historyClass << endl;

    return 0;
  }
};

int main() {
  ClassSchedule DiddiSchedule;
  DiddiSchedule.name = "Diddi";
  DiddiSchedule.mathClass = "Adv. Precalculus";
  DiddiSchedule.englishClass = "AP Lang";
  DiddiSchedule.historyClass = "APUSH";
  DiddiSchedule.print();
}