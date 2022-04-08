 //#include <iostream>
 //#include <sstream>
 //#include <string>
 //using namespace std;
 //// ham string c-string chua nghi ra :v
 //int Number(string s){
 //    stringstream convert(s.substr(0, s.find('/')));
 //    int value;
 //    convert >> value;
 //    return value;
 //}

 //int dayOfMonth(int month, int year)
 //{
 //    if (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)
 //    {return 31;}
 //    else if (month == 2)
 //    {
 //        return ((year % 4 == 0 && year % 400 == 0) || (year % 100 != 0)) ? 29 : 28;
 //    }
 //    else 
 //    {
 //        return 30;
 //    }
 //}

 //int main()
 //{
 //    string s;
 //    cout << "Nhap vao ngay va thang : ";
 //    getline(cin,s);
 //    int datetotal = Number(s); // days
 //    s=s.substr(s.find('/')+1,s.length()); // month 20/15/2000
 //    int month = Number(s);
 //    if(month<=12)
 //    {
 //        s=s.substr(s.find('/')+1,s.length()); // year
 //        int year =Number(s); //2000
 //        for(int i =1;i<month;i++)
 //        {
 //            datetotal +=dayOfMonth(month,year);
 //        }
 //        cout << "\nDate of year " << datetotal << endl;
 //    }
 //    else
 //    {
 //        cout << "Wrong date or month , year can you check input ? ";
 //    }
 //    return 0;
 //}