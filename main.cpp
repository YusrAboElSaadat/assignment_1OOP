#include <iostream>
#include <iomanip>
#include <valarray>
using namespace std;

// A structure to store a matrix
struct matrix
{
  valarray<int> data ;       //valarray that will simulate matrix
  int row, col;

};
void createMatrix (int row, int col, int num[], matrix& mat) {
  mat.row = row;
  mat.col = col;
  mat.data.resize (row * col);
  for (int i = 0; i < row * col; i++)
    mat.data [i] = num [i];
}
matrix operator+  (matrix mat1, matrix mat2); // Add if same dimensions
  if (operator== "+"){
  	int sum=0;
  	for(int i=0; i<size; i++){

	  for(int j=0; j<size; j++){
	  cout<<matrix mat1[i][j]+matrix mat2[i][j]]<<endl;
	  }
  }

  }
matrix operator-  (matrix mat1, matrix mat2); // Sub if same dimensions

  else if(operator=="-"){
  int dif=0;
  	for(int i=0; i<size; i++){

	  for(int j=0; j<size; j++){
	  cout<<mat1[i][j]-mat2[i][j]<<endl;
	  }
  }
}
matrix operator*  (matrix mat1, matrix mat2); // Multi if col1 == row2

else if (operator=="*"){
	int multiply=0
	for(int i=0; i<size; i++){

	  for(int j=0; j<size; j++){
	  cout<<mat1[i][j]*mat2[i][j]<<endl;
	  }
}
}

matrix operator+  (matrix mat1, int scalar);  // Add a scalar

int scalar;
cin>>scalar>>endl;

for(int i=0; i<=size; i++){
 	for(int j=0; j<=i; j++){

 int sum1=0;
 sum1=mat1[i][j]+scalar;
 cout<<sum1<<endl;

 }
}
matrix operator-  (matrix mat1, int scalar);  // Subtract a scalar

if (operator=="-"){
 for(int i=0; i<=size; i++){
 	for(int j=0; j<=i; j++){

 int dif1=0;
 dif1=matrix mat1[i][j]-scalar;
 cout<< dif1<<endl;
 }
}
matrix operator*  (matrix mat1, int scalar);  // Multiple by scalar

if (operator=="*"){
 for(int i=0; i<=size; i++){
 	for(int j=0; j<=i; j++){

 int multiply1=0;
 multiply1=matrix mat1[i][j]*scalar;
 cout<<multiply1<<endl;

 }
}

matrix operator+= (matrix& mat1, matrix mat2)
{

    for (int i = 0; i < mat1.row * mat1.col; i++)
        mat1.data [i] += mat2.data [i];

    return mat1 ;
}

matrix operator-= (matrix& mat1, matrix mat2)
{

    for (int i = 0; i < mat1.row * mat1.col; i++)
        mat1.data [i] += mat2.data [i];

    return mat1 ;
}

matrix operator+= (matrix& mat, int scalar)
{
    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] += scalar;

    return mat ;
}

matrix operator-= (matrix& mat, int scalar)
{
    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] -= scalar;

    return mat ;

}
void   operator++ (matrix& mat)
{

    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] ++;

}

void   operator-- (matrix& mat)
{

    for (int i = 0; i < mat.row * mat.col; i++)
        mat.data [i] --;

}

istream& operator>> (istream& in, matrix& mat)
{
    int row, col;
    in >> row >> col;
    mat.row = row;
    mat.col = col;
    mat.data.resize (row * col);
    for (int i = 0; i < row * col; i++)
        in >> mat.data [i] ;
}
//The program takes matrix and checks if it is a square matrix
//A square matrix is one which has equal number of row and columns.
 bool isSquare (matrix mat){
     if (mat.row==mat.col){
        cout<<" True is a square matrix "<<endl;}
        else{
            cout<<" False is not a square matrix "<<endl;
        }

 }
 //The program takes matrix and checks if it is a square matrix
