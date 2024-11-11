#include<bits/stdc++.h>
using namespace std;


struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

struct Customer{
    int customerID;
    string name;

}


int main(){
    vector<Product> products={
        {101,"Laptop","Electronics"},
        {101,"Monitor","Electronics"},
        {101,"Coffee Maker","Kitchen"},
        {101,"Blender","Kitchen"},
        {101,"Bed sheet","Home Decoration"},
        {101,"Desk lamp","Room"},
        

    }


deque<string> recentCustomer ={"C001","C002","C003"};

// recentCustomer.push_back("C004");
// recentCustomer.push_front("C005");

list<Order> orderHistory;

orderHistory.push_back(
    {1,101,1,"C001",time(0)};
    {2,102,2,"C002",time(0)};
    {3,103,2,"C002",time(0)};
)

set<string> categories;

for(auto & product : products){
    categories.insert(product.category);
}
 
map<int ,int >productStock ={
    {101,10},
    {102,30},
    {103,10},
    {104,40},
    {105,30},


}


multimap<string ,Order> customerOrders;

for(auto &order :orderHistory){
    customerOrders.insert({order.customerID,order});
}


unordered_map<string ,string>customerData ={
    {"C001","Alice"},
    {"C002","Bob"},
    {"C003","Max"}
    {"C004","Lins"}
    {"C005","Rei"}


}

unordered_set<int> uniqueProductIDs;

for(auto &prod :products){
    uniqueProductIDs.insert(prod.productID);
}


}