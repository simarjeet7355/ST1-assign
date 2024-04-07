#include <iostream>
#include <cstring>
using namespace std;
class count {
    private:
        char* str;
    public:
       count(const char* str) {
            this->str = new char[strlen(str) + 1];
            strcpy(this->str, str);
        }

        ~count() {
            delete[] str;
        }

        int countWords() {
            int count = 1;
            for (int i = 0; str[i]!= '\0'; i++) {
                if (str[i] == ' ') {
                    count++;
                }
            }
            return count;
        }
};
int main() {
    count wc("Hey! We are using github with vscode");
    cout << "Total number of words: " << wc.countWords() << endl;
    return 0;
}