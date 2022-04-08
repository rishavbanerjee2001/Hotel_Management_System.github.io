#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    // Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0,Qnoodles = 0, Qshake = 0,Qchicken = 0;
    //food iems sold
    int Srooms = 0,Spasta = 0,Sburger = 0,Snoodles = 0,Schicken = 0, Sshake = 0;
    //Total Price of items
    int Total_rooms=0, Total_pasta = 0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t Quantities of items we have";
    cout<<"\n Rooms available:";
    cin >> Qrooms;
    cout<<"\n Quantity of Pasta :";
    cin >> Qpasta;
    cout<<"\n Quantity of Burger :";
    cin >> Qburger;
    cout<<"\n Quantity of Noodles :";
    cin >> Qnoodles;
    cout<<"\n Quantity of Shake :";
    cin >> Qshake;
    cout<<"\n Quantity of chicken-roll :";
    cin >> Qchicken;
    
    m:
    cout<<"\n \t \t \t Please select from the given menu options :";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken-roll";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice! ";
    cout<<"\n\n ------------------------- ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms u want :";
            cin >> quant;
            if(Qrooms - Srooms >= quant){
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + (quant *1200);
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            }
            else{
                cout<<"\n\tOnly "<<Qrooms - Srooms<<"Rooms remaining in hotel";
                
            }
            break;
         case 2:
             cout<<"\n\n Enter the Pasta quantity :";
            cin >> quant;
            if(Qpasta - Spasta >= quant){
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + (quant *250);
                cout<<"\n\n\t\t"<<quant<<"pasta/pastas u have ordered!";
            }
            else{
                cout<<"\n\tOnly"<<Qpasta- Spasta<<"pastas remaining in hotel";
                
            }
            break; 

            case 3:
            cout<<"\n\n Enter the number of burgers u want :";
            cin >> quant;
            if(Qburger - Sburger >= quant){
                Sburger = Sburger + quant;
                Total_burger = Total_burger + (quant *120);
                cout<<"\n\n\t\t"<<quant<<"burgers u have ordered!";
            }
            else{
                cout<<"\n\tOnly"<<Qburger - Sburger<<"burgers remaining in hotel";
                
            }
            break;  

            case 4:
             cout<<"\n\n Enter the number of noodles u want :";
            cin >> quant;
            if(Qnoodles - Snoodles >= quant){
                Snoodles = Snoodles + quant;
                Total_noodles = Total_noodles + (quant *140);
                cout<<"\n\n\t\t"<<quant<<"noodles u have ordered!";
            }
            else{
                cout<<"\n\tOnly"<<Qnoodles - Snoodles<<"noodles remaining in hotel";
                
            }
            break;


            case 5:
             cout<<"\n\n Enter the number of shake u want :";
            cin >> quant;
            if(Qshake - Sshake >= quant){
                Sshake = Sshake + quant;
                Total_shake = Total_shake + (quant *120);
                cout<<"\n\n\t\t"<<quant<<"shake u have ordered!";
            }
            else{
                cout<<"\n\tOnly"<<Qshake - Sshake<<"shake remaining in hotel";
                
            }
            break;


            case 6:
             cout<<"\n\n Enter the number of chicken-rolls u want :";
            cin >> quant;
            if(Qchicken - Schicken >= quant){
               Schicken =Schicken + quant;
                Total_chicken = Total_chicken + (quant *150);
                cout<<"\n\n\t\t"<<quant<<"chickens u have ordered!";
            }
            else{
                cout<<"\n\tOnly"<<Qchicken - Schicken<<"chickens remaining in hotel";
                
            }
            break;

            
            case 7:
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\t\t------------------------------- ";
            cout<<"\n\n Number of rooms we had :"<<Qrooms;
            cout<<"\n\n Number of room we gave for rent :"<<Srooms;
            cout<<"\n\n Remaining rooms: "<<Qrooms - Srooms;
            cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

             cout<<"\n\n Number of pastas we had :"<<Qpasta;
            cout<<"\n\n Number of pastas sold :"<<Spasta;
            cout<<"\n\n Remaining pastas: "<<Qpasta - Spasta;
            cout<<"\n\n Total rooms collection for the day : "<<Total_pasta;

             cout<<"\n\n Number of burgers we had :"<<Qburger;
            cout<<"\n\n Number of burgers sold :"<<Sburger;
            cout<<"\n\n Remaining burgers: "<<Qburger - Sburger;
            cout<<"\n\n Total burger collection for the day : "<<Total_burger;

            cout<<"\n\n Number of noodles we had :"<<Qnoodles;
            cout<<"\n\n Number of noodles sold :"<<Snoodles;
            cout<<"\n\n Remaining noodles: "<<Qnoodles - Snoodles;
            cout<<"\n\n Total noodle collection for the day : "<<Total_noodles;
            
            cout<<"\n\n Number of shakes we had :"<<Qshake;
            cout<<"\n\n Number of shakes sold :"<<Sshake;
            cout<<"\n\n Remaining shakes: "<<Qshake - Sshake;
            cout<<"\n\n Total shake collection for the day : "<<Total_shake;

            cout<<"\n\n Number of chicken-roll we had :"<<Qchicken;
            cout<<"\n\n Number of chicken-roll sold :"<<Schicken;
            cout<<"\n\n Remaining chicken-roll: "<<Qchicken - Schicken;
            cout<<"\n\n Total chicken-roll collection for the day : "<<Total_chicken;

            cout<<"\n\n\n Total collection for the day : Rs. "<<Total_rooms+Total_burger+Total_pasta+Total_noodles+Total_shake+Total_chicken;

            break;

             

            case 8:
              exit(0);

             default:
             cout<<"Plz select the numbers mentioned above!"<<endl; 
    }
    goto m;  // transfer the control to the menun after making a choice to make the next choice.

}