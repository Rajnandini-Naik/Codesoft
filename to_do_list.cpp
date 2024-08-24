#include <bits/stdc++.h>
using namespace std;

void add(vector<vector<string>>& v)
{
    char ans='Y';
    while(ans=='Y' || ans=='y')
    {
        string name;
        int com;
        cout<<"\nEnter name of the task: ";
        cin>>name;
        int a=1;
        while(a==1)
        {
            cout<<"\nEnter 1 for Completed, and 0 for incomplete: ";
            cin>>com;
            if(com==0)
                v.push_back({name,"Incomplete"});
            else if(com==1)
                v.push_back({name,"Completed"});
            else
            {
                cout<<"\nInvalid choice.\n";
                continue;
            }
            a=2;
        }
        cout<<"\nWant to add more task? (Y/N) : ";
        cin>>ans;
    }
    cout<<"\nAdded successfully.\n";
}

void display(vector<vector<string>>& v)
{
    cout<<"\nTasks in the list are: \n\n";
    cout<<"Name  :  Status\n\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i][0]<<" = "<<v[i][1]<<endl;
    }
    cout<<endl;
}

int find(vector<vector<string>>& v,string name)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]==name)
            return i;
    }
    return -1;
}

int main()
{
    vector<vector<string>> v;
    cout<<"\n*** Add tasks ***\n";
    add(v);
    char ans='N';
    while(ans!='y' && ans!='Y')
    {
        cout<<"\nEnter 1 for add task."<<endl;
        cout<<"Enter 2 for display tasks."<<endl;
        cout<<"Enter 3 for delete task."<<endl;
        cout<<"Enter 4 for update status."<<endl<<endl;
        int choice;
        cout<<"Enter: ";
        cin>>choice;
        if(choice==1)
        {
            add(v);
        }
        else if(choice==2)
        {
            if(v.empty())
                cout<<"\nList is empty.\n\n";
            else
                display(v);
        }
        else if(choice==3)
        {
            cout<<"\nEnter name of the task you want to delete: ";
            string name;
            cin>>name;
            int x=find(v,name);
            if(x!=-1)
            {
                v.erase(v.begin()+x);
                cout<<"\nDeleted successfully.\n\n";
            }
            else
            {
                cout<<"\nNot exist in the list.\n\n";
            }
        }
        else if(choice==4)
        {
            cout<<"\nEnter name of the task you want to update: ";
            string name;
            cin>>name;
            int x=find(v,name);
            if(x!=-1)
            {
                v[x][1]="Completed";
                cout<<"\nUpdated successfully.\n";
            }
            else
            {
                cout<<"\nNot exist in the list.\n\n";
            }
        }
        else
        {
            cout<<"\nInvalid choice."<<endl;
            continue;
        }
        cout<<"\n##### Want to exit? (Y/N) : ";
        cin>>ans;
    }
    cout<<"\nExit successfully....\n\n";

    return 0;
}