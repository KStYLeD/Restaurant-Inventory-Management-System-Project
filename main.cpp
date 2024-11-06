#include <bits/stdc++.h>
#include "classes.cpp"
using namespace std;


float avgOrders(string file){
    ifstream in(file);
    string s;
    string ans = "";
    getline(in,s);
    getline(in,s);
    int k = 0;
    for(int i=0; i<s.length(); i++) {
        if(k==2) ans+= s[i];
        if(s[i] == ' ') k++;
    }
    return stof(ans);
}

// void totalAvgOrdersChecker(){
//     double butter,oil,onions,tomato,fish,prawns,veggies,milk,spices,lentils,pav,rice,ginger,garlic,chilly,flour,sugar;
//     float avggulab =  avgOrders("./Analytics/gulabjamun.txt");
//     float avgbiryani =  avgOrders("./Analytics/biryani.txt");
//     float avgcholebhature =  avgOrders("./Analytics/cholebhature.txt");
//     float avgdalfry =  avgOrders("./Analytics/dalfry.txt");
//     float avgfishfry =  avgOrders("./Analytics/fishfry.txt");
//     float avgpaneermasala =  avgOrders("./Analytics/paneermasala.txt");
//     float avgprawnscurry =  avgOrders("./Analytics/prawnscurry.txt");
//     float avgpavbhaji =  avgOrders("./Analytics/pavbhaji.txt");
//     butter = avggulab * (gulabjamun::ing.butter) + avgbiryani * (biryani::ing.butter) + avgfishfry * fishfry::ing.butter + avgcholebhature* cholebhature::ing.butter + avgpaneermasala * paneermasala::ing.butter + avgpavbhaji * pavbhaji::ing.butter + avgprawnscurry * prawnscurry::ing.butter;

//     oil = avgdalfry * dalfry::ing.oil;

//     onions = avgbiryani * biryani::ing.onions + avgcholebhature * cholebhature::ing.onions + avgdalfry * dalfry::ing.onions + avgfishfry * fishfry::ing.onions + avgpaneermasala * paneermasala::ing.onions + avgpavbhaji * pavbhaji::ing.onions + avgprawnscurry + prawnscurry::ing.onions;

//     tomato = avgbiryani * biryani::ing.tomato;
//     fish = avgfishfry * fishfry::ing.fish;
//     prawns = avgprawnscurry * prawnscurry::ing.prawns;
//     veggies = avgbiryani * biryani::ing.veggies + avgpaneermasala * paneermasala::ing.veggies + avgpavbhaji * pavbhaji::ing.veggies;
//     milk = avggulab * gulabjamun::ing.milk;
//     spices = avgbiryani * biryani::ing.spices + avgcholebhature * cholebhature::ing.spices + avgdalfry * dalfry::ing.spices + avgfishfry * fishfry::ing.spices + avgpaneermasala * paneermasala::ing.spices + avgpavbhaji * pavbhaji::ing.spices + avgprawnscurry * prawnscurry::ing.spices;
//     flour = avgcholebhature * cholebhature::ing.flour + avggulab * gulabjamun::ing.flour;
//     sugar = avggulab * gulabjamun::ing.sugar;
//     lentils = avgdalfry * dalfry::ing.lentils;
//     pav = avgdalfry * pavbhaji::ing.pav;
//     rice = avgbiryani * biryani::ing.rice;
//     ginger = avgbiryani * biryani::ing.ginger + avgcholebhature * cholebhature::ing.ginger * avgdalfry * dalfry::ing.ginger + avgfishfry * fishfry::ing.ginger + avgpaneermasala * paneermasala::ing.ginger + avgpavbhaji * pavbhaji::ing.ginger + avgprawnscurry * prawnscurry::ing.ginger;
//     garlic = avgbiryani * biryani::ing.garlic + avgcholebhature * cholebhature::ing.garlic + avgdalfry * dalfry::ing.garlic + avgfishfry * fishfry::ing.garlic + avgfishfry * fishfry::ing.garlic + avgpaneermasala * paneermasala::ing.garlic + avgpavbhaji * pavbhaji::ing.garlic + avgprawnscurry * prawnscurry::ing.garlic;
//     chilly = avgdalfry * dalfry::ing.chilly;
//     int f = 0;
//     vector<string> empty;
//     for(int i=1; i<=inventory.size(); i++){
//             if(inventory[i].first == "tomato") {
//                 if(inventory[i].second < tomato){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "onions") {
//                 if(inventory[i].second < onions){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "butter") {
//                 if(inventory[i].second < butter){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "oil") {
//                 if(inventory[i].second < oil){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "lentils") {
//                 if(inventory[i].second < lentils){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "pav") {
//                 if(inventory[i].second < pav){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "fish") {
//                 if(inventory[i].second < fish){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "prawns") {
//                 if(inventory[i].second < prawns){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "spices") {
//                 if(inventory[i].second < spices){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "rice") {
//                 if(inventory[i].second < rice){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "garlic") {
//                 if(inventory[i].second < garlic){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "ginger") {
//                 if(inventory[i].second < ginger){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "veggies") {
//                 if(inventory[i].second < veggies){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "milk") {
//                 if(inventory[i].second < milk){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "chilly") {
//                 if(inventory[i].second < chilly){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "flour") {
//                 if(inventory[i].second < flour){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//             if(inventory[i].first == "sugar") {
//                 if(inventory[i].second < sugar){
//                     f = 1;
//                     empty.push_back(inventory[i].first);

