#include<bits/stdc++.h>
using namespace std;
class Payment{
    public:
    int mess_food = 60000, mess_store_purchase_card = 10000, Hostel_room = 250000, Laundry=4700;
    int Google_Pay(string UserName){
        cout << "\n\n\t\t\t\t G O O G L E \t P A Y \n\n" << endl;
        int p1,p2,p3,p4,sum = 0;
        p1 = 0;p2 = 0;p3 = 0;p4 = 0;
        cout << "\n\n\t\tDo you wanna pay for Mess food?:";
        cin>>p1;
        if(p1) sum += mess_food;
        cout << "\n\n\t\tDo you wanna pay for Mess_store_card?:";
        cin>>p2;
        if(p2) sum += mess_store_purchase_card;
        cout << "\n\n\t\tDo you wanna pay for Hostel room(1Sharing):";
        cin>>p3;
        if(p3) sum += Hostel_room;
        cout << "\n\n\t\tDo you wanna pay for Laundry(1Year):";
        cin>>p4;
        if(p4) sum += Laundry;
        cout << "\n\n\t\t\t\tThanks for Choosing your needs!";

        if(p1){
            cout << "\n\n\t\tMess Food (Rs.60000)!" << endl;
        }
        if(p2){
            cout << "\n\n\t\tMess Store Card(Rs.10000)!"<<endl;
        }
        if(p3){
            cout << "\n\n\t\tHostel room(Rs.250000)!" << endl;
        }
        if(p4){
            cout << "\n\n\t\tLaundry(Rs.4700)!" << endl;
        }
        int confirm_payment;
        cout <<"\n\n\t\tTotal amount to pay is "<<sum <<"!"<<endl;
        string gpay;
        once_more:
        cout <<"\n\n\t\tEnter Google Pay Number:";
        cin>>gpay;
        if(gpay.size() != 10){
            int f = 0;
            for(auto ch : gpay){
                if(!isdigit(ch)){
                    f = 1;
                    break;
                }
            }
            if(f){
                cout << "\n\n\t\t\t\tI N V A L I D \tN U M B E R" << endl;
                cout << "\n\n\t\t\tOnly numbers allowed!"<<endl;
            }
            cout << "Number should Contain TEN digits!" << endl;
            int try_again;
            cout << "Do you wanna try again? 1.Yes 2.No:";
            cin>>try_again;
            if(try_again == 1){
                goto once_more;
            }else{
                cout << "P A Y M E N T \tC A N C E L L E D\t S U C C E S S F U L L Y!" << endl;
                return 0;
            }
        }
        Come_ON:
        string pwd;
        cout <<"\n\n\t\tEnter Your Password:";
        cin>>pwd;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!file.eof()){
            string user_name,pwd1,category;
            file>>user_name>>pwd1>>category;
            if(user_name == UserName){
                if(pwd == pwd1){
                    cout<<"\n\t\tA C C E S S \t\t A L L O W E D"<<endl;
                }else{
                    cout << "\n\t\tA C C E S S \t\t D E N I E D" << endl;
                    int process;
                    cout << "Do you wanna end the process 1.YES 2.NO:";
                    cin>>process;
                    if(process == 1){
                        file.close();
                        return 0;
                    }else{
                        file.close();
                        goto Come_ON;
                    }
                }
            }
        }
        cout <<"\n\n\t\tConfirm Payment 1.YES 2.NO :";
        cin>>confirm_payment;
        if(confirm_payment == 1){
            fstream file;
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/PaymentHistory.txt",ios::app);
            file<<UserName<<" ";
            if(p1){
                file<<mess_food<<" ";
            }else{
                file << "-" << " ";
            }
            if(p2){
                file<<mess_store_purchase_card<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Hostel_room<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Laundry<<" ";
            }else{
                file << "-" << " ";
            }
            file<< "Google_Pay" << " " << gpay << " "<<"TRANSACTION_SUCCESSFULL" << endl;
            file.close();
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Mess.txt",ios::app);
            file << UserName << endl;
            file.close();
            cout << "T R A N S A C T I O N \tD O N E \tS U C C E S S F U L L Y!" << endl;
            return 0;
        }else{
            return 1;
        }

    }
    int Paytm(string UserName){
        cout << "\n\n\t\t\t\t\t P A Y T M\n\n" << endl;
        int p1,p2,p3,p4,sum = 0;
        p1 = 0;p2 = 0;p3 = 0;p4 = 0;
        cout << "\n\n\t\tDo you wanna pay for Mess food?:";
        cin>>p1;
        if(p1) sum += mess_food;
        cout << "\n\n\t\tDo you wanna pay for Mess_store_card?:";
        cin>>p2;
        if(p2) sum += mess_store_purchase_card;
        cout << "\n\n\t\tDo you wanna pay for Hostel room(1Sharing):";
        cin>>p3;
        if(p3) sum += Hostel_room;
        cout << "\n\n\t\tDo you wanna pay for Laundry(1Year):";
        cin>>p4;
        if(p4) sum += Laundry;
        cout << "\n\n\t\t\t\tThanks for Choosing your needs!";

        if(p1){
            cout << "\n\n\t\tMess Food (Rs.60000)!" << endl;
        }
        if(p2){
            cout << "\n\n\t\tMess Store Card(Rs.10000)!"<<endl;
        }
        if(p3){
            cout << "\n\n\t\tHostel room(Rs.250000)!" << endl;
        }
        if(p4){
            cout << "\n\n\t\tLaundry(Rs.4700)!" << endl;
        }
        int confirm_payment;
        cout <<"\n\n\t\tTotal amount to pay is "<<sum <<"!"<<endl;
        string gpay;
        once_more:
        cout <<"\n\n\t\tEnter Paytm Number:";
        cin>>gpay;
        if(gpay.size() != 10){
            if(!isdigit(stoi(gpay))){
                cout << "\n\n\t\t\t\tI N V A L I D \tN U M B E R" << endl;
                cout << "\n\n\t\t\tOnly numbers allowed!"<<endl;
            }
            cout << "Number should Contain TEN digits!" << endl;
            int try_again;
            cout << "Do you wanna try again? 1.Yes 2.No:";
            cin>>try_again;
            if(try_again == 1){
                goto once_more;
            }else{
                cout << "P A Y M E N T \tC A N C E L L E D\t S U C C E S S F U L L Y!" << endl;
                return 0;
            }
        }
        Come_ON:
        string pwd;
        cout <<"\n\n\t\tEnter Your Password:";
        cin>>pwd;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!file.eof()){
            string user_name,pwd1,category;
            file>>user_name>>pwd1>>category;
            if(user_name == UserName){
                if(pwd == pwd1){
                    cout<<"\n\t\tA C C E S S \t\t A L L O W E D"<<endl;
                }else{
                    cout << "\n\t\tA C C E S S \t\t D E N I E D" << endl;
                    int process;
                    cout << "Do you wanna end the process 1.YES 2.NO:";
                    cin>>process;
                    if(process == 1){
                        file.close();
                        return 0;
                    }else{
                        file.close();
                        goto Come_ON;
                    }
                }
            }
        }
        cout <<"\n\n\t\tConfirm Payment 1.YES 2.NO :";
        cin>>confirm_payment;
        if(confirm_payment == 1){
            fstream file;
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/PaymentHistory.txt",ios::app);
            file<<UserName<<" ";
            if(p1){
                file<<mess_food<<" ";
            }else{
                file << "-" << " ";
            }
            if(p2){
                file<<mess_store_purchase_card<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Hostel_room<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Laundry<<" ";
            }else{
                file << "-" << " ";
            }
            file<< "Paytm" << " " << gpay << " "<<"TRANSACTION_SUCCESSFULL" << endl;
            file.close();
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Mess.txt",ios::app);
            file << UserName << endl;
            file.close();
            cout << "T R A N S A C T I O N \tD O N E \tS U C C E S S F U L L Y!" << endl;
            return 0;
        }else{
            return 1;
        }
    }
    int Debit_Credit_Card(string UserName){
        cout << "\n\n\t\t\t D E B I T / C R E D I T\n\n"<<endl;
        int p1,p2,p3,p4,sum = 0;
        p1 = 0;p2 = 0;p3 = 0;p4 = 0;
        cout << "\n\n\t\tDo you wanna pay for Mess food?:";
        cin>>p1;
        if(p1) sum += mess_food;
        cout << "\n\n\t\tDo you wanna pay for Mess_store_card?:";
        cin>>p2;
        if(p2) sum += mess_store_purchase_card;
        cout << "\n\n\t\tDo you wanna pay for Hostel room(1Sharing):";
        cin>>p3;
        if(p3) sum += Hostel_room;
        cout << "\n\n\t\tDo you wanna pay for Laundry(1Year):";
        cin>>p4;
        if(p4) sum += Laundry;
        cout << "\n\n\t\t\t\tThanks for Choosing your needs!";

        if(p1){
            cout << "\n\n\t\tMess Food (Rs.60000)!" << endl;
        }
        if(p2){
            cout << "\n\n\t\tMess Store Card(Rs.10000)!"<<endl;
        }
        if(p3){
            cout << "\n\n\t\tHostel room(Rs.250000)!" << endl;
        }
        if(p4){
            cout << "\n\n\t\tLaundry(Rs.4700)!" << endl;
        }
        int confirm_payment;
        cout <<"\n\n\t\tTotal amount to pay is "<<sum <<"!"<<endl;
        string Card_number;
        once_more:
        cout <<"\n\n\t\tEnter Your Card Number:";
        cin>>Card_number;

        if(Card_number.size() != 10){
            if(!isdigit(stoi(Card_number))){
                cout << "\n\n\t\t\t\tI N V A L I D \tN U M B E R" << endl;
                cout << "\n\n\t\t\tOnly numbers allowed!"<<endl;
            }
            cout << "Number should Contain TEN digits!" << endl;
            int try_again;
            cout << "Do you wanna try again? 1.Yes 2.No:";
            cin>>try_again;
            if(try_again == 1){
                goto once_more;
            }else{
                cout << "P A Y M E N T \tC A N C E L L E D\t S U C C E S S F U L L Y!" << endl;
                return 0;
            }
        }
        Come_ON:
        string pwd;
        cout <<"\n\n\t\tEnter Your Password:";
        cin>>pwd;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!file.eof()){
            string user_name,pwd1,category;
            file>>user_name>>pwd1>>category;
            if(user_name == UserName){
                if(pwd == pwd1){
                    cout<<"\n\t\tA C C E S S \t\t A L L O W E D"<<endl;
                }else{
                    cout << "\n\t\tA C C E S S \t\t D E N I E D" << endl;
                    int process;
                    cout << "Do you wanna end the process 1.YES 2.NO:";
                    cin>>process;
                    if(process == 1){
                        file.close();
                        return 0;
                    }else{
                        file.close();
                        goto Come_ON;
                    }
                }
            }
        }
        cout <<"\n\n\t\tConfirm Payment 1.YES 2.NO :";
        cin>>confirm_payment;
        if(confirm_payment == 1){
            fstream file;
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/PaymentHistory.txt",ios::app);
            file<<UserName<<" ";
            if(p1){
                file<<mess_food<<" ";
            }else{
                file << "-" << " ";
            }
            if(p2){
                file<<mess_store_purchase_card<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Hostel_room<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Laundry<<" ";
            }else{
                file << "-" << " ";
            }
            file<< "DEBIT/CREDIT" << " " << Card_number << " "<<"TRANSACTION_SUCCESSFULL" << endl;
            file.close();
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Mess.txt",ios::app);
            file << UserName << endl;
            file.close();
            cout << "T R A N S A C T I O N \tD O N E \tS U C C E S S F U L L Y!" << endl;
            return 0;
        }else{
            return 1;
        }
    }
    int UPI(string UserName){
        cout << "\n\n\t\t\t\t\tU P I\n\n"<<endl;
        string UPI_ID;
        int p1,p2,p3,p4,sum = 0;
        p1 = 0;p2 = 0;p3 = 0;p4 = 0;
        cout << "\n\n\t\tDo you wanna pay for Mess food?:";
        cin>>p1;
        if(p1) sum += mess_food;
        cout << "\n\n\t\tDo you wanna pay for Mess_store_card?:";
        cin>>p2;
        if(p2) sum += mess_store_purchase_card;
        cout << "\n\n\t\tDo you wanna pay for Hostel room(1Sharing):";
        cin>>p3;
        if(p3) sum += Hostel_room;
        cout << "\n\n\t\tDo you wanna pay for Laundry(1Year):";
        cin>>p4;
        if(p4) sum += Laundry;
        cout << "\n\n\t\t\t\tThanks for Choosing your needs!";

        if(p1){
            cout << "\n\n\t\tMess Food (Rs.60000)!" << endl;
        }
        if(p2){
            cout << "\n\n\t\tMess Store Card(Rs.10000)!"<<endl;
        }
        if(p3){
            cout << "\n\n\t\tHostel room(Rs.250000)!" << endl;
        }
        if(p4){
            cout << "\n\n\t\tLaundry(Rs.4700)!" << endl;
        }
        int confirm_payment;
        cout <<"\n\n\t\tTotal amount to pay is "<<sum <<"!"<<endl;
        once_more:
        cout << "\n\n\t\tEnter Your UPI ID:";
        cin>>UPI_ID;
        if(UPI_ID.size() != 10){
            if(!isdigit(stoi(UPI_ID))){
                cout << "\n\n\t\t\t\tI N V A L I D \tN U M B E R" << endl;
                cout << "\n\n\t\t\tOnly numbers allowed!"<<endl;
            }
            cout << "Number should Contain TEN digits!" << endl;
            int try_again;
            cout << "Do you wanna try again? 1.Yes 2.No:";
            cin>>try_again;
            if(try_again == 1){
                goto once_more;
            }else{
                cout << "P A Y M E N T \tC A N C E L L E D\t S U C C E S S F U L L Y!" << endl;
                return 0;
            }
        }
        Come_ON:
        string pwd;
        cout <<"\n\n\t\tEnter Your Password:";
        cin>>pwd;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!file.eof()){
            string user_name,pwd1,category;
            file>>user_name>>pwd1>>category;
            if(user_name == UserName){
                if(pwd == pwd1){
                    cout<<"\n\t\tA C C E S S \t\t A L L O W E D"<<endl;
                }else{
                    cout << "\n\t\tA C C E S S \t\t D E N I E D" << endl;
                    int process;
                    cout << "Do you wanna end the process 1.YES 2.NO:";
                    cin>>process;
                    if(process == 1){
                        file.close();
                        return 0;
                    }else{
                        file.close();
                        goto Come_ON;
                    }
                }
            }
        }
        cout <<"\n\n\t\tConfirm Payment 1.YES 2.NO :";
        cin>>confirm_payment;
        if(confirm_payment == 1){
            fstream file;
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/PaymentHistory.txt",ios::app);
            file<<UserName<<" ";
            if(p1){
                file<<mess_food<<" ";
            }else{
                file << "-" << " ";
            }
            if(p2){
                file<<mess_store_purchase_card<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Hostel_room<<" ";
            }else{
                file << "-" << " ";
            }
            if(p1){
                file<<Laundry<<" ";
            }else{
                file << "-" << " ";
            }
            file<< "UPI" << " " << UPI_ID << " "<<"TRANSACTION_SUCCESSFULL" << endl;
            file.close();
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Mess.txt",ios::app);
            file << UserName << endl;
            file.close();
            cout << "T R A N S A C T I O N \tD O N E \tS U C C E S S F U L L Y!" << endl;
            return 0;
        }else{
            return 1;
        }
    }
};

