#include <iostream>

using namespace std;

class check{
    private:
    int *valData;
    size_t varLength;

    public:

    // a constructor is defined to initialize the length and value of the given objet
    explicit check(size_t length): varLength(length), valData(new int[length]){}

    // a move constructor is defined to intialize he move operation
    check(check&& other){
        valData = other.valData;
        varLength = other.varLength;
        other.valData = nullptr;
        other.varLength = 0;
    }

    // the assignment of move operation is performed
    check& operator =(check &&other) noexcept{
        valData = other.valData;
        varLength = other.varLength;
        other.valData = nullptr;
        other.varLength = 0;
        return *this;
    }

    // getvarLength function returns the length of the object
    size_t getvarLength(){
        return varLength;
    }

    // swap function to swap the content of the objects by making use of move semantics
    void swap(check &other){
        check temp = move(other);
        other = move(*this);
        *this = move(temp);
    }

    // getvarLength function return the value of the object
    int *getvalData(){
        return valData;
    }
};

int main(){
    check firstobj(100), secondobj(200);
    cout << "the length of the first object is : " << firstobj.getvarLength() << endl;
    cout << "the length of the second obejct is : " << secondobj.getvarLength() << endl;
    cout << " the value of first object is : " << firstobj.getvalData() << endl;
    cout << "the value of second object is :" << secondobj.getvalData() << endl;

    swap(firstobj, secondobj);
    cout << "the length of the first object is : " << firstobj.getvarLength() << endl;
    cout << "the length of the second obejct is : " << secondobj.getvarLength() << endl;
    cout << " the value of first object is : " << firstobj.getvalData() << endl;
    cout << "the value of second object is :" << secondobj.getvalData() << endl;
    return 0;
}