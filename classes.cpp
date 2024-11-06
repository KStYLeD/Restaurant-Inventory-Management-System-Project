#include <bits/stdc++.h>
using namespace std;
#define getVarName(var) #var

vector<pair<string, float>> dishes(9);
vector<pair<string,float>> inventory(18);

int checkInv(float value, string name){
	int f = 0;
	for(auto &it : inventory) {
		if(it.first == name) {
			if(it.second < value) {
				f = 1;
				break;
			}
		}
	}

	return f;
	}
void getInventory(string file){
    ifstream in(file);
    
    string a = "";
    while(in.eof() == 0) {
        vector <string> words;
        string s;
        getline(in,s);
        // cout<<s<<endl;
        // cout<<s.length()<<endl;
        
        int count = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                words.push_back(a);
                // cout<<words[count]<<endl;
                a = "";
                count++;
            }
            else if(i == s.length() - 1) {a += s[i]; words.push_back(a);}
            else a += s[i];
            
        }
        // int j = 0;
        // for (auto &it : words){
        //     cout<<j<<" ";
        //     cout<<it<<" ";
        //     j++;
        // }
        // cout<<endl;
        string one = words[0];
        string two = words[1];
        string three = words[2];
		string s2 = words[0];
        int index = stoi(s2);
        string name = words[1];
        float price = stof(words[2]);
        inventory[index] = (make_pair(name, price));
        // cout<<words[0] << words[1]<<words[2]<<endl;
        // cout<<one<<two<<three<<endl;
        a="";
	}
}
void getDishes(string file){
    ifstream in(file);
    
    string a = "";
    while(in.eof() == 0) {
        vector <string> words;
        string s;
        getline(in,s);
        // cout<<s<<endl;
        // cout<<s.length()<<endl;
        
        int count = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                words.push_back(a);
                // cout<<words[count]<<endl;
                a = "";
                count++;
            }
            else if(i == s.length() - 1) {a += s[i]; words.push_back(a);}
            else a += s[i];
            
        }
        // int j = 0;
        // for (auto &it : words){
        //     cout<<j<<" ";
        //     cout<<it<<" ";
        //     j++;
        // }
        // cout<<endl;
        string one = words[0];
        string two = words[1];
        string three = words[2];
		string s2 = words[0];
        int index = stoi(s2);
        string name = words[1];
        float price = stof(words[2]);
        dishes[index] = (make_pair(name, price));
        // cout<<words[0] << words[1]<<words[2]<<endl;
        // cout<<one<<two<<three<<endl;
        a="";
	}
}
void printInv(){
	ofstream out("inventory.txt");
	for(int i=1; i<inventory.size(); i++){
		if( i == inventory.size() - 1)  out<<i<< " "<<inventory[i].first<<" "<<inventory[i].second;
		else out<<i<< " "<<inventory[i].first<<" "<<inventory[i].second<<endl;
	}
}

class item {
	protected:
	string type; // vegetable, fruits, meat, spices, dairy, seafood, others
	string name;
	float count;
	public:
};

class Dish {
	protected:
	string name;
	//float time;
	float price;
	float avg_orders;
	int orders;
	char rating;
};

class Employees {
	protected:
	string name, type, joined_on, experience, remark, address, contact, goverment_Id_No, goverment_Id_type, past_organisation;
	float salary;
	short eId;
	char gender;
};



//dishes 
class dalfry : public Dish {
	int flg = 0;
	struct ingredients{
		float lentils = 0.150;
		float chilly = 2;
		float spices = 0.01;
		float onions = 2;
		float garlic = 1;
		float ginger = 0.5;
		float oil = 0.05;
	} ing;
	public:
	static int orders;
	friend void getData();
	dalfry(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.lentils, getVarName(lentils));
		b = checkInv(ing.chilly, getVarName(chilly));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		e = checkInv(ing.oil, getVarName(oil));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if(it.first == getVarName(lentils)) {
						it.second -= ing.lentils;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(chilly)) {
						it.second -= ing.chilly;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(oil)) {
						it.second -= ing.oil;
					}	
					
			}
			orders++;

		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};
class pavbhaji : public Dish {
	int flg = 0;
	struct ingredients {
		float veggies = 0.2;
		float onions =  3;
		float ginger = 1;
		float garlic = 1;
		float spices = 0.01;
		float butter = 0.05;
		float pav = 2;
	}ing;
	public:
	static int orders;
	friend void getData();
	pavbhaji(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.veggies, getVarName(veggies));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		e = checkInv(ing.pav, getVarName(pav));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if(it.first == getVarName(pav)) {
						it.second -= ing.pav;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(veggies)) {
						it.second -= ing.veggies;
					}	
					
			}
			orders++;
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};

