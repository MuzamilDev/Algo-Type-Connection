#include<iostream>
using namespace std;

void showMenue()
{

    cout<<" Which Type of Algoritam You Type "<<endl;
    cout<<"1.MAC-BOOK AIR "<<endl;
    cout<<"2.MACBOOK PRO "<<endl;
    cout<<"3.HP SPECTRE X360 "<<endl;
    cout<<"4.ASUS ROG ZEPHYRUS G15 "<<endl;
    cout<<"5.DELL XP 13 "<<endl;
    cout<<"6.EXIT "<<endl;
}

int main()
{

    int option;

    do{
        showMenue();
        cout<<"Option: "<<endl;
        cin>>option;

        system("cls");


    switch(option)
    {

        case 1:cout<<" Display 13.3 "<<endl;
               cout<<" Bttery upto 15 Hour "<<endl;
               cout<<" 16GB RAM & 512GB SSD "<<endl;
               cout<<" Core i7 "<<endl;
               cout<<" Price $999 "<<endl;
        break;

        case 2: cout<<" Display 13 "<<endl;
		        cout<<" 8GB RAM "<<endl;
                cout<<" 256GB SSD TO 1TB "<<endl;
                cout<<" 17 Hour Battery "<<endl;
                cout<<" Core i8 "<<endl;
                cout<<" Price $1299 "<<endl;
        break;

        case 3: cout<<" Display 13.5 "<<endl;
		        cout<<" 16GB RAM "<<endl;
                cout<<" COREI7 & 512GB SSD "<<endl;
                cout<<" GENERATION 12 "<<endl;
                cout<<" PRICE $1249.99 "<<endl;
        
        
        break;

        case 4: cout<<" Display 16.6 "<<endl;
		        cout<<" Core i8"<<endl;
                cout<<" 16GB Installed RAM "<<endl;
                cout<<" 1TB SSD "<<endl;
                cout<<" Generation AMD & Price $1795 "<<endl;
        break;

        case 5: cout<<" Display 13.4 "<<endl;
		        cout<<" Generation 12 "<<endl;
                cout<<" Model 13 & Processor Core i5 "<<endl;
                cout<<" 8GB Ram & 512 GB SSD  "<<endl;
                cout<<" Price $1249 "<<endl;
        break;

    }
    }
    while(option != 6);



    return 0;
}
