#include <iostream>
#include <string>

using namespace std;

int main()
{
    string animal, animalType;
    getline(cin, animal);

    if (animal == "dog")
        animalType = "mammal";

    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
        animalType = "reptile";

    else
        animalType = "unknown";

    cout << animalType << endl;

    return 0;
}
