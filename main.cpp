//Omar Sanchez
//COSC 2030
// HW1 Part Three

#include <iostream>
#include <array>
using namespace std;



template <class J> class collection
{
public:
	int size;
	J *collect;
	int counter =0;

    collection(int x){
        size = x;
        collect = new J[size];
        for(int i=0; i<size; i++){
            collect[i]=0;
        }
    }

	bool isEmpty(void){
        J total=0;
        for(int i=0; i<size; i++){
            total = total + collect[i];
        }
        if(total==0){
            return true;
        }
        else{
            return false;
        }
	}

	void makeEmpty(void){
	    for(int i=0; i<size; i++){
            collect[i]=0;
	    }

	}

	void insert(J val, int place){
        if(place<0||place>size){
            cout<< "That location doesn't exist"<< endl;
        }
        else{
            collect[place]=val;
        }
	}

	void remove(J val){
        for(int i=0; i<size; i++)
        if(collect[i]==val){
            collect[i]=0;
        }
	}

	void removeRandom(void){
        int randomNumber = rand() % (size-1) + 0;
        collect[randomNumber]==0;
	}

	bool notContained(J val){
        for(int i=0; i<size; i++){
            if(collect[i]==val){
                return false;
                break;
            }
            else{
                return true;
            }
        }
	}

	void print(void){
        cout << "{";
        for(int i=0; i<size; i++){
            cout <<collect[i] << " ";
        }
        cout<< "}";
    }


};




int main()
{
	int holder;
	int location;
	int val;
	int val2;
	cout << "How many items would you like in your collection? Enter a number greater than or equal to 0."<< endl;
	cin >> holder;
	if (holder < 0) {
		while (holder < 0) {
			cout << "How many items would you like in your collection? Enter a number greater than or equal to 0." << endl;
			cin >> holder;
		}
	}
	collection<int> Stuff1(holder);
    cout << std::boolalpha << "is Stuff1 empty? :" << Stuff1.isEmpty() << endl;
    cout<< "Now insert a value into your array, enter any integer and the location at which you would like to store it, seperate them by white space ";
    cin >> val;
    cin >> location;
    Stuff1.insert(val,location);
    cout<< "Check to see if your array does not contain a certain object, type the object.";
    cin>>val2;
    cout << std::boolalpha << "Does Stuff1 not contain "<< val2<<"? :" << Stuff1.notContained(val2) << endl;
    cout<< "Remove a value from your array, type the integer you would like to remove: ";
    cin>>val2;
    Stuff1.remove(val2);
    cout << "Your array contains " <<endl;
    Stuff1.print();
    cout<<endl;

    collection<double> Stuff2(6);
    Stuff2.insert(54.2, 0);
    Stuff2.insert(85.3, 1);
    Stuff2.insert(54.9, 2);
    Stuff2.insert(57.3, 3);
    Stuff2.insert(48.9, 4);
    Stuff2.insert(98.6, 5);
    Stuff2.removeRandom();
    Stuff2.print();
    cout<<endl;
    Stuff2.makeEmpty();
    Stuff2.print();





    return 0;
}