//A square matrix is one which has equal number of row and columns.
 bool isSymetric (matrix& mat){

     if(mat.row==mat.col){
     for(int i=0;i<mat.row;i++){
     for(int j=0;j<mat.col;j++)
        {
            if ((mat.data[i,j]) != (mat.data[j,i]))
                  return true;
            else if ((mat.data[i,j]) == -(mat.data[j,i]))
                    return false;

                }}}
                else
                    return false;
                }


//An identity matrix is a square matrix with main diagonal elements as 1 and rest 0
bool isIdentity (matrix mat){
   if (mat.row != mat.col)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }

for (int i = 0; i < mat.row; i++)
        for ( int j = 0; j < mat.col; j++)
        {
            if ((mat.data[mat.row,mat.col] != 1) && (mat.data[mat.col,mat.row] != 0))
            {
                return false ;

            }
        }}
        //compare between 2 matrix is equal or not
bool operator ==( matrix mat1, matrix mat2)

    {
        if(mat1.data[mat1.col]==mat2.data[mat2.col]&&(mat1.data[mat1.row]==mat2.data[mat2.row])){
                ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<mat2;
            cout <<" True is equal " <<endl;
          }
        else
            {  ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<mat2;
                cout <<" False not equal "<<endl ;}
    }
    //check between 2 matrix =!
    bool operator !=( matrix mat1, matrix mat2)

    {
        if(mat1.data[mat1.col]!=mat2.data[mat2.col]&&(mat1.data[mat1.row]!=mat2.data[mat2.row])){
              ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<endl<<mat2;
            cout <<"True there's not same" << endl ;
            //return true;
        }else
            {  ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<endl<<mat2;
                cout <<" false  there's same "<<endl ;
               //return false;
                }
    }
    //Rows and columns are interchanged, rows of original matrix
    //becomes column in transpose and columns of original matrix becomes rows in transpose
    matrix transpose(matrix mat){
        matrix newdata;
        newdata.col=mat.row;
        newdata.row=mat.col;
        newdata.data.resize(mat.col*mat.row);
        for (int i = 0; i < newdata.row; i++){
        for (int j = 0; j < newdata.col; j++){
         newdata.data[i*newdata.col + j]= mat.data[j *mat.col + i ] ;
        }}
        return newdata;
        }




//show the operator "like cout or print"
ostream& operator<< (ostream& out, matrix mat){
    for (int i = 0; i < mat.row; i++){
        for (int j = 0; j < mat.col; j++){
            out << mat.data[i*mat.col + j] << " ";
        }
        out << std::endl;
    }
   // out << std::endl;
    return out;
}
int main()
   {
  //ex.iSidentity int data1 [] = {1,0,0,0,1,0,0,0,1};
  // ex.not symmetric int data1 [] = {0 ,1,-2, -1, 0, 3, 2, -3, 0};
int data1 [] = {1,2,3,4,5,6,7,8};
//ex.ISsquare int data1[]={10,20,20,10};
  int data2 [] = {13,233,3,4,5,6,6,};
  int data3 [] = {10,100,10,100,10,100,10,100};
  matrix  mat1, mat2, mat3;
   createMatrix (4,2, data1, mat1);
  createMatrix (2, 3, data2, mat2);
  createMatrix (4, 2, data3, mat3);
 //isIdentity ( mat1);

  //cout<<mat1<<endl;
  //cout<<mat2<<endl;
 // cout<<mat3<<endl;
     //operator !=( mat3,  mat3);
     //operator==(mat2,mat1);
    // cout<<transpose( mat1);
    // isSquare ( mat1);
/*if (isSymetric(mat1))
        cout << "Yes";
    else
        cout << "No";
    return 0;

    //isSymetric ( mat1);

    /*if (isIdentity(mat2))
        cout << "Yes is Identity";
    else
        cout << "Not is Identity";
    return 0;
*/
//operator !=(  mat1,  mat2);
/* The next code will not work until you write the functions


      cout << (mat1 + mat3) << endl << endl;
      cout << (mat3 + mat3) << endl << endl;

      ++mat1;
      cout << mat1 << endl;

      mat1+= mat3 += mat3;
      cout << mat1 << endl;
      cout << mat2 << endl;
      cout << mat3 << endl;

    */



}