//                 }
//             }
//     }
//     if(empty.size() == 0) {
//         cout<<"Inventory is in good shape!"<<endl;
//     }
//     else {
//         cout<<"The stock of the following orders are below the avg requirement : "<<endl;
//         cout<<endl;
//         for(auto &it : empty){
//             cout<<it<<endl;
//         }
//     }
// }
// // double totalAvgOrders = totalAvgOrdersChecker();





int main(){
    getDishes("dishes.txt");
    getInventory("inventory.txt");
    int k_sec =0;
    system("clear");
    system("\033[35m");
    while(true){
        // system("\033[35m");
        system("clear");
        cout<<"Name: Kaustubh Deshmukh"<<endl;
        // this_thread::sleep_for(chrono::milliseconds(500));
        // system("\033[32m");
        cout<<"Roll No: 24MCF1R20"<<endl;
        // this_thread::sleep_for(chrono::milliseconds(500));
        // system("\033[33m");
        cout<<"PSP Project"<<endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        system("\033[34m");
        system("clear");
        this_thread::sleep_for(chrono::milliseconds(1000));
        if(k_sec == 1) {
            system("\033[32m");
            system("clear");
            break;
        }
        k_sec++;
    }
    while(true){

        cout<<"Progress: [";
        for(int i=0; i<k_sec; i++){
            cout<<"*";
        }
        cout<<"]  "<<k_sec * 10<<"%"<<flush;
        this_thread::sleep_for(chrono::milliseconds(400));
        system("clear");
        if(k_sec == 10) {
            system("clear");
            // cout<<"*****************************"<<endl;
            cout<<"WELCOME TO THE HOTEL HELL!"<<endl;

            // cout<<"*****************************"<<endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            cout<<"ENJOY!!"<<endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
            break;

        };
        k_sec++;

    }
    
    while(true){
            system("\033[32m");
            system("clear");
            cout<<"********************************"<<endl;
            cout<<"********************************"<<endl;
            cout<<"***                          ***"<<endl;
            cout<<"*** Welcome to My Restaurant ***"<<endl;
            cout<<"***                          ***"<<endl;
            cout<<"***      1 : Customer        ***"<<endl;
            cout<<"***      2 : Admin           ***"<<endl;
            cout<<"***      3 : Exit            ***"<<endl;
            cout<<"***                          ***"<<endl;
            cout<<"********************************"<<endl;
            cout<<"********************************"<<endl;        
            int n;
            cin>>n;
            // cin.ignore();
            
        if(n == 1) {
            customer *ptr = new customer;
            
            while(true){
                system("clear");
                cout<<"********************************"<<endl;
                cout<<"********************************"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"*** Welcome to My Restaurant ***"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"***      1 : Order           ***"<<endl;
                cout<<"***      2 : Menu            ***"<<endl;
                cout<<"***      3 : Exit            ***"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"********************************"<<endl;
                cout<<"********************************"<<endl;
                int n1;
                cin>>n1;
                if(n1 == 1) {
                    ptr->ordered  = true;
                    cout<<endl;
                    cout<<endl;
                    printMenu();
                    cout<<endl;
                    cout<<endl;
                    ptr->order();
                    cout<<endl; 
                    system("\033[33m");
                    system("clear");  
                    this_thread::sleep_for(chrono::milliseconds(500));                 
                    ptr->getBill();
                    printInv();
                    getData();
                    this_thread::sleep_for(chrono::milliseconds(500));
                    exit(0);
                }
                else if(n1 == 2) {
                    system("\033[34m");
                    system("clear");
                    this_thread::sleep_for(chrono::milliseconds(500));
                    cout<<endl;

                    printMenu();
                    cout<<endl;
                    this_thread::sleep_for(chrono::milliseconds(100));
                    cout<<"Press Any Key To continue"<<endl;
                    
                    
                    char r;
                    cin>>r;
                    system("\033[32m");
                    system("clear");
                    continue;
                    //Display the menu
                }
                else if(n1 == 3) {
                    if(ptr->ordered)ptr->getBill();
                    else {
                        system("\033[33m");
                        system("clear");
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout<<"***********************"<<endl;
                        cout<<"***********************"<<endl;
                        cout<<endl;
                        cout<<"No Bill generated!"<<endl;
                        cout<<endl;
                        cout<<"******THANK YOU!*******"<<endl;
                        cout<<"***********************"<<endl;
                        this_thread::sleep_for(chrono::milliseconds(500));
                        }
                    // cout<<"Thank You!"<<endl;
                    // cout<<endl;
                    // cout<<"***********************"<<endl;
                    // cout<<"***********************"<<endl;
                    printInv();
                    exit(0);
                    break;
                }
                else cout<<"Please Enter the valid input!"<<endl;
            }
        }
        else if(n == 2){
            while (true){
                system("\033[36m");
                system("clear");
                cout<<"********************************"<<endl;
                cout<<"********************************"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"***     Welcome Admin!       ***"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"***   1 : Check Stock        ***"<<endl;
                cout<<"***   2 : Update Stock       ***"<<endl;
                cout<<"***   3 : Important Updates  ***"<<endl;
                cout<<"***   3 : (Not Implemented!) ***"<<endl;
                cout<<"***   4 : Analytics          ***"<<endl;
                cout<<"***   5 : Exit               ***"<<endl;
                cout<<"***                          ***"<<endl;
                cout<<"********************************"<<endl;
                cout<<"********************************"<<endl;

                cout<<"Enter the number of the operation"<<endl;
                int n2;
                // cin.ignore();
                cin>>n2;
                // cout<<"n2 is "<<n2<<" type: "<<endl;
                cout<<endl;
                if(n2 == 1) {
                    system("\033[34m");
                    system("clear");
                    this_thread::sleep_for(chrono::milliseconds(500));
                    cout<<"********STOCK**********"<<endl;
                    cout<<"***********************"<<endl;
                    cout<<endl;
                    for(int i=1; i<inventory.size(); i++){
                        cout<<i<<" "<<inventory[i].first<<" "<<inventory[i].second<<endl;
                    }
                    cout<<endl;
                    cout<<"***********************"<<endl;
                    cout<<"***********************"<<endl;
                    cout<<endl;
                    this_thread::sleep_for(chrono::milliseconds(1000));
                    cout<<"Press any key to continue!"<<endl;
                    this_thread::sleep_for(chrono::milliseconds(500));

                    string nq;
                    cin>>nq;
                    system("\033[32m");
                    system("clear");
                    continue;

                }
                else if(n2==2){
                    while (true){
                        system("\033[35m");
                        system("clear");
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout<<"********STOCK**********"<<endl;
                        cout<<"***********************"<<endl;
                        cout<<endl;
                        for(int i=1; i<inventory.size(); i++){
                            cout<<i<<" "<<inventory[i].first<<" "<<inventory[i].second<<endl;
                        }
                        cout<<endl;
                        cout<<"***********************"<<endl;
                        cout<<"***********************"<<endl;
                        cout<<endl;
                        this_thread::sleep_for(chrono::milliseconds(1000));
                        cout<<"Enter the Id of the item to update"<<endl;
                        int id;
                        cin>>id;
                        // cout<<endl;
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout<<"Enter the Updated value"<<endl;
                        float a;
                        cin>>a;
                        cout<<endl;
                        inventory[id].second = a;
                        system("\033[33m");
                        system("clear");
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout<<"****Updated the Inventory****"<<endl;
                        this_thread::sleep_for(chrono::milliseconds(500));

                        // printInv();
                        system("\033[32m");
                        system("clear");
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout<<"***********************"<<endl;
                        cout<<"DO you want to continue updating?"<<endl;
                        cout<<"1 : Yes"<<endl;
                        cout<<"Any other key : NO"<<endl;
                        cout<<"***********************"<<endl;
                        this_thread::sleep_for(chrono::milliseconds(500));
                        int check;
                        cin>>check;
                        if(check == 1) {
                            system("\033[35m");
                            system("clear");
                            continue;
                        }
                        else {  printInv();cin.ignore();system("\033[32m");system("clear");break;};
                        // break;
                    }
                }
                else if(n2==3){
                    system("\033[36m");
                    system("clear");
                    cout<<"***********************"<<endl;
                    cout<<endl;
                    cout<<"Work In Progress!"<<endl;
                    cout<<endl;
                    cout<<"***********************"<<endl;
                    this_thread::sleep_for(chrono::milliseconds(1000));
                    cout<<"Press any key to continue!"<<endl;
                    string sq;
                    cin>>sq;
                    system("\033[32m");
                    system("clear");
                    // totalAvgOrdersChecker();
                    // cin.ignore();

                }
                else if(n2==4){
                    system("\033[33m");
                    system("clear");
                    this_thread::sleep_for(chrono::milliseconds(700));
                    cout<<"***********************"<<endl;
                    cout<<"***********************"<<endl;
                    cout<<endl;
                    cout<<"ANALYTICS DASHBOARD"<<endl;
                    cout<<endl;
                    ifstream in("./Analytics/customers.txt");
                    while(in.eof() == 0){
                        string s;
                        getline(in,s);
                        cout<<s<<endl;
                    }
                    cout<<endl;
                    cout<<"***********************"<<endl;
                    cout<<"***********************"<<endl;
                    this_thread::sleep_for(chrono::milliseconds(1000));
                    cout<<"Press any key to continue"<<endl;
                    char r;
                    cin>>r;
                    system("\033[32m");
                    system("clear");

                }
                else if (n2 == 5) break;
                else {cout<<"Please ENter the valid Input!"<<endl;}
            }
        }
        else if(n == 3) {
            int k = 0;
            while(true){
                
                // system("\033[34m");
                system("clear");
                cout<<"***********************"<<endl;

                cout<<"******Thank You!*******"<<endl;

                cout<<"***********************"<<endl;

                this_thread::sleep_for(chrono::milliseconds(500));
                
                system("\033[33m");
                system("clear");
                this_thread::sleep_for(chrono::milliseconds(500));
                if(k == 1) break;
                k++;

            }

            // ptr->getBill();
            exit(0);
            break;
        }   
        else {
            cout<<"***********************"<<endl;
            cout<<"Invalid input!"<<endl;
            cout<<"***********************"<<endl;
            cout<<"Press any key to continue!"<<endl;
            char t;
            cin>>t;
        }

    }

}