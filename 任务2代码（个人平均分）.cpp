#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;
int main()
{
int a[5][4]={0};    
int  i, j;
 ifstream  infile; 
 ofstream  outfile;

 
 
 //���ļ��������� 
 infile.open("cj1.txt"); 
 for(i=0; i<4; i++)      // i �������� 
    {    
	for(j=0; j<3; j++) // j �������� 
        infile >> a[i][j];   //  �ļ����ݶ��뵽�ڴ�a[i][j] 
     } 
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              cout << a[i][j]<<" ";  
		cout<<endl;   
     }    
     
     
     
for(i=0; i<4; i++)      /*  i �������� */
    {    for(j=0; j<3; j++) /* j �������� */
                a [i][3] +=  a[i][j]; 
		 a [i][3]  /= 3;     
     } 
 
 //����ʾ��������óɼ��� 
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              cout << a[i][j]<<" ";  
		cout<<endl;   
     }
 
 
 //���ɼ���������ļ� 
 outfile.open("cj2.txt");
 for(i=0; i<5; i++)      
    {    for(j=0; j<4; j++) 
              outfile << a[i][j]<<" ";  
		outfile<<endl;   
     }
 

infile.close();
outfile.close(); 
 
  return 0;
}