class cholebhature : public Dish {

	struct ingredients {
		float chickpeas = 0.2;
		float onions =  3;
		float ginger = 1;
		float garlic = 1;
		float spices = 0.01;
		float butter = 0.05;
		float flour = 0.5;
	}ing;
	public:
	static int orders;
	friend void getData();
	int flg = 0;

	cholebhature(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.chickpeas, getVarName(chickpeas));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		e = checkInv(ing.flour, getVarName(flour));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(chickpeas)) {
						it.second -= ing.chickpeas;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(chickpeas)) {
						it.second -= ing.chickpeas;
					}	
					
			}
			orders++;
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};

class prawnscurry : public Dish {
	int flg = 0;
	
	struct ingredients {
		float prawns = 6;
		float onions =  3;
		float ginger = 1;
		float garlic = 1;
		float spices = 0.01;
		float butter = 0.05;
	}ing;
	public:
	static int orders;
	friend void getData();
	prawnscurry(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.prawns, getVarName(prawns));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(prawns)) {
						it.second -= ing.prawns;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if("ing." + it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			orders++;
			
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};

class fishfry : public Dish {
	int flg = 0;
	
	struct ingredients {
		float fish = 1;
		float onions =  3;
		float ginger = 1;
		float garlic = 1;
		float spices = 0.02;
		float butter = 0.1;
	}ing;
	public:
	static int orders;
	friend void getData();
	fishfry(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.fish, getVarName(fish));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			
			for(auto &it : inventory){	
					if(it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(fish)) {
						it.second -= ing.fish;
					}	
			}
		}
		else {
			this->flg = 1;
		}
		orders++;

	}
	int status(){
		return flg;
	}
};

class paneermasala : public Dish {
	int flg = 0;
	
	struct ingredients {
		float veggies = 0.1;
		float paneer = 0.1;
		float onions =  3;
		float ginger = 1;
		float garlic = 1;
		float spices = 0.01;
		float butter = 0.05;
	}ing;
	public:
	static int orders;
	friend void getData();
	paneermasala(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.veggies, getVarName(veggies));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		e = checkInv(ing.paneer, getVarName(paneer));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if(it.first == getVarName(paneer)) {
						it.second -= ing.paneer;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(veggies)) {
						it.second -= ing.veggies;
					}	
			}
			orders++;
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};

class biryani : public Dish {
	int flg = 0;
	
	struct ingredients {
		float veggies = 0.2;
		float rice = 0.4;
		float onions = 3;
		float ginger = 2;
		float garlic = 1.5;
		float spices = 0.1;
		float butter = 0.1;
		float tomato = 3;
	}ing;
	public:
	static int orders;
	friend void getData();
	biryani(){
		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.veggies, getVarName(veggies));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.garlic, getVarName(garlic));
		d = checkInv(ing.ginger, getVarName(ginger));
		e = checkInv(ing.rice, getVarName(rice));
		f = checkInv(ing.spices, getVarName(spices));
		g = checkInv(ing.onions, getVarName(onions));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if(it.first == getVarName(rice)) {
						it.second -= ing.rice;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(spices)) {
						it.second -= ing.spices;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(onions)) {
						it.second -= ing.onions;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(ginger)) {
						it.second -= ing.ginger;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(garlic)) {
						it.second -= ing.garlic;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(veggies)) {
						it.second -= ing.veggies;
					}	
			}
			orders++;
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}
};

class gulabjamun : public Dish {
	int flg = 0;
	
