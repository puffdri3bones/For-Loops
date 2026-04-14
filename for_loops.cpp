#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string names[5];  
    
    string birth_dates[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
        
        cout << "Enter birth dates" << "\n";
        cin >> birth_dates[i];
        
        
        std::cout << "You entered: " << names[i] << "\n\n";
    }

    // Print all names at the end
    std::cout << "\n--- All names entered ---\n";
    for(int i = 0; i < 5; i++) {
        std::cout << "Name " << (i + 1) << ": " << names[i] << "\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
   
   string name[10];
   
   name[0] = "Bob";
   name[1] = "Freddy";
   name[2] = "Hailey";
   name[3] = "Jessica";
   
   for(string nam : name){
       cout << nam << "\n";
   }
   
   cout << name[0];

    return 0;
}
