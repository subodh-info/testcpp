#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> st;
    st.insert({"jennifier", "selena", "Elly", "salma", "tailor"});

    for(auto it = st.begin(); it != st.end(); ++it){
        cout << *it << endl;
    }
    
    return 0;
}