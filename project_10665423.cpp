#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <iomanip>

using namespace std;

//administrator Class
class admin{

public:
    void setId(int di){
        id = di;
    }
    void setPwd(int pwd){
        password = pwd;
    }
//courses function
    void editCourses(){
        system("cls");
        int _edcos;
        string cosname, delcos, edcos, col, dep;
        char confirm;

        cout<<"Enter\n1. to add course \n2. to delete course\n\n";
        cin>>_edcos;

        system("cls");

        switch (_edcos)
        {
        case 1:
            cout<<"Enter School or Faculty\n";
                cin>>col;
            cout<<"Enter department\n"<<endl;
                cin>>dep;
            cout<<"Enter course code to add\n";
                cin>>cosname;
            cout<<cosname<<" has been added successfully\n";
                system("pause");
           break;

        case 2:
            cout<<"Enter course Code to delete\n";
                cin>>delcos;
            cout<<"Are you sure you want to delete "<<delcos<<"? Y / N .\n"<<endl;
                cin>>confirm;

            if(confirm == 'Y' ||confirm == 'y')

                cout<<delcos<<" successfully deleted\n";

            else
                if(confirm =='N' || confirm == 'n')

                    cout<<delcos<<" has been maintained\n\n";

            system("pause");
            break;

        default:
            cout<<"You entered the wrong input\nPlease enter 1 or 2\n";
            editCourses();

        }

    }
//student function
    void editStudent(){
        system("cls");              //Declaration of variables
        string stdDetails[5];
        int _edstd;
        string delstd;
        char confirm;

        cout<<"\nEnter\n1. To provide new student entry\n2. To delete student Entry\n";
        cin>>_edstd;

        system("cls");

        switch (_edstd)
        {
        case 1:
            for (int n=0; n<1; n++){
            cout<<"Enter student Index number\t\t";
                cin>>stdDetails[0];
            cout<<"Enter student name\t\t";
                cin>>stdDetails[1];
            cout<<"Enter Programme of study\t\t";
                cin>>stdDetails[2];
            cout<<"Enter Hall of residence\t\t";
                cin>>stdDetails[3];
            cout<<"Enter Date of birth (dd mm yy)\t\t";
                cin>>stdDetails[4];
            }
            cout<<endl;
            cout<<stdDetails[1]<<" with ID number "<<stdDetails[0]<<" has been added successfully!!\n\n";
            system("pause");
            break;

        case 2:
            cout<<"Enter Student ID to delete\n";
                cin>>delstd;
            cout<<"Are you sure you want to delete "<<delstd<<"? Y / N .\n"<<endl;
                cin>>confirm;
            system("pause");
            break;

        default:
            cout<<"You entered the wrong input\nPlease enter 1 or 2\n";
            editStudent();

        }
    }
//staff function
    void editStaff(){
        system("cls");
        string stffDetails[4];
        int _edstff;
        string delstff;
        char confirm;

        cout<<"Enter\n1. to create new staff entry \n2. to delete staff entry\n";
            cin>>_edstff;

        system("cls");

        switch (_edstff)
        {
        case 1:
            for (int nn=0; nn<1; nn++){
                cout<<"Enter Staff Identification Number\t\t";
                    cin>>stffDetails[0];
                cout<<"Enter Staff Name\t\t";
                    cin>>stffDetails[1];
                cout<<"Enter Staff Qualification\t\t";
                    cin>>stffDetails[2];
                cout<<"Enter Staff contact\t\t";
                    cin>>stffDetails[3];
                }
                cout<<endl<<endl;
                cout<<stffDetails[1]<<" with ID "<<stffDetails[0]<<" has been added to staff list\t"<<endl;
                system("pause");
                break;

        case 2:
                cout<<"Enter staff ID to delete\n";
                    cin>>delstff;
                cout<<"Are you sure you want to delete "<<delstff<<"?\t Y / N .\n"<<endl;
                    cin>>confirm;
                if (confirm == 'Y' || confirm == 'y')
                cout<<"Staff "<<delstff<<"was deleted successfully"<<endl;
                else if (confirm == 'Y' || confirm == 'n')
                cout<<"Action aborted\n";
                system("pause");
                break;

        default:
                cout<<"You entered the wrong input\nPlease enter 1 or 2\n";
                editStaff();

        }
        system("pause");

    }

    void assignCourse(){
        system("cls");
        int n, stdID;
        cout<<"Enter student ID to Assign course\n";
            cin>>stdID;
        cout<<"Enter number of courses you wish to assign to student "<<stdID<<endl;
            cin>>n;
        string courses[n];

        for (int i4=0; i4<n; i4++){
            cout << "Enter "<<(i4+1)<<" course code \n";
                cin>>courses[i4];
            }
        cout<<"Courses Assigned to student "<<stdID<<" are \n";
        for (int i5=0; i5<n; i5++){
            cout<<courses[i5]<<endl;
            }
        system("pause");

         }
        void printRecord(){
            system("cls");
            ofstream file1;
            file1.open("stuDentRec.txt");
            string id;

            cout<<"Enter student ID to print acdemic record\n";
                cin>>id;
            cout<<"Student Record printed in file \n";
            file1<<"ID: "<<id<<endl;

            cout<<"                                              ACADEMIC RECORD                                                     \n";
            cout<<"Student number: "<<id<<"                                                                   DOB: "<<" Birth Date "<<endl;
            cout<<"                                                                                          Sex: "<<" Gender"<<endl;
            cout<<"Name: "<<"fName "<<" sName "<<"                                                                          Date printed:\n";
            cout<<"_______________________________________________________________________________________________________________________\n";
            cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<"GPA"<<"          \n";
            cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";


            file1<<"COURSE CODE \t\t\tCREDIT\tGRADE\tGPT"<<endl;
            for (int i7=0; i7<6; i7++){
                file1<<(i7+1)<<endl;
            }
         system("pause");

        }



private:
    string password = "CSCD205admin";
    string id = "12345678";

};