class Mess : public Payment{
    public:
    int payment_gateway(string UserName){
        int mess;
        cout << "\n\t\t\tDo you want to register for MESS FOOD?\n\n\t\t1.YES\n\t\t2.NO\n\t\t\tEnter:";
        cin>>mess;
        int payment_option,payment_status;
        switch(mess){
            case 1: 
                payment:
                cout << "\n\t\t\tEnter the payment option:\n"<<endl;
                cout << "\n\t\t\t\t1.Debit/Credit Card\n" << endl;
                cout << "\n\t\t\t\t2.Paytm\n" << endl;
                cout << "\n\t\t\t\t3.Google Pay\n"<<endl;
                cout << "\n\t\t\t\t4.UPI\n" << endl;
                cin>>payment_option;
                switch(payment_option){
                    case 1:
                            payment_status = Debit_Credit_Card(UserName);
                    case 2:
                            payment_status = Paytm(UserName);
                            break;
                    case 3:
                            payment_status = Google_Pay(UserName);
                            break;
                    case 4:
                            payment_status = UPI(UserName);
                            break;
                    default:
                            payment_status = Google_Pay(UserName);
                            break;

                };
                if(payment_status){
                    return 1;
                }else{
                    return 0;
                }
            case 2:
                cout << "\n\t\t\tYour MESS FOOD facility is disabled!" << endl;
                return 0;
            
            default:
                cout << "\n\t\t\tEnter Correct Payment option!" << endl;
                goto payment;
                break;
        }
    }
    void Mess_food_registration(string User_Name,int choice){
        if(choice == 1){
            int mess_amount = 60000;
            payment_gateway(User_Name);
        }else{
            cout << "YOUR MESS FOOD IS OFFERED BY THE INSTITUTION!" << endl;
        }
    }
};