	struct ingredients {
		float butter = 0.2;
		float flour = 0.2;
		float milk = 1;
		float sugar = 0.4;		
	}ing;
	public:
	static int orders;
	friend void getData();
	gulabjamun(){

		int a = 0, b=0, c=0, d=0,e=0,f=0,g=0;
		a = checkInv(ing.flour, getVarName(flour));
		b = checkInv(ing.butter, getVarName(butter));
		c = checkInv(ing.milk, getVarName(milk));
		d = checkInv(ing.sugar, getVarName(sugar));
		//vector<float> names = {ing.lentils, ing.chilly, ing.garlic, ing.ginger, ing.oil, ing.onion, ing.spices};
		if(!(a||b||c||d||e||f||g)){
			for(auto &it : inventory){	
					if(it.first == getVarName(flour)) {
						it.second -= ing.flour;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(milk)) {
						it.second -= ing.milk;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(sugar)) {
						it.second -= ing.sugar;
					}	
			}
			for(auto &it : inventory){	
					if(it.first == getVarName(butter)) {
						it.second -= ing.butter;
					}	
			}
			orders++;
			
		}
		else {
			this->flg = 1;
		}

	}
	int status(){
		return flg;
	}

};
void printMenu(){
	cout<<endl;
	cout<<"*********MENU*********"<<endl;
	cout<<"**********************"<<endl;
	cout<<endl;
    cout<<"Sr.  Name  Prize"<<endl;
	cout<<endl;
    for(int i=1; i<dishes.size(); i++) {
        cout<<i<<" "<<dishes[i].first<<" "<<dishes[i].second<<endl;
    }
	cout<<endl;
	cout<<"**********************"<<endl;
	cout<<"**********************"<<endl;
	cout<<endl;
}
int orderValues(string file){
	ifstream in(file);
	// ofstream out(file);
	string count;
	int num=0;
	getline(in, count);
	if(count.length() > 0) {
		
		int k=0;
		string num1="";
		for(int i=0; i<count.length(); i++){
			if(k == 2) num1 += count[i];
			else if(count[i] == ' ')  k++;
		}
		// cout<<num1<<endl;
		num = stoi(num1);
	}
	in.close();
	return num;
}
double revenue = orderValues("./Analytics/customers.txt");
class customer {

	protected:

	string name;

	string phone;

	int orders[30];

	double bill = 0;

	

	public:
	static int count;
	bool ordered = false;
	customer(){

		cout<<"Enter Your Name : "<<endl;
		cin.ignore();
		getline(cin, this->name);

		cout<<"Enter Your Phone : "<<endl;
		cin.ignore();
		getline(cin, this->phone);

		count++;

	}

	