class staff {
public:
    void rewardGrade(){
        system("cls");
        ofstream tofile;
        string coscode, stdID;
        char grade;

        cout<<"\nEnter course code to Reward grade\n";
            cin>>coscode;
        cout<<"\nEnter student ID to reward Grade\n";
            cin>>stdID;
        cout<<"\nEnter the Grade for student "<<stdID<<endl;
            cin>>grade;

        cout<<"\n\nGrade Rewarded successfully\n\n";
        system("pause");
    }
};


class student{
public:
    void viewCourses(){
        string id;
        system("cls");
        cout<<"Enter student ID to View courses registered\n";
            cin>>id;
        int courses[6];
        cout<<"Your courses registered for this semester are \n";
        for (int i6=0; i6<6; i6++){
            cout<<courses[i6]<<". "<<endl;

        }
        system("pause");
    }
    void printRecord(){
        system("cls");
        ofstream file1;
        file1.open("stuDentRec.txt");
        string id;

        cout<<"Enter student ID to print acdemic record\n";
        cin>>id;

        cout<<"                                              ACADEMIC RECORD                                                     \n";
        cout<<"Student number: "<<id<<"                                                                   DOB: "<<" Birth Date "<<endl;
        cout<<"                                                                                          Sex: "<<" Gender"<<endl;
        cout<<"Name: "<<"fName "<<" sName "<<"                                                                          Date printed:\n";
        cout<<"_______________________________________________________________________________________________________________________\n";
        cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<"GPA"<<"          \n";
        cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";

        cout<<"Student Record printed in file\n";
        file1<<"ID: "<<id<<endl;
        file1<<"COURSE CODE \t\t\tCREDIT\tGRADE\tGPT"<<endl;
        for (int i7=0; i7<6; i7++){
            file1<<(i7+1)<<endl;
        }

        system("pause");
    }


};

void intro(){
    admin adm;
    admin *adminptr;
    adminptr = &adm;
    string admoptions[]={"\n1. To Edit Courses", "2. To Edit Student list", "3. To Edit Staff list", "4. To Assign student course","5. To Print Academic Record", "6. To Exit"};
    int adminVary;


    cout<<"<Welcome Admin!>\n"
        <<"You may Enter\n\n";
    for (int i1=0; i1<6; i1++){
        cout<<admoptions[i1]<<endl;
    }
    cin>>adminVary;
    switch (adminVary)
    {
    case 1:
        adminptr->editCourses();
        break;
    case 2:
        adminptr->editStudent();
        break;
    case 3:
        adminptr->editStaff();
        break;
    case 4:
        adminptr->assignCourse();
        break;
    case 5:
        adminptr->printRecord();
        break;
    case 6:
        exit(0);

    default:
        cout<<"You gave an invalid response \n choose between 1 and 6\n";
        break;

}
}

void staffAccess(){

    staff stff;
    staff *stffptr;
    stffptr = &stff;
    string staffoptions[]={"1. Reward student Grade",  "2. Exit"};
    int stffVary;

    cout<<"\nWelcome Staff !!\n"
        <<"\nYou may Enter\n\n";
            for (int i3=0; i3<2; i3++)
                  {cout<<staffoptions[i3]<<endl;}
                     cin>>stffVary;

    switch (stffVary)
    {
    case 1:
        stffptr->rewardGrade();
        break;
    case 2:
        exit(0);
    default:
        cout<<"Invalid Input\n";
        staffAccess();

    }

}

    void studentAccess(){

        student std;
        student *stdptr;
        stdptr = &std;
        string studentoptions[]= {"1. To View Assigned courses", "2. To Print Accademic record ", "3. To Exit"};
        int stdVary;


        cout<<"\nWelcome Student !\n"
            <<"You may Enter\n\n";
        for (int i2=0; i2<2; i2++){
            cout<<studentoptions[i2]<<endl;
        }
            cin>>stdVary;
            switch (stdVary)
        {
            case 1:
            stdptr->viewCourses();
                break;
            case 2:
            stdptr->printRecord();
                break;
            case 3:
                exit(0);

            default:
            cout<<"Invalid input Please enter 1 or 2\n";
            studentAccess();
       }}


int main()
{
    //"\n\n\nThis program inludes a password but for assignment sake I have excluded it...\n\n\n";

    bool on = true;
    short logtype;
    while (on){                                             //loop statement to keep the program running

        system("cls");

    cout<<"<><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout<<"Welcome to the student management System\n";
    cout<<"<><><><><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"Please Enter\n1. To log in as Administrator\n2. To log in as Student\n3. To log in as Staff\n4. To Close application\n\n";
    cin>>logtype;                                          //choose log in type

    system("cls");

    if (logtype==1)
    {
       intro();
    }
    else if (logtype==2)
        {
            studentAccess();

        }

         else if (logtype==3)
              {
               staffAccess();
              }
              else if (logtype==4){
                    on=false;
                    exit(0);     }

                   else {
                        cout<<"\nInvalid input\nPlease Enter 1, 2,  3 or 4\n\n";
                    }
}



}
