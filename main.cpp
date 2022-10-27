#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//////////Funtion Prototypes///////////////
void printMatrix(double grade[][8], int N_ROWS, int N_COLS);
double GradeAvg(double grade[][8], int N_ROWS, int N_COLS);
double FinalGrade(double grade[][8], int N_ROWS, int N_COLS);
int findLowest(double grade[][8], int N_ROWS, int N_COLS);
double BestFinal(double grade[][8], int N_ROWS, int N_COLS);

int main()
{ 
  const int N_ROWS = 5;
  const int N_COLS = 8;
  double grade[N_ROWS][N_COLS] = 
                        {
                        {1, 100, 100, 100, 100},
                        {2, 100, 0, 100, 0},
                        {3, 82, 94, 73, 86},
                        {4, 64,74, 84, 94},
                        {5, 94, 84, 74, 64}
                        };
  cout << "Student" << setw(10)<< "Grade 1"<< setw(10)<< "Grade 2"<<setw(10)<< "Grade 3"<< setw(10)<< "Grade 4 "<< setw(8)<< "Avg."<< setw(8)<< "Final"<< setw(12)<< "Best Final"<<endl;

//grade[N_ROWS][5] = grade[N_ROWS][5];
GradeAvg(grade, N_ROWS, N_COLS);
FinalGrade(grade, N_ROWS, N_COLS);
findLowest(grade,N_ROWS, N_COLS);
BestFinal(grade, N_ROWS, N_COLS);
printMatrix (grade, N_ROWS, N_COLS);
  
  return 0;
  }

void printMatrix(double grade[][8], int N_ROWS, int N_COLS){
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++) {
      cout << setw(9) << grade[r][c];
      
    }
    cout << endl;
  }
  return;
  }
double GradeAvg(double grade[][8], int N_ROWS, int N_COLS)
{
    for (int r = 0; r < N_ROWS; r++) 
    {
    for (int c = 1; c < 4; c++)
      {
       grade[r][5] = (grade[r][1]  + grade[r][2] +grade[r][3] + grade[r][4])/4;
      }
    //cout<<grade[r][6]<<endl;
    
    }
   return grade[N_ROWS][5];
}
//final grade
double FinalGrade(double grade[][8], int N_ROWS, int N_COLS)
{
    for (int r = 0; r < N_ROWS; r++) 
    {
    for (int c = 1; c < 4; c++)
      {
       grade[r][6] =((grade[r][1] * .2) + (grade[r][2]*.3) +(grade[r][3] * .3) + (grade[r][4] *.2));
      }
    //cout<<grade[r][6]<<endl;
    
    }
   return grade[N_ROWS][6];
}

//top 3 final grade
double BestFinal(double grade[][8], int N_ROWS, int N_COLS)
{
    for (int r = 0; r < N_ROWS; r++) 
    {
    for (int c = 1; c < 4; c++)
      {
       grade[r][7] = (grade[r][1] + grade[r][2] +grade[r][3] + grade[r][4])/3 ;
      }
    //cout<<grade[r][6]<<endl;
    
    }
   return grade[N_ROWS][7];
}


int findLowest(double grade[][8], int N_ROWS, int N_COLS)
{
for (int r = 0; r < N_ROWS; r++) 
{
  for (int c = 1; c < 4; c++)
    double lowest = 0;
    double lowest = grade[r][1];

	{
		if (grade[r][2] < lowest)
			grade[r][2] = lowest;
		else if (grade[r][3] < lowest)
			lowest = grade[r][3];
		else if (grade[r][4] < lowest)
			lowest = grade[r][4];
	}
  lowest = 0;
	return grade[N_ROWS][c];
} 
  }
/*void calcAverage(int test1, int test2, int test3, int test4, int test5,int lowest)
{
	double average;

	average = test1 + test2 + test3 + test4 + test5 - lowest / 4;
	cout << "The average is: " << average << endl;
}*/