class Hostel{
    public:
    void structure_hostel_room(int num){
        fstream file;
        if(num == 1){
            //Yamuna
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Yamuna.txt",ios::out);
            for(int i = 1;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "YamunaHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                } 
            }
        }
        else if(num == 2){
            //Ganga
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Ganga.txt",ios::out);
            
                for(int i = 1;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "GangaHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                } 
            }
            
        }
        else if(num == 3){
            //Krishna
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Krishna.txt",ios::out);
            for(int i = 0;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "KrishnaHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                } 
            }
            
        }
        else if(num == 4){
            //Godavari
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Godavari.txt",ios::out);
             for(int i = 1;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "GodavariHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                }
             }
        }
        else if(num == 5){
            //Kaveri
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Kaveri.txt",ios::out);
            for(int i = 1;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "KaveriHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                }
             }
        }
        else if(num == 6){
            //Narmada
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Narmada.txt",ios::out);
            for(int i = 1;i<10;i++){
                for(int j = 1;j<=10;j++){
                    file << "NarmadaHostel" << " " << i*100+j << " " << "-"<< " " << i << " " << "-" << endl;
                }
            }
        }
        file.close();
    }
    string Ganga_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "----------------------------G A N G A-----------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
        int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Ganga.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Ganga.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Ganga.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    string Godavari_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "-------------------------G O D A V A R I--------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
        int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Godavari.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Godavari.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Godavari.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    string Kaveri_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "----------------------------K A V E R I---------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
       int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Kaveri.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Kaveri.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Kaveri.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    string Krishna_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "----------------------------K R I S H N A-------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
        ;int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Krishna.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Krishna.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Krishna.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    string Narmada_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "----------------------------N A R M A D A-------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
        int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Narmada.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Narmada.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Narmada.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    string Yamuna_register(string user_name,int choice){
        string work;
        switch(choice){
            case 1: work = "Student";
                    break;
            case 2: work = "Warden";
                    break;
            case 3: work = "Staff";
                    break;
            default:
                    work = "Student";
                    break;
        }
        cout << "------------------------------------------------------------------"<<endl;
        cout << "----------------------------Y A M U N A---------------------------"<<endl;
        cout << "------------------------------------------------------------------\n\n"<<endl;
        int level;
        int select;
        once_more:
        cout << "\n\t\tEnter Level(1-10):";
        cin>>level;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Yamuna.txt",ios::in);
        vector<string> available_rooms;
        while(!file.eof()){
            string tower_name, room_no, person, category;
            int c_level;
            file>>tower_name>>room_no>>person>>c_level>>category;
            if(c_level == level){
                if(person == "-")
                    available_rooms.push_back(room_no);
            }
        }
        file.close();
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Yamuna.txt",ios::in);
        if(available_rooms.size() == 0){
            cout << "\n\t\tAll rooms are fulled!" << endl;
            goto once_more;
        }else{
            cout << "\n\t\tChoose Room Number" << endl;
            for(int i = 0;i<available_rooms.size();i++){
                cout << "\t\t"<<i<<" " <<available_rooms[i]<<endl;
            }
            
            cout << "\n\t\tEnter room_no:" << endl;
            cin>>select;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::out | ios::trunc);
            while(!file.eof()){
                string tower_name, room_no, person, category;
            int c_level;
            
            file>>tower_name>>room_no>>person>>c_level>>category;
            // cout << "Current_roomNO:"<<room_no<<endl;
            if(room_no == available_rooms[select]){
                file2 << tower_name << " " << room_no << " " << user_name << " " << c_level << " " << work << endl;
            }else{
                file2 << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
            }
            file.close();
            file2.close();
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/hostel.txt",ios::in);
            file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Yamuna.txt",ios::out | ios::trunc);
            while(!file2.eof()){
                string tower_name, room_no, person, category;
                int c_level;
                file2>>tower_name>>room_no>>person>>c_level>>category;
                file << tower_name << " " << room_no << " " << person << " " << c_level << " " << category << endl;
            }
             cout << "\n\t\t\t\tR E G I S T E R \t S U C C E S S F U L L Y" << endl;
            file2.close();
         }
        file.close();
        return available_rooms[select];
    }
    vector<string> register_hostel(string User_Name,int choice){
        int gender;
        once_more:
        cout << "\n\t\t\tAre you 1.Male or 2.Female?:";
        cin>>gender;
        int c;
        int hostel_choice;
        string room;
        switch(gender){
                cout << "\n\t\t\t\tChoose Hostel" << endl;
            case 2:
                cout << "\n\t1.Yamuna" << endl;
                cout << "\n\t2.Ganga" << endl;
                cin>>hostel_choice;
                switch(hostel_choice){
                    case 1:
                        room = Yamuna_register(User_Name,choice);
                        c = 1;
                        break;
                    case 2:
                        room = Ganga_register(User_Name,choice);
                        c = 2;
                        break;
                    default:
                        room = Ganga_register(User_Name,choice);
                        c = 2;
                        break;
                }
                break;
            case 1:
                cout << "\n\t1.Krishna"<<endl;
                cout << "\n\t2.Godavari" << endl;
                cout << "\n\t3.Kaveri"<<endl;
                cout << "\n\t4.Narmada"<<endl;
                cin>>hostel_choice;
                switch(hostel_choice){
                    case 1:
                        room = Krishna_register(User_Name,choice);
                        c = 3;
                        break;
                    case 2:
                        room = Godavari_register(User_Name,choice);
                        c = 4;
                        break;
                    case 3:
                        room = Kaveri_register(User_Name,choice);
                        c = 5;
                        break;
                    case 4:
                        room = Narmada_register(User_Name,choice);
                        c = 6;
                        break;
                    default:
                        room =Narmada_register(User_Name,choice);
                        c = 6;
                        break;
                }
                break;
            default:
                cout << "\n\n\t\t\tEnter correct option!"<<endl;
                goto once_more;
                break;
        }
        vector<string> res;
        res.push_back(to_string(c));
        res.push_back(room);
        return res;
    }
};
class User{
    public:
    User(){
        User_Interface();
    }
    void User_Hostel(string UserName){
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
        cout << "---------------------------------------H O S T E L \t\t S T A T U S---------------------------\n" << endl;
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Hostelers.txt",ios::in);
        while(!file.eof()){
            string user,category, tower_name,room_no;
            file>>user>>category>>tower_name>>room_no;
            if(user == UserName){
                cout << "\n\t\t\tName : "<<UserName<<endl;
                cout << "\n\t\t\tCategory : "<<category<<endl;
                cout<<"\n\t\t\tHostel Tower : "<<tower_name << endl;
                cout << "\n\t\t\tRoom Number : " << room_no << endl;
                break;
            }
        }
        file.close();
        int enter;
        enter = 0;
        once_more:
        cout << "Do you want to back to screen(Enter any number)?:";
        cin>>enter;
        if(enter){
            profile(UserName);
        }else{
            goto once_more;
        }
    }
    void User_transaction(string UserName){
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
        cout << "--------------------------------T R A N S A C T I O N \t H I S T O R Y------------------------------\n" << endl;
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
        int is_student = 0;
        fstream check;
        check.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!check.eof()){
            string user,pwd,category;
            check>>user>>pwd>>category;
            if(user == UserName){
                if(category == "Student"){
                    is_student = 1;
                    break;
                }else{
                    is_student = 0;
                    break;
                }
            }
        }
        check.close();
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/PaymentHistory.txt",ios::in);
        while(!file.eof()){
            
            string user, mess_food, mess_card,hostel_fee,laundry,payment_method,payment_id, condition;
            file>>user>>mess_food>>mess_card>>hostel_fee>>laundry>>payment_method>>payment_id>>condition;
            if(user == UserName){
            if(is_student){
            cout << "\n\t\tMess Food Transaction Amount : " << mess_food << endl;
            cout << "\n\t\tMess Store Card Amount : "<<mess_card << endl;
            cout << "\n\t\tHostel fee Amount : " << hostel_fee << endl;
            cout << "\n\t\tLaundry Amount : " << laundry << endl;
            cout << "\n\t\tPayment Mode : " << payment_method<<endl;
            cout << "\n\t\tPayment ID : "<< payment_id << endl;
            cout << "\t\t\t\t\t\t\t"<<condition<<endl;
            break;
            }
            else{
                cout << "Your MESS FOOD is offered by UNIVERSITY"<<endl;
            }
            }
        }
        file.close();
        int response = 0;
        once_more:
        cout << "Enter any number to back:";
        cin>>response;
        if(response){
            profile(UserName);
        }else{
            goto once_more;
        }
    }
    void User_data(string UserName){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        string user_name, pwd, category;
        while(!file.eof()){
            file>>user_name>>pwd>>category;
            cout << user_name << endl;
            if(user_name == UserName){
                break;
            }
        }
        file.close();
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
        cout << "\n\t\t\tName :" << user_name << endl;
        cout << "\n\t\t\tCategory :" << category << endl;
        cout << "\n\t\t\tUniversity : " << "SRM UNIVERSITY AP, AMARAVATI" << endl;
        cout << "---------------------------------------------------------------------------------------------------------\n" << endl;
    }
    void Create_Account(){
        cout << "------------------------------------------------------------"<<endl;
        cout << "------------------C R E A T E  A C C O U N T----------------"<<endl;
        cout << "------------------------------------------------------------\n\n" << endl;
        string User_Name, Pwd, C_Pwd, Category;
        int choice;
        user_exist:
        cout << "\tUser Name:";
        cin>>User_Name;
        fstream user_file;
        user_file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!user_file.eof()){
            string user_name, pwd, category;
            user_file >> user_name >> pwd>> category;
            if(user_name == User_Name){
                cout << "\n\t\tThe user Already Exist!" << endl;
                goto user_exist;
            }
        }
        user_file.close();
        cout << endl << endl;
        password_correction:
        cout << "\tPassword:";
        cin>>Pwd;
        cout << endl << endl;
        cout << "\tConfirm Password:";
        cin>>C_Pwd;
        cout << endl << endl;
        once_more:
        cout << "\tAre you \n\n\t\t\t1.Student\n\n\t\t\t2.Warden\n\t\t\t3.Staff"<<endl;
        cin>>choice;
        switch(choice){
            case 1: Category = "Student";
                    break;
            case 2: Category = "Warden";
                    break;
            case 3: Category = "Staff";
                    break;
            default:
                    cout << "Enter the Correct Choice!" << endl<<endl;
                    goto once_more;
                    break;
        };
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::app);
        if(Pwd == C_Pwd){
            file << User_Name << "\t" << Pwd << "\t" << Category << endl;
            cout << "Did you register Hostel? 1.Register 2.Yes";
            Hostel h;
            fstream file2;
            file2.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Hostelers.txt",ios::app);
            vector<string> result;
            result = h.register_hostel(User_Name,choice);
            int hostel_tower = stoi(result[0]);
            switch(hostel_tower){
                case 1:
                file2 << User_Name << "\t" << Category << "\t" << "Yamuna" << "\t" << result[1] << endl;
                break;
                case 2:
                file2 << User_Name << "\t" << Category << "\t" << "Ganga" << "\t" << result[1] << endl;
                break;
                case 3:
                file2 << User_Name << "\t" << Category << "\t" << "Krishna"<< "\t" << result[1] <<endl;
                break;
                case 4:
                file2 << User_Name << "\t" << Category << "\t" << "Godavari" << "\t" << result[1] << endl;
                break;
                case 5:
                file2 << User_Name << "\t" << Category << "\t" << "Kaveri" << "\t" << result[1] << endl;
                break;
                case 6:
                file2 << User_Name << "\t" << Category << "\t" << "Narmada" << "\t" << result[1] << endl;
                break;
                default:
                break;
            }
            Mess user_mess_facility;
            user_mess_facility.payment_gateway(User_Name);
            cout << "\t\tAccount Created Successfully!\n\n"<<endl;
            login();
        }else{
            cout << "\t\tPassword Not Matching!\n\n" << endl;
            file.close();
            goto password_correction;
        }
    }
    void ganga_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Ganga.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void yamuna_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Yamuna.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void godavari_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Godavari.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void kaveri_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Kaveri.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void krishna_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Krishna.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void narmada_status(){
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Narmada.txt",ios::in);
        for(int i = 1;i<10;i++){
            cout << "\n\t\t\t\t\t\tLEVEL "<<i<<endl<<endl;
            cout << "\n\n====================================================================================================="<<endl;
            for(int j = 1;j<=10;j++){
                string hostelname, room, person, level, category;
                file >> hostelname>>room>>person>>level>>category;
                cout << "\n\n\t\t\t\tRoom No : " << room << endl;
                cout << "\n\n\t\t\t\tPerson : " << person << endl;
                cout << "\n\n\t\t\t\tCategory : " << category << endl;
                cout << "\n\n====================================================================================================="<<endl;
        
            }   
            }
        file.close();
    }
    void profile(string UserName){
        User_data(UserName);
        int is_warden = 0;
        fstream check;
        check.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        while(!check.eof()){
            string user,pwd,category;
            check>>user>>pwd>>category;
            if(user == UserName){
                if(category == "Warden"){
                    is_warden = 1;
                    break;
                }else{
                    is_warden = 0;
                    break;
                }
            }
        }
        check.close();
        cout << "\n\t\t1.Transaction History!:";
                    cout << "\n\t\t2.Hostel Status:";
                    string user,category,tower,room;
                        fstream file;
                        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/Hostelers.txt",ios::in);
                        while(!file.eof()){
                            file >> user>>category>>tower>>room;
                            if(user == UserName){
                                break;
                            }
                        }
                    if(is_warden){
                        cout << "\n\t\t3.Hostel Tower Review" << endl;
                        cout << "\n\t\t4.LogOut"<<endl;
                        cout << "\n\t\t5.Exit"<<endl;
                        
                        int enter;
                        cout <<"\n\t\tEnter Your need:";
                    cin>>enter;
                    switch(enter){
                        case 1:
                                User_transaction(UserName);
                                break;
                        case 2:
                                User_Hostel(UserName);
                                break;
                        case 3:
                                if(tower == "Ganga"){
                                    ganga_status();
                                }
                                else if(tower == "Yamuna"){
                                    yamuna_status();
                                }else if(tower == "Narmada"){
                                    narmada_status();
                                }else if(tower == "Godavari"){
                                    godavari_status();
                                }else if(tower == "Kaveri"){
                                    kaveri_status();
                                }else if(tower == "Krishna"){
                                    krishna_status();
                                }
                                once_more:
                                int res;
                                cout << "Do you wanna get back? (enter any number):";
                                cin>>res;
                                if(res){
                                    profile(UserName);
                                }else{
                                    goto once_more;
                                }
                                        break;
                                break;
                        case 4: login();
                                break;
                        case 5: exit(0);
                                break;
                        default:
                                login();
                                break;
                    };
                        file.close();
                        
                    }else{
                        cout << "\n\t\t3.LogOut"<<endl;
                        cout << "\n\t\t4.Exit";
                        int enter;
                    cout <<"\n\t\tEnter Your need:";
                    cin>>enter;
                    switch(enter){
                        case 1:
                                User_transaction(UserName);
                                break;
                        case 2:
                                User_Hostel(UserName);
                                break;
                        case 3:
                                login();
                                break;
                        case 4: exit(0);
                                break;
                        default:
                                login();
                                break;
                            };
                    }
                    
    }
    void login()
    {
        string UserName, Pwd;
        cout << "------------------------------------------------------------"<<endl;
        cout << "-------------------------L O G I N--------------------------"<<endl;
        cout << "------------------------------------------------------------\n\n" << endl;
        cout << "\tUser Name:";
        cin>>UserName;
        cout << endl << endl;
        cout << "\tPassword:";
        cin>>Pwd;
        cout << endl << endl;
        fstream file;
        file.open("/Users/prashanthi/Desktop/C++ Project-Sem3/DataBase/users.txt",ios::in);
        int user_found = 0;
        while(!file.eof()){
            string file_user, file_pwd, Category;
            file >> file_user >> file_pwd>>Category;
            if(file_user == UserName){
                user_found = 1;
                if(file_pwd == Pwd){
                    //Display User Data;
                    profile(UserName);  
                }else{
                    int second_choice;
                    once_more:
                    cout << "\t\t\tEnter Correct UserName and Password!\n\n"<<endl;
                    cout << "\t\tDo you want to create account? \n\t\t\t1.Yes \n\t\t\t2.Login Again 3.exit\n"<<endl;
                    cout << "\t\tEnter your need?:";
                    cin>>second_choice;
                    switch(second_choice){
                        case 1: Create_Account();
                                break;

                        case 2: file.close();
                                login();
                                break;
                        case 3:  exit(0);
                                    break;
                        default:
                                cout <<"\t\t\tEnter Correct Choice!"<<endl<<endl;
                                file.close();
                                goto once_more;
                                break;
                    }
                    
                }
            }
        }
        if(!user_found){
            int choice1;
            cout << "\t\t\t\t\tNo Account with this UserName!\n\n" << endl;
            cout << "\n\t\tDo you want to create a Account? 1.Yes 2.No & Login 3.exit:";
            cin>>choice1;
            cout << endl << endl;
            switch(choice1){
                case 1: Create_Account();
                        break;
                case 2: file.close();
                        login();
                        break;
                case 3: exit(0);
                        break;
                default: 
                        file.close();
                        login();
                        break;
            };
        }
        file.close();

    }

    void User_Interface(){
        int user_choice;
        cout << "------------------------------------------------------------"<<endl;
        cout << "--------------------Welcome to Our Portal-------------------" << endl;
        cout << "------------------------------------------------------------\n\n"<<endl;
        cout << "\t\t 1.Login\n\n"<<endl;
        cout << "\t\t 2.Create_Account\n\n" << endl;
        cout << "\t Enter Your need:";
        cin>>user_choice;
        switch(user_choice){
            case 1: login();
                    break;
            case 2: Create_Account();
                    break;
            default: Create_Account();
                    break;
        };
    }

};

int main(){
    
    // //This Code is to allot/ structure all towers!.
    // Hostel h;
    // h.structure_hostel_room(3);
    
    User User1;
    
    return 0;
}
