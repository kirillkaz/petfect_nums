#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите последовательность чисел, чтобы узнать, сколько среди них совершённых"<<endl;
    cout<<"Числа будут приниматься до тех пор, пока вы не введете 0"<<endl;
    int num = 1;
    int result =0;
    cin>>num;
    while (num!=0){
        int sum =0; // сумма делителей
        for (int i=1;i<=num/2;i++){
            if ((num % i) == 0) sum+=i;
        }
        if (sum == num) result+=1;
        cin>>num;
    }
    cout<< "Количество совершённых чисел в введенной вами последовательности = " <<result<<endl;
    return 0;
}
