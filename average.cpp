#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 1) {
        cout << "Please input numbers to find average.\n";
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    double average = (sum) / (argc-1);

    cout << "---------------------------------\n";
    cout << "Average of " << (argc - 1) << " numbers = " << average << "\n";
    cout << "---------------------------------\n";

    return 0;
}