	void order(){


		ofstream out("customers/" + name+".txt");
		out<<"Name : "<<name<<endl;
		out<<"Phone No : "<<phone<<endl;
    	while(true){
    	    //print Menu
			system("\033[34m");
			system("clear");
			this_thread::sleep_for(chrono::milliseconds(500));
			printMenu();
			this_thread::sleep_for(chrono::milliseconds(500));
			cout<<endl;
    	    cout<<"Enter the Id Of the Dish"<<endl;
			this_thread::sleep_for(chrono::milliseconds(500));
    	    int n;
    	    cin>>n;

			if(n == 1) {
				dalfry *ptr = new dalfry;
				if(ptr->status()){
					
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 2) {
				pavbhaji *ptr = new pavbhaji;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 3) {
				cholebhature *ptr = new cholebhature;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 4) {
				prawnscurry *ptr = new prawnscurry;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 5) {
				fishfry *ptr = new fishfry;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 6) {
				paneermasala *ptr = new paneermasala;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 7) {
				biryani *ptr = new biryani;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			else if(n == 8) {
				gulabjamun *ptr = new gulabjamun;
				if(ptr->status()){
					cout<<"Sorry Item Unavailable!"<<endl;
				}
				else {
					bill += dishes[n].second; 
					out<<n<<" "<<dishes[n].first<<" "<<dishes[n].second<<endl;
    	    		cout<<"Order Placed!"<<endl;
				}
			}
			
			else {
				cout<<"Invalid Input!"<<endl;
			}
			
    	    // Remove the item from the inventory
    	    // Display the bill and add to the bill variable
			cout<<endl;
			cout<<"***********************"<<endl;
			cout<<"***********************"<<endl;
    	    cout<<"Do you want to order Again!?"<<endl;
			cout<<endl;
    	    cout<<"1 : Yes"<<endl;
    	    cout<<"Any Other Key : No"<<endl;
			cout<<endl;
			cout<<"***********************"<<endl;
			cout<<"***********************"<<endl;
    	    int n1;
    	    cin>>n1;
			cout<<endl;
    	    if(n1 == 1) continue;
    	    else {
				// cout<<"****************"<<endl;
				revenue+=bill;
				out<<"Total Bill "<<bill;
				// cout<<"****************"<<endl;
				out.close();
				return;

			}      
    	}
		out.close();
	}
	void getBill(){
		ifstream in ("customers/" + name+".txt");
		cout<<"*********BILL**********"<<endl;
		cout<<"***********************"<<endl;
		cout<<endl;
		int k = 0;
		while(in.eof() == 0) {
			string s;
			getline(in, s);
			cout<<s<<endl;
			k++;
			if(k == 2) cout<<endl;

		}
		cout<<endl;
		cout<<"******THANK YOU!*******"<<endl;
		cout<<"***********************"<<endl;
	}
};


int getCustomers(string file){
	ifstream in(file);
	string count;
	int num=0;
	getline(in, count);
	getline(in,count);
	if(count.length() > 0) {
		
		int k=0;
		string num1="";
		for(int i=0; i<count.length(); i++){
			if(k == 2) num1 += count[i];
			else if(count[i] == ' ')  k++;
		}
		// cout<<num1<<endl;
		num = stoi(num1);
	}
	in.close();
	return num;
	
}
int gulabjamun::orders = orderValues("./Analytics/gulabjamun.txt");
int dalfry::orders = orderValues("./Analytics/dalfry.txt");
int prawnscurry::orders = orderValues("./Analytics/prawnscurry.txt");
int cholebhature::orders =  orderValues("./Analytics/cholebhature.txt");
int biryani::orders = orderValues("./Analytics/biryani.txt");
int paneermasala::orders = orderValues("./Analytics/paneermasala.txt");
int fishfry::orders = orderValues("./Analytics/fishfry.txt");
int pavbhaji::orders = orderValues("./Analytics/pavbhaji.txt");
int customer::count = getCustomers("./Analytics/customers.txt");
//FUnctions 
void getData(){
	int total = cholebhature::orders + fishfry::orders+prawnscurry::orders+paneermasala::orders+gulabjamun::orders+biryani::orders+pavbhaji::orders+dalfry::orders;
	ofstream out("./Analytics/dalfry.txt");
    out<<"Total Orders: "<<dalfry::orders<<endl;
	out<<"Avg Orders: "<<dalfry::orders *1.0 / customer::count;
	out.close();
	ofstream out1("./Analytics/pavbhaji.txt");
    out1<<"Total Orders: "<<pavbhaji::orders<<endl;
	out1<<"Avg Orders: "<<pavbhaji::orders *1.0 / customer::count;
	out1.close();
	ofstream out2("./Analytics/biryani.txt");
    out2<<"Total Orders: "<<biryani::orders<<endl;
	out2<<"Avg Orders: "<<biryani::orders *1.0 / customer::count;
	out2.close();
	ofstream out3("./Analytics/gulabjamun.txt");
    out3<<"Total Orders: "<<gulabjamun::orders<<endl;
	out3<<"Avg Orders: "<<gulabjamun::orders *1.0 / customer::count;
	out3.close();
	ofstream out4("./Analytics/paneermasala.txt");
    out4<<"Total Orders: "<<paneermasala::orders<<endl;
	out4<<"Avg Orders: "<<paneermasala::orders *1.0 / customer::count;
	out4.close();
	ofstream out5("./Analytics/prawnscurry.txt");
    out5<<"Total Orders: "<<prawnscurry::orders<<endl;
	out5<<"Avg Orders: "<<prawnscurry::orders *1.0 / customer::count;
	out5.close();
	ofstream out6("./Analytics/fishfry.txt");
    out6<<"Total Orders: "<<fishfry::orders<<endl;
	out6<<"Avg Orders: "<<fishfry::orders *1.0 / customer::count;
	out6.close();
	ofstream out7("./Analytics/cholebhature.txt");
    out7<<"Total Orders: "<<cholebhature::orders<<endl;
	out7<<"Avg Orders: "<<cholebhature::orders *1.0 / customer::count;
	out7.close();
	ofstream out8("./Analytics/customers.txt");
	out8<<"Total Revenue: "<<revenue<<endl;
	out8<<"Total Customers: "<<customer::count<<endl;
	out8<<"Total Orders: "<<total<<endl;
	vector<pair<int,string>> orderSort = {{gulabjamun::orders, "gulabjamun"},{fishfry::orders, "fishfry"}, {prawnscurry::orders, "prawnscurry"}, {pavbhaji::orders, "pavbhaji"}, {dalfry::orders, "dalfry"}, {paneermasala::orders, "paneermasala"}, {cholebhature::orders, "cholebhature"}, {biryani::orders, "biryani"}};
	sort(orderSort.begin(), orderSort.end());
	out8<<"Most Popular Dish: "<<orderSort[7].second<<endl;
	out8<<"Least Popular Dish: "<<orderSort[0].second<<endl;
	out8.close();
	
	
}