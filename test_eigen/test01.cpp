#include<iostream>
#include<Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
    int n=10;
    Eigen::VectorXd ones_vec=Eigen::MatrixXd::Ones(n,1);
    cout<<ones_vec.transpose()<<endl;
    return 0;
}