/*
This program is a menu driven program in which user can select the choices what he/she wants to view.
##############################
External level code logic:
1. Inverters/Methods > 
        - PCU (SOLAR)
        - GTI (SOLAR)
        - Zelio
        - Regalia (SOLAR)
        - iCruze 
2. Properties of each method/Inverter > 
        - Power_rating = current * operating_voltage
        - Non-Solar Inverters: ZELIO, iCruze
                > Have Battery
        - SOLAR INVERTERS: PCU, GTI, REGALIA
                > solar_panels
                > solar Energy
                > Grid_on_or_off
                        ~ Grid_on > GTI
                        ~ Grid_off > PCU
                >Two Version:
                        ~ SOlar_with_Battery > Stores Energy e.g. PCU
                        ~ Solar_without_Battery > Don't store energy/ stores nothing e.g. GTI
*/

#include<bits/stdc++.h>
using namespace std;

class Inverters{
    private:
        float current, operating_voltage;
    protected:
        bool battery;
        bool is_solar;
    public:
        friend class Driver;

        //Setting the values of current & operating_voltage
        void set_power_rating_vars(){
            cout<<"Enter the value of current:               ";
            cin>>current;
            cout<<"Enter the value of operating voltage:     ";
            cin>>operating_voltage;
        }

        //Getting the power_rating value of the inverter
        void get_power_rating(){
            cout<<"Power Rating:                             "<<current * operating_voltage<<endl;
        }
};

//Inherited class as: Solar < Inverters
class Solar : public Inverters{
    protected:
        bool grid_on;
        bool solar_panels = true;
    public:
        void Regalia(){
            is_solar = true;
            cout<<"\nPrinting the details of Regalia:      \n"<<endl;
            set_power_rating_vars();
            get_power_rating();
            cout<<"Inverter is solar? (0=N, 1=Yes):          "<<is_solar<<endl;
            cout<<"Solar Panels availability (0=No, 1=Yes):  "<<solar_panels<<endl;
        } 
};

//Inherited class as: SolarWithBattery < Solar < Inverters
class SolarWithBattery : public Solar{
    public:
        void PCU(){
            grid_on = true;
            battery = true;
            is_solar = true;
            cout<<"\nPrinting the details of PCU:          \n"<<endl;
            set_power_rating_vars();
            get_power_rating();
            cout<<"Inverter is solar? (0=No, 1=Yes):         "<<is_solar<<endl;
            cout<<"Solar Panels availability (0=No, 1=Yes):  "<<solar_panels<<endl;
            cout<<"Battery Power Availability (0=No, 1=Yes): "<<battery<<endl;
            cout<<"Grid on/off (0=No, 1=Yes):                "<<grid_on<<endl;
        } 
};

//Inherited class as: SolarWithoutBattery < Solar < Inverters
class SolarWithoutBattery : public Solar{
    public:
        void GTI(){
            is_solar = true;
            grid_on = false;
            battery = false;
            cout<<"\nPrinting the details of GTI:\n"<<endl;
            set_power_rating_vars();
            get_power_rating();
            cout<<"Solar Panels availability (0=No, 1=Yes):  "<<solar_panels<<endl;
            cout<<"Battery Power Availability (0=No, 1=Yes): "<<battery<<endl;
        } 
};

//Inherited class as: NonSolar < Inverters
class NonSolar : public Inverters{
    public:
        void Zelio(){
            is_solar = false;
            battery = true;
            cout<<"\nPrinting the details of Zelio: \n"<<endl;
            set_power_rating_vars();
            get_power_rating();
            cout<<"Inverter is solar? (0=No, 1=Yes):         "<<is_solar<<endl;
            cout<<"Battery Power Availability (0=No, 1=Yes): "<<battery<<endl;
        } 

        void iCruze(){
            battery = true;
            is_solar = false;
            cout<<"\nPrinting the details of iCruze: \n"<<endl;
            set_power_rating_vars();
            get_power_rating();
            cout<<"Inverter is solar? (0=No, 1=Yes):         "<<is_solar<<endl;
            cout<<"Battery Power Availability (0=No, 1=Yes): "<<battery<<endl;
        } 
};

//Friend class of Inverter class
//Multiple inherited from: SolarWithBattery, SolarWithoutBattery, NonSolar
class Driver : public SolarWithBattery, public SolarWithoutBattery, public NonSolar{
    private:
        int inverter_number;
        int ask_solar;
    public:
        void ask_bot(){
            //Menu-Driven Code
            while(true){
                cout<<"\nEnter your choice as a number:\n1 for solar\n2 for non_solar\n0 for exit.\n";
                cin>>ask_solar;

                if(ask_solar == 0){
                    exit(0);
                }

                else if(ask_solar == 1){
                    cout<<"\nSelect the number of the inverter you want to see info of: \n1. PCU \n2. GTI \n3. Regalia.\n";
                    cin>>inverter_number;

                    if(inverter_number == 1){
                        PCU();
                    }
                    else if(inverter_number == 2){
                        GTI();
                    }
                    else if(inverter_number == 3){
                        Solar s;
                        s.Regalia();
                    }
                    else{
                        cout<<"Select a number in choices range."<<endl;
                    }
                }

                else if(ask_solar == 2){
                    cout<<"\nSelect the number of the inverter you want to see info of: \n1. Zelio  \n2. iCruze.\n";
                    cin>>inverter_number;

                    if(inverter_number == 1){
                        Zelio();
                    }
                    else if(inverter_number == 2){
                        iCruze();
                    }
                    else{
                        cout<<"Select a number in choices range."<<endl;
                    }
                }

                else{
                        cout<<"Select a number in choices range."<<endl;
                        ask_bot();
                }
                

            }  
        }
};

//Main
int main(){
    Driver drive;
    drive.ask_bot();
}

