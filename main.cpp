#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector <int> & dataGrade) {
    int n = dataGrade.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j < n - 1;j++) {
            if(dataGrade[j] > dataGrade[j+1]) {
                /*Hacer funcion void swap()*/
                int temp = dataGrade[j];
                dataGrade[j]= dataGrade[j+1];
                dataGrade[j+1]= temp;
            }
        }
    }
}

int main()
{
    int grades;
    vector <int> dataGrade;
    int i=0;

    while(i<7) {
        cout << "INSERTE LA CALIFICACION DEL ESTUDIANTE: ";
        cin >> grades;
        dataGrade.push_back(grades);
        i++;
    };

    bubbleSort(dataGrade);
    for(int calif:dataGrade) {
        cout << calif<<endl;
    }

    return 0;
}